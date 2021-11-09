# include <iostream> // Librería para usar cin y cout
using namespace std; // para no usar el prefijo std adelante de cin y cout

// Este programa pide 12 calificaciones y saca promedio, menor y mayor
int main()
{
  // Primero declaramos las variables de entrada
  int calificaciones[12]; // Para esta versión solo hay 12 alumnos

  // Luego declaramos las variables de salida
  float promedio;
  int mayor, menor;

  // Primero pedimos los datos al usuario
  for (int indice=0; indice < 12; indice = indice+1)
  {
      cout << "Dame la calificacion #" << indice+1<<" ";
      cin >> calificaciones[indice]; 
  }

  // Ahora vamos a calcular el promedio y encontrar al mayor y al menor
  // pero se va a recorrer el arreglo al revés
    promedio = 0;  // Para inicializar el acumulador
    mayor = calificaciones[11]; // Para poder encontrar el mayor
    menor = calificaciones[11]; // Para poder encontrar el menor
 for (int indice=11; indice > -1 ; indice = indice-1)
  {
      // Se acumula la calificacion actual
      promedio = promedio + calificaciones[indice]; 

      // Si la calificacion actual es mayor, actualizo el mayor
      if (calificaciones[indice] > mayor)
      {
          mayor = calificaciones[indice];
      }

       // Si la calificacion actual es menor, actualizo el menor
      if (calificaciones[indice] < menor)
      {
          menor = calificaciones[indice];
      }
  }
   // Aqui promedio tiene el acumulado de las calificaciones
   // Se debe dividir para que sea el promedio
   promedio = promedio / 12;
   
   // Se despliegan las variables de salida
   cout << "El promedio es "<<promedio<<endl;
   cout << "La calificación mayor es "<<mayor<<endl;
   cout << "La calificación menor es "<<menor<<endl;

    //return 0;
}