/* Nombres:   Filtzer Gorbach Gabriel
	      Ponce de León Súchil Daniel
   Descripción: Este programa calcula el digito de la serie de Fibonacci que el usuario pida. Dicho calculo se realiza 
   por dos metodos: iterativo (con un ciclo), y recursivo (llamando al metodo iterativo las veces necesarias). 
   El objetivo de este programa es comparar los resultados de cada uno de los metodos para comprender sus diferencias.
*/ 

#include<iostream>
using namespace std;

int fibonacci(int n);      //se declara la función iterativa
signed int fibonacciRecursivo(int n);   //se declara la función recursiva

int main (){
	int n;   //numero de digito deseado
	cout << "Ingrese el numero de la sucesion de Fibonacci a mostrar: ";
	cin >> n; //se recibe el numero de digito deseado
	int resultado;   //se declara variable donde se guardará el resultado
	resultado = fibonacci(n); //se asigna el resultado a aquello que devuelve la funcion iterativa
	cout << "Resultado iterativo: " << resultado << endl;
	resultado = fibonacciRecursivo(n); //se asigna el resultado a aquello que devuelve la funcion recursiva
	cout << "Resultado recursivo: " << resultado << endl;
}


int fibonacci(int n){    //creacion de la funcion iterativa
	if (n < 2)	// en caso de que n sea menor que dos, el digito buscado es igual a n
		return n;
	int a = 0, b = 1, c;
	for (int i = 1 ; i < n ; ++i){    //ciclo principal de la funcion, donde se suma el digito 'a' y el siguiente ('b')
		c = a + b;                //para formar 'c', que despues de las iteraciones necesarias es el digito deseado
		a = b;
		b = c;
	}
	return c;
}

signed int fibonacciRecursivo(int n){		//creacion de la funcion recursiva
	if(n < 2){				//en caso de que n sea menor que dos, el digito buscado es igual a 
		return n;
	}
	return fibonacci(n-2) + fibonacci(n-1);  //aqui se llama a la funcion iterativa, generando asi el metodo recursivo
}
