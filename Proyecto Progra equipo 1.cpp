# include <iostream>  
# include <stdlib.h>  
 
using namespace std;
 
string tipo[26]={"Plana", " Plana", "Curva", "Curva"};
string modelo[26]={"Deportiva","Casual", "Deportiva", "Casual"};
string tamanio[26]={"Ajustable","Chica","Mediana","Grande"};
float precio[26]={300.0,500.0,300.0,500.0};
int existencia[26]={30,25,30,35};
int total_de_productos = 4;
 
void despliegaMenu()
{
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";
  
    system("cls");
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
 
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
     }
   
    cout << "          " << char(177) << "                                         Troyano Gorras                                             "<< char(186) << endl;
    
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          " << char(177) << "      01 Acceder como administrador" << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      02 Acceder como cliente      " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      03 Salir del programa        " << linea_blanco_65 << char(177) << endl;
    
    for (int i=1; i<=5;i++)
    {
        cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
    cout << "                                  Opcion ";
 
}
 
void despliegaMenuAdmin()
{
    
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";
 
    
    system("cls");
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
    
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
     }
    
    cout << "          " << char(177) << "                                      Bienvenidos a Gorras troyanos                                            "<< char(177) << endl;
    
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          " << char(177) << "      01 Mostrar catalogo          " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      02 Agregar producto          " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      03 Consulta de Producto      " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      04 Inventario Monetario      " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      05 Regresar al menu anterior " << linea_blanco_65 << char(177) << endl;
    
    for (int i=1; i<=5;i++)
    {
        cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
    cout << "                                  Opcion ";
 
}
 
