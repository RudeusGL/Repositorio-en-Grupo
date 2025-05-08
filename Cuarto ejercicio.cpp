#include <iostream>

using namespace std;

int main() {
    int dia;
    int signo;
    string mes;

    cout << "Ingresa tu dia de nacimiento: ";
    cin >> dia;

    cout << "Ingresa tu mes de nacimiento: ";
    cin >> mes;
    

    if ( mes == "enero" && dia >= 20 || mes == "febrero" && dia <= 18) {
        cout << "Tu signo zodiacal es acuario" << endl;

    } else if ( mes == "febrero" && dia >= 19 || mes == "marzo" && dia <= 20) {
        cout << "Tu signo zodiacal es piscis" << endl;

    } else if ( mes == "marzo" && dia >= 21 || mes == "abril" && dia <= 19) {
        cout << "Tu signo zodiacal es aries" << endl;

    } else if ( mes == "abril" && dia >= 20 || mes == "mayo" && dia <= 20) {
        cout << "Tu signo zodiacal es tauro" << endl;

    } else if ( mes == "mayo" && dia >= 21 || mes == "junio" && dia <= 20) {
        cout << "Tu signo zodiacal es geminis" << endl;

    } else if ( mes == "junio" && dia >= 21 || mes == "julio" && dia <= 22) {
        cout << "Tu signo zodiacal es cancer" << endl;

    } else if ( mes == "julio" && dia >= 23 || mes == "agosto" && dia <= 22) {
        cout << "Tu signo zodiacal es leo" << endl;

    } else if ( mes == "agosto" && dia >= 23 || mes == "septiembre" && dia <= 22) {
        cout << "Tu signo zodiacal es virgo" << endl;

    } else if ( mes == "septiembre" && dia >= 23 || mes == "octubre" && dia <= 22) {
        cout << "Tu signo zodiacal es libra" << endl;

    } else if ( mes == "octubre" && dia >= 23 || mes == "noviembre" && dia <= 21) {
        cout << "Tu signo zodiacal es escorpio" << endl;

    } else if ( mes == "noviembre" && dia >= 22 || mes == "diciembre" && dia <= 21) {
        cout << "Tu signo zodiacal es sagitario" << endl;

    } else if ( mes == "diciembre" && dia >= 22 || mes == "enero" && dia <= 19) {
        cout << "Tu signo zodiacal es capricornio" << endl;

    } else {
        cout << "fecha no valida" << endl;
    }
    
}