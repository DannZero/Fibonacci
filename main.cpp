#include<iostream>
using namespace std;

int fibonacci(int n);
signed int fibonacciRecursivo(int n);

int main (){
	int n;
	cout << "Ingrese el numero de la sucesion de Fibonacci a mostrar: ";
	cin >> n;
	int resultado;
	/*resultado = fibonacci(n);
	cout << "Resultado iterativo: " << resultado << endl;*/
	resultado = fibonacciRecursivo(n);
	cout << "Resultado recursivo: " << resultado << endl;
}


int fibonacci(int n){
	if (n < 2)
		return n;
	int a = 0, b = 1, c;
	for (int i = 1 ; i < n ; ++i){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

signed int fibonacciRecursivo(int n){
	if(n < 2){
		return n;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}
