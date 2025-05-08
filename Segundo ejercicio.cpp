#include <iostream>
using namespace std;

int main() {
    int opcionTipo, opcionBebida;
    char continuar;
    double total = 0.0;

    do {
        cout << " Calma Cafe " << endl;
        cout << "Seleccione el tipo de bebida que quiere:" << endl;
        cout << "1. Cafe nacional Q25 cada uno" << endl;
        cout << "2. Cafe importado Q35 cada uno" << endl;
        cin >> opcionTipo;

        switch(opcionTipo) {
            case 1:
                cout << "Cafe nacional:"<< endl;
                cout << "1. Cafe de Antigua Q25" << endl;
                cout << "2. Cafe de Huehue Q25" << endl;
                cout << "3. Cafe de Coban Q25" << endl;
                cout << "4. Cafe de Xela Q25" << endl;
                cout << "5. Cafe de Peten Q25" << endl;

                cout << "Selecciona una opcion: ";
                cin >> opcionBebida;
                if(opcionBebida >= 1 && opcionBebida <= 5) {
                    total += 25;
                }
                break;

                case 2:
                cout << "Cafe importado:" << endl;
                cout << "1. Cafe de Colombia" << endl;
                cout << "2. Cafe de Peru" << endl;
                cout << "3. Cafe de Etiopia" << endl;
                cout << "4. Cafe de Paris" << endl;
                cout << "5. Cafe de España" << endl;
                cout << "Selecciona una opcion: ";
                cin >> opcionBebida;
                if(opcionBebida >= 1 && opcionBebida <= 5) {
                    total += 35;
                }
                break;

            case 3:
                total = 0.0;
                cout << "Cuenta reiniciada";
                break;

            case 4:
                cout << "Gracias por su visita";
    

            default:
                cout << "La opcion que elegiste no es valida";
        }

        cout << "Desea agregar otra bebida: ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Total a pagar: Q" << total << endl;
}