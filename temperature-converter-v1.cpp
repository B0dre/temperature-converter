/*
TEMA: Uso de variables locales y parametros.
PROBLEMA: Convertidor de grados Celsius a Fahrenheit (y viceversa).
*/
#include <iostream>
#include "menu.hpp"
#include "convertidor_cel.hpp"
#include "convertidor_fahr.hpp"

int main()
{
    using std::cin, std::cout;
    int opcion = -1;

    do{
        menu();
        cout << "\n \32 Opcion: "; cin >> opcion;
        if( opcion == 1 ){
        opcionFahrenheit();
        }else if( opcion == 2 ){
        opcionCelsius();  
        }else if( opcion == 0 ){
        cout << "\nPresione ENTER para salir...\n";
        cin.get();
        cin.get();
    }
    }while( opcion != 0);

    return 0;
}