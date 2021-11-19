# include <iostream>  // Para utilizar cin y cout
# include <stdlib.h>  // Librería para poder usar comandos del sistema y funciones de conversion de datos
# include <fstream>   // Para no tener que usar el prefijo std antes de cin y cout

using namespace std;

// Este programa es un ejemplo de manejo de validación de datos y de uso de menus 
// Y tambien de manejo de archivos

int main()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string usuario_administrador = "ID_del_administrador";
    const string usuario_vendedor = "ID_del_vendedor";
    const string usuario_cliente = "ID_del_cliente";
    const string pwd_administrador = "Password_1";
    const string pwd_vendedor = "Password_2";
    const string pwd_cliente = "Password_3";
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";
    const int numero_intentos = 3;

    // Declaramos variables de entrada
    string opcion_str, id, password;
    int opcion, contador_intentos;
    fstream archivo;

    // En esta panaderia solamente se manejan tres tipos de pastel y 10 tipos de pan
    // de dos tamaños cada uno, lo que nos da un total de 26 registros en el archivo cuando mucho
    // Por eso los rreglos tendran un tamaño maximo de 26
    string tipo[26], modelo[26], tamanio[26], modelo_a_buscar, tamanio_a_buscar;
    float precio[26];
    int existencia[26], total_productos = 0, vendidos;
    bool bandera;

    //Se pone el nombre fijo
    char nombre[] = "panaderia.txt";

    // Lo primero es abrir el archivo
    archivo.open(nombre);

    // Se procesan todos los registros del archivo y se guardan en los arreglos
    do
    {
        archivo >> tipo[total_productos];
        archivo >> modelo[total_productos];
        archivo >> tamanio[total_productos];
        archivo >> precio[total_productos];
        archivo >> existencia[total_productos];
        total_productos++;
    }while (archivo.eof()!=true);

    // Se cierra el archivo porque ya no se ocupa, solo se van a procesar los datos
    archivo.close();

    // Todo el código se va a repetir hasta que el usuario indique que quiere terminar
    do
    {
        /* code */
    
    
        // Vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
        system("cls");
        // Hacemos primera linea del marco
        cout << "          "<<char(201);
        for (int i=1; i<=100;i++) 
        {
        cout << char(205); 
        }
        cout << char(187)<<endl;
        // Y ahora hacemos 3 lineas hacia abajo
        for (int i=1; i<=3;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        // Ponemos el letrero principal
        cout << "          " << char(186) << "                                         MENU PRINCIPAL                                             "<< char(186) << endl;
        // Y ahora hacemos 3 lineas hacia abajo
        for (int i=1; i<=3;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        // Ponemos las opciones
        cout << "          " << char(186) << "      01 Acceder como administrador" << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      02 Acceder como vendedor     " << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      03 Acceder como cliente      " << linea_blanco_65 << char(186) << endl;
        cout << "          " << char(186) << "      04 Salir del programa        " << linea_blanco_65 << char(186) << endl;
        // Y ahora hacemos 5 lineas hacia abajo
        for (int i=1; i<=5;i++)
        {
            cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
        }
        //Ponemos la linea de abajo
        cout << "          "<<char(200);
        for (int i=1; i<=100;i++) 
        {
        cout << char(205); 
        }
        cout << char(188)<<endl;

        //Pedimos la opción al usuario, la capturamos como string para no tener problemas si el usurio se equivoca
        cout << "                                  Opcion ";
        cin >> opcion_str;

        // Cambiamos de string a entero
        opcion = atoi(opcion_str.c_str());

        // Y utilizamos un switch para ejecutar las diferentes opciones
        switch (opcion)
        {
        case 1:
            contador_intentos = 0;
            cout << "Login administrador"<<endl;
            do
            {   
                cout << "Usuario :";
                cin >> id;
                cout << "Contraseña :";
                cin >> password;
                contador_intentos++;

            } while ((id != usuario_administrador || password != pwd_administrador ) && contador_intentos < numero_intentos);
            if (contador_intentos == numero_intentos)
            {
                cout << "Lo siento no tienes las credenciales correctas"<<endl;
            }
            else
            {
                cout << "Si pudiste entrar como administrador"<<endl;
                cout << "Dame el modelo del producto a buscar ";
                cin >> modelo_a_buscar;
                cout << "Dame el tamanio del producto a buscar";
                cin >> tamanio_a_buscar;
                bandera = false;

                for (int i=0; i<total_productos;i++)
                {
                    if (modelo[i] == modelo_a_buscar && tamanio[i] == tamanio_a_buscar)
                    {
                        cout << "Hay "<<existencia[i]<<" "<<modelo_a_buscar<<endl;
                        cout << "Cuantos se vendieron? ";
                        cin >> vendidos;
                        existencia[i] -= vendidos; // Es igual a existencia[i] = existencia[i] - vendidos
                        bandera = true;
                    }
                }

                if (!bandera)
                {
                    cout << "Lo siento pero no existe lo que buscas"<<endl;
                }
            }
            break;
        case 2:
            cout << "Login vendedor"<<endl;
            system("pause");
            break;
        case 3:
            cout << "Login cliente"<<endl;
            system("pause");
            break;
        case 4:
            cout << "Vamos a salir"<<endl;
            system("pause");
            break;
        default:
            cout << "Por favor da una opcion valida (1, 2, 3 o 4)"<<endl;
            system("pause");
            break;
        }
    } while (opcion != 4);

    // Y ahora vamos a vaciar la info de los arreglos al archivo
     archivo.open(nombre, fstream::out);

    // Se procesan todos los registros del archivo y se guardan en los arreglos
    for(int i=0; i<total_productos; i++)
    {
        archivo << tipo[i]<<endl;
        archivo << modelo[i]<<endl;
        archivo << tamanio[i]<<endl;
        archivo << precio[i]<<endl;
        archivo << existencia[i]<<endl;
    }
    // Se cierra el archivo para que se graben los cambios
    archivo.close();
    
    return 0;
}