bool leerCredenciales(const string usuario, const string pwd, const int intentos)
{
 
 
    
    int contador_intentos;
 
    
    string id, password;
 
    
    bool valido;
 
    contador_intentos = 0;
    do
    {
        cout << "Usuario :";
        cin >> id;
        cout << "Contraseña :";
        cin >> password;
        contador_intentos++;
 
    } while ((id != usuario || password != pwd ) && contador_intentos < intentos);
    if (contador_intentos == intentos && (id != usuario || password != pwd))
    {
        cout << "Lo siento no tienes las credenciales correctas"<<endl;
        valido = false;
 
    }
    else
    {
        cout << "Bienvenido administrador"<<endl;
        valido = true;
     }
    return valido;
}
 
 
void procesosAdmin()
{
   
    string opcion_str,buscar;
    int opcion,encontrado;
    char cambio;
 
    
    string tipo_nuevo,modelo_nuevo, tamanio_nuevo;
    int existencia_nueva;
 
    
     int ancho=11;
 
    
    do
    {
  
        
        despliegaMenuAdmin();
        
        cin >> opcion_str;
 
        
        opcion = atoi(opcion_str.c_str());
 
        
        switch (opcion)
        {
        case 1:
            system("cls");
            cout<< left;
            cout.width(ancho+1);
            cout << "Tipo";
            cout.width(ancho+1);
            cout<<"Modelo";
            cout.width(ancho+1);
            cout<<"Tamanio";
            cout.width(ancho+1);
            cout<<"Precio";
            cout.width(ancho+1);
            cout<<"Existencia";
            cout<<right<<endl;
            for (int i=0; i<total_de_productos; i++)
            {
                cout.width(ancho);
                cout <<tipo[i]<<" ";
                cout.width(ancho);
                cout <<modelo[i]<<" ";
                cout.width(ancho);
                cout <<tamanio[i]<<" ";
                cout.width(ancho);
                cout <<precio[i]<<" ";
                cout.width(ancho);
                cout << existencia[i]<<"\n";
 
            }
 
            system("pause");
            break;
        case 2:
            cout << "Agregar producto"<<endl;
                cout<<" Tipo de gorra"<<endl;
                cin>>tipo[total_de_productos];
                cout<<" Modelo de gorra"<<endl;
                cin>> modelo[total_de_productos];
                cout<<" Tamanio de gorra"<<endl;
                cin>> tamanio[total_de_productos];
                cout<<" Precios de gorra"<<endl;
                cin>> precio[total_de_productos];
                cout<<" Existencia de gorra"<<endl;
                cin>> existencia[total_de_productos];
                total_de_productos=total_de_productos+1;
            system("pause");
            break;
        case 3:
            cout<<"buscas por A)tamanio B)tipo o C)modelo? "<<endl;
            cin>>cambio;
            if(cambio=='A'||cambio=='a'){
                cout<<"Que tamanio busca?"<<endl;
                cin>>buscar;
                for (int i = 0; i < total_de_productos; i++)
                {
                    if (tamanio[i]==buscar)
                    {
                         cout.width(ancho);
                         cout <<tipo[i]<<" ";
                         cout.width(ancho);
                         cout <<modelo[i]<<" ";
                         cout.width(ancho);
                         cout <<tamanio[i]<<" ";
                         cout.width(ancho);
                         cout <<precio[i]<<" ";
                         cout.width(ancho);
                         cout << existencia[i]<<"\n";
 
                    }
                    
                }
                
            }
            if(cambio=='B'||cambio=='b'){
                cout<<"Que tipo busca?"<<endl;
                cin>>buscar;
                for (int i = 0; i < total_de_productos; i++)
                {
                    if (tipo[i]==buscar)
                    {
                         cout.width(ancho);
                         cout <<tipo[i]<<" ";
                         cout.width(ancho);
                         cout <<modelo[i]<<" ";
                         cout.width(ancho);
                         cout <<tamanio[i]<<" ";
                         cout.width(ancho);
                         cout <<precio[i]<<" ";
                         cout.width(ancho);
                         cout << existencia[i]<<"\n";
 
                    }
                    
                }
                
            }
            if(cambio=='C'||cambio=='c'){
                cout<<"Que modelo busca?"<<endl;
                cin>>buscar;
                for (int i = 0; i < total_de_productos; i++)
                {
                    if (modelo[i]==buscar)
                    {
                         cout.width(ancho);
                         cout <<tipo[i]<<" ";
                         cout.width(ancho);
                         cout <<modelo[i]<<" ";
                         cout.width(ancho);
                         cout <<tamanio[i]<<" ";
                         cout.width(ancho);
                         cout <<precio[i]<<" ";
                         cout.width(ancho);
                         cout << existencia[i]<<"\n";
 
                    }
                    
                }
                
            }
            break;
        case 4:
            cout<< "Inventario Monetario"<<endl;
            int plana_D_A, plana_C_C, curva_D_M, curva_C_G, Total;
            plana_D_A = 300*30;
            plana_C_C = 500*25;
            curva_D_M = 300*30;
            curva_C_G = 500*35;
            Total = plana_D_A + plana_C_C + curva_D_M + curva_C_G;
            cout<< "Plana Deportiva Ajustable""\t"<<char(36)<<plana_D_A<<endl;
            cout<< "Plana Casual Chica""\t"<<char(36)<<plana_C_C<<endl;
            cout<< "Curva Deportiva Mediana""\t"<<char(36)<<curva_D_M<<endl;
            cout<< "Curva Casual Grande""\t"<<char(36)<<curva_C_G<<endl;
            cout<< "Total Dinero ""\t"<<char(36)<<Total<<endl;
            break;
        case 5:
            cout << "Vamos a regresar"<<endl;
            break;
        default:
            cout << "Por favor da una opcion valida (1,2,3,4 o 5)"<<endl;
            system("pause");
            break;
        }
    } while (opcion != 3);
    
}
 
