#ifndef MENU_HPP
#define MENU_HPP

void menu();

void menu(){
    using std::cout, std::cin;

    cout << "\n\t==== CONVERTIDOR DE TEMPERATURAS ====\n";
    cout << "\n\26 Introduzca: ";
    cout << "\n \20 (1) Para convertir de Celsius a Fahrenheit.";
    cout << "\n \20 (2) Para convertir de Fahrenheit a Celsius.";
    cout << "\n \20 (0) Para SALIR.";
}

#endif