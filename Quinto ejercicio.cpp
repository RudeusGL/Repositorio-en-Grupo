#include <iostream>

using namespace std;

int main() {
    
    int num;
  

    cout << "Ingresa un numero del 1 al 7:";
    cin >> num;


    if ( num == 1)  {
      
        cout << "Te toca Trabajar" << endl;
    }
 
    else if  (num == 2)   {
   
        cout << "Te toca hacer ejercicio" << endl;
    }
    
    else if  (num == 3)   {
   
        cout << "Te toca ir al cine" << endl;
    }

    else if  (num == 4)   {
   
        cout << "Te toca lavar el carro" << endl;
    }

    else if  (num == 5)   {
   
        cout << "Te toca bañarte" << endl;
    }

    else if  (num == 6)   {
   
        cout << "Te toca salir con tu pareja" << endl;
    }
    
    else if  (num == 7)   {
   
        cout << "Te toca ir a la iglesia" << endl;
    }

     else {
     
        cout << "No seguiste instrucciones" << endl;

    }
}