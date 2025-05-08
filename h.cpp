#include <iostream> 
using namespace std;

int CalcularMCD ( int a, int b){
    cout <<" Proceso para calcular MCD de " << a << " y " << b << endl;
    while (b != 0 )
    {
        cout << a << " , " << b << endl; 
        int residuo = a % b; 
        a = b;
        b = residuo; 

    }
    cout << "Resultado: " << a << endl; 
    return a; 
}

int mai(){
    int num1, num2; 

    cout << "Ingresa el primer numero: " << endl; 
    cin >> num1; 

    cout << "Ingresa el segundo numero: " << endl; 
    cin >> num2;

    CalcularMCD(num1, num2); 

    return 0; 
}