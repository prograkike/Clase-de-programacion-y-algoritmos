#include <iostream> // Esta libreria es para manejo de cin y cout
#include <fstream>  // Esta libreria es para el manejo de archivos de entrada y salida

using namespace std; // Esto es para no tener que usar std antes de cin, cout y archivos

// Este ejemplo lee varios registros de una panaderia y los guarda en arreglos
// Los registros estan guardados en el archivo que se llama panaderia.txt
// Cada producto tiene 5 renglones del archivo asociados: tipo (pastel o pan), 
// modelo, tamaño (chico,grande), precio y cantidad en existencia

int main()
{
// Primero declaramos las variables que vamos a usar
fstream archivo;

// En esta panaderia solamente se manejan tres tipos de pastel y 10 tipos de pan
// de dos tamaños cada uno, lo que nos da un total de 26 registros en el archivo cuando mucho
// Por eso los rreglos tendran un tamaño maximo de 26
string tipo[26], modelo[26], tamanio[26];
float precio[26];
int existencia[26], contador=0, total_productos = 0;

//Se pone el nombre fijo
char nombre[] = "panaderia.txt";

// Lo primero es abrir el archivo
archivo.open(nombre);

// Se procesan todos los registros del archivo y se guardan en los arreglos
do
{
    archivo >> tipo[contador];
    archivo >> modelo[contador];
    archivo >> tamanio[contador];
    archivo >> precio[contador];
    archivo >> existencia[contador];
    contador = contador + 1;
}while (archivo.eof()!=true);

// Se cierra el archivo porque ya no se ocupa, solo se van a procesar los datos
archivo.close();

// En contador tenemos la cantidad de registros válidos en el arreglo
cout << "Se leyeron "<<contador<<" registros del archivo"<<endl;

//Vamos a calcular cuantos productos hay en existencia en total
for (int indice=0; indice<contador;indice=indice+1)
{
   total_productos = total_productos + existencia[indice];    
}
cout << "Hay "<<total_productos<<" en existencia"<<endl;
return 0;

}