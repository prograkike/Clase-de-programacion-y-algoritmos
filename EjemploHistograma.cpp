# include <iostream> // Librería para usar cin y cout
# include <stdlib.h> // Librería para poder usar comandos del sistema
using namespace std; //para no usar el prefijo std antes de cin y cout

// Este programa despliega un histograma de ventas de una zapateria 
// El eje x representa el id del producto
// El eje y la cantidad de productos vendidos en el mes
int main()
{ 
    // Vamos a usar una constante para definir la cantidad máxima de productos
    const int maximo_productos = 5;
    // Y otra para la altura del histograma (que es la cantidad máxima de pares vendidos por producto)
    const int maximo_piezas = 10;

    // Primero definimos las variables
    int productos_vendidos[maximo_productos]; 
    char histograma[maximo_piezas][maximo_productos];    // Usaremos el arreglo para dibujar el histograma, asumimos que no se venden más de 10 piezas de cada producto
    
    // Este arreglo se debe actualizar de acuerdo a la cantidad máxima de productos para que funcione bien el programa
    string descripciones[maximo_productos] = { "Zapato dama","Zapato caballero", "Tenis dama", "Tenis caballero","Bota dama"};
    
    // Hay que pedir la cantidad de piezas vendidas por producto
    for (int indice=0; indice<maximo_productos;indice=indice+1)
    {
        cout << "Dame la cantidad de piezas vendidas del producto "<<descripciones[indice];
        cin >> productos_vendidos[indice];
    }
    //Ahora hay que llenar el histograma, las columnas representan los productos, y los renglones van a estar rellenos por cada producto vendido
    //Vamos a ir llenando columna por columna
    for (int columna = 0; columna < maximo_productos; columna = columna+1)
    {
        for (int renglon = maximo_piezas - 1; renglon >-1; renglon = renglon -1)
        {
            if (renglon < productos_vendidos[columna])
            {
                histograma[renglon][columna] = 219;  // Codigo ascii de un cuadro blanco
            }
            else
            {
                histograma[renglon][columna] = 32;   // Código ascii del espacio en blanco
            }
        }

    }
    // Limpiamos la pantalla
    system("cls");
    //Ahora hay que imprimirlo
    for (int renglon = maximo_piezas-1; renglon >-1; renglon = renglon-1)
    {
        cout << renglon+1<< " ";
        for (int columna = 0; columna<maximo_productos; columna = columna+1)
        {
            cout << histograma[renglon][columna];
        }
        cout << endl;
    }

    return 0;
}