void despliegaMenuCliente()
{
    
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";
 
    
    system("cls");
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
    
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
     }
    
    cout << "          " << char(177) << "                                      Bienvenidos a Gorras troyanos                                            "<< char(177) << endl;
    
    for (int i=1; i<=3;i++)
    {
            cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          " << char(177) << "      01 Mostrar catalogo          " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      02 Comprar Producto          " << linea_blanco_65 << char(177) << endl;
    cout << "          " << char(177) << "      03 Regresar al menu anterior " << linea_blanco_65 << char(177) << endl;
    
    for (int i=1; i<=5;i++)
    {
        cout << "          " << char(177) << linea_blanco_100 << char(177) << endl;
    }
    
    cout << "          "<<char(177);
    for (int i=1; i<=100;i++)
    {
        cout << char(177);
    }
    cout << char(177)<<endl;
    cout << "                                  Opcion ";
}
 void procesosCliente()
{
   
    string opcion_str,buscar;
    int opcion;
 
    
    string tipo_nuevo,modelo_nuevo, tamanio_nuevo;
    int existencia_nueva;
 
    
     int ancho=11;
 
    
    do
    {
  
        
        despliegaMenuCliente();
        
        cin >> opcion_str;
 
        
        opcion = atoi(opcion_str.c_str());
 
        
        switch (opcion)
        {
        case 1:
            system("cls");
            cout<< left;
            cout.width(ancho+1);
            cout << "Tipo";
            cout.width(ancho+1);
            cout<<"Modelo";
            cout.width(ancho+1);
            cout<<"Tamanio";
            cout.width(ancho+1);
            cout<<"Precio";
            cout.width(ancho+1);
            cout<<"Existencia";
            cout<<right<<endl;
            for (int i=0; i<total_de_productos; i++)
            {
                cout.width(ancho);
                cout <<tipo[i]<<" ";
                cout.width(ancho);
                cout <<modelo[i]<<" ";
                cout.width(ancho);
                cout <<tamanio[i]<<" ";
                cout.width(ancho);
                cout <<precio[i]<<" ";
                cout.width(ancho);
                cout << existencia[i]<<"\n";
 
            }
 
            system("pause");
            break;
        case 2:
            cout << "Que tipo de gorra busca"<<endl;
                cin>>buscar;
                for (int i = 0; i < total_de_productos; i++)
                {
                    if (tipo[i]==buscar)
                    {
                        precio[i]=precio[i]-1;
 
                    }
                    
                }
                
             break;
            system("pause");
            break;
        case 3:
            cout << "Vamos a regresar"<<endl;
            break;
        default:
            cout << "Por favor da una opcion valida (1, 2, o 3)"<<endl;
            system("pause");
            break;
        }
    } while (opcion != 3);
}
 
int main()
{
    
    const string usuario_administrador = "Troyano_Admin";
    const string usuario_cliente = "Troyano_Cliente";
    const string pwd_administrador = "Admin_123";
    const string pwd_cliente = "Cliente_123";
    const int numero_intentos = 3;
 
    
    string opcion_str;
    int opcion;
 
    string modelo_a_buscar, tamanio_a_buscar;
    int existencia[26], total_productos = 0, vendidos;
 
    
 
    
    do
    {
  
        
        despliegaMenu();
        
        cin >> opcion_str;
 
        
        opcion = atoi(opcion_str.c_str());
 
       
        switch (opcion)
        {
        case 1:
            cout << "Login administrador"<<endl;
            if (leerCredenciales(usuario_administrador, pwd_administrador,numero_intentos))
            {
                procesosAdmin();
 
            }
            system("pause");
            break;
        case 2:
            cout << "Login cliente"<<endl;
            if (leerCredenciales(usuario_cliente, pwd_cliente,numero_intentos))
            {
                procesosCliente();
            }
            system("pause");
            break;
        case 3:
            cout << "Vamos a salir"<<endl;
            system("pause");
            break;
        default:
            cout << "Por favor da una opcion valida (1, 2 o 3 )"<<endl;
            system("pause");
            break;
        }
    } while (opcion != 3);
    
    return 0;
}
