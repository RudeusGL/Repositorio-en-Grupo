#include <iostream>

using namespace std;

int main() {
    
    int calificacion;
  

    cout << "Ingresa la calificacion que obtuviste";
    cin >> calificacion;


    if ( calificacion >= 90 && calificacion <= 100 )  {
      
        cout << "A"<< endl;
    }
 
    else if  (calificacion <= 89 && calificacion >= 80)   {
   
        cout << "B"<< endl;
    }
    
    else if  (calificacion <= 79 && calificacion >= 70)   {
   
      cout << "C" << endl;
  }

  else if  (calificacion <= 69 && calificacion >= 61)   {
   
    cout << "D" << endl;
}

else if (calificacion < 61)  {
   
  cout << "F" << endl;
}
else {
     
  cout << "No existe esa calificacion" << endl;

}
}