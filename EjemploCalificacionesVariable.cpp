# include <iostream> // Librería para usar cin y cout
using namespace std; // para no usar el prefijo std adelante de cin y cout

// Este programa pide tantas calificaciones como el usuario diga
// y saca promedio, menor y mayor
int main()
{
  // Necesitamos una variable para pedir la cantidad de calificaciones
  int cantidad;

  // No se puede declarar el arreglo de calificaciones antes de pedir la cantidad

  // Declaramos las variables de salida
  float promedio;
  int mayor, menor;

  // Y pedimos la cantidad de calificaciones al usuario
  cout << "¿Cuántas calificaciones se van a procesar ";
  cin >> cantidad;
  
  // Ahora si podemos declarar el arreglo
  int calificaciones[cantidad]; 

  // Pedimos los datos al usuario
  for (int indice=0; indice < cantidad; indice = indice+1)
  {
      cout << "Dame la calificacion #" << indice+1<<" ";
      cin >> calificaciones[indice]; 
  }

  // Ahora vamos a calcular el promedio y encontrar al mayor y al menor
  // pero se va a recorrer el arreglo al revés
    promedio = 0;  // Para inicializar el acumulador
    mayor = calificaciones[cantidad-1]; // Para poder encontrar el mayor
    menor = calificaciones[cantidad-1]; // Para poder encontrar el menor
 for (int indice= cantidad-1; indice > -1 ; indice = indice-1)
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
   promedio = promedio / cantidad;
   
   // Se despliegan las variables de salida
   cout << "El promedio es "<<promedio<<endl;
   cout << "La calificación mayor es "<<mayor<<endl;
   cout << "La calificación menor es "<<menor<<endl;

    //return 0;
}