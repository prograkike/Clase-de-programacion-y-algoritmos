# include <iostream> // Para uso de cin y cout

using namespace std;  // Para no tener que poner el rpefijo std antes del cin y el cout

// Este programa ejemplifica el uso de arreglos de dos dimensiones

int main()
{
    // Primero vamos a definir valores constantes para el número máximo de renglones y de columnas del arreglo
    const int maximo_renglones = 3;   // En este ejemplo habrá 3 productos
    const int maximo_columnas = 7;    // Y se guardaran sus ventas para cada día de la semana, por eso ponemos 7 columnas

    // Vamos a declarar un arreglo de dos dimensiones y ponerle valores constantes para no pedirle datos al usuario
    float datos[maximo_renglones][maximo_columnas] = { {123.3,100.5,0,329.7,432.5,0,0},{0,0,0,0,0,0,0},{1000,432.89,0,0,0,0,0}};

    // Vamos a desplegar el arreglo recorriendolo por renglones
    cout << "Asi se ve el arreglo si lo recorremos por renglones"<<endl;
    for (int renglon = 0; renglon < maximo_renglones; renglon=renglon+1)
    {
        for (int columna = 0; columna < maximo_columnas; columna = columna+1)
        {
            cout << datos[renglon][columna] << " ";
        }
        cout << endl;
    }
    // Vamos a desplegar el arreglo recorriendolo por columnas
    cout << "Asi se ve el arreglo si lo recorremos por columnas"<<endl;
    for (int columna = 0; columna < maximo_columnas; columna = columna+1)
    {
        for (int renglon = 0; renglon < maximo_renglones; renglon=renglon+1)
        {
             cout << datos[renglon][columna] << " ";
        }
        cout << endl;
    }
    return 0;
}