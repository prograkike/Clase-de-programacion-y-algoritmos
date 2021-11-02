# include <iostream>
# include <cmath>
# include <cstdlib>

using namespace std;

// Ejemplo de uso de la libreria math
// Este programa calcula las raíces de una ecuación cuadrática
// de la forma ax2 + bx + c = 0
// utilizando la fórmula general

int main()
{
 // Declaramos las variables para los coeficientes
 // cuadrático (a), lineal (b), constante (c)   
 // y para las raíces (x1, x2)
 float a, b, c, x1, x2;

 // Agregamos el string para validar que no tenga comportamiento
 // extraño si el usuario se equivoca
 char valida_a[100];

// Pedimos los valores de los coeficientes al usuario

do
{
    cout << "Dame el valor del coeficiente cuadrático ";
    cin >> valida_a;
    a = atof(valida_a);
} while (a==0); // a no debe ser 0

cout << "Dame el valor del coeficiente lineal ";
cin >> b;

cout << "Dame el valor del coeficiente constante ";
cin >> c;

// Esta versión no valida el determinante
// calculamos la primera raíz
x1 = (-b + sqrt(pow(b,2.0)-4*a*c))/(2*a);
// y la segunda raiz
x2 = (-b - sqrt(pow(b,2.0)-4*a*c))/(2*a);

//Desplegamos ls resultados
cout << "La primera raíz es "<< x1 <<endl;
cout << "La segunda raíz es "<< x2 <<endl;

return 0;
}