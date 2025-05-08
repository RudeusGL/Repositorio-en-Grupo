#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3, num4, num5, opcion;

    cout << " ingresa 5 numeros: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
  

  cout << "elige un numero de los que ingresaste: ";
  cin >> opcion;
   
  for (int i = 1; i <= 20; i++) {
    cout << opcion << " por "  << i << "=" << opcion * i << endl;
}

}