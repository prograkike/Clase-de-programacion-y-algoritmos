# include <iostream>
# include <fstream>

using namespace std;

// Este es un ejemplo sencillo de manejo de archivos de texto
int main()
{
fstream archivo;
float numero1;
int numero2;
char linea[30];
string linea2;

archivo.open("documento.txt", fstream::out|fstream::app);
archivo << 123.23<<endl <<23;
archivo.close();
archivo.open("documento.txt", fstream::in);
archivo >>linea;
cout << "Lo que se leyo del archivo es:"<<linea;



return 0;

}