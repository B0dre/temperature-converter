#ifndef CONVERTIDOR_CEL_HPP
#define CONVERTIDOR_CEL_HPP

float ConvertirCel(float tempCel);
void opcionCelsius();

float ConvertirCel(float tempCel)
{
    float tempFahr;
    tempFahr = ((tempCel * 9 / 5) + 32);
    return tempFahr;
}

void opcionCelsius()
{
    using std::cout, std::cin;
    int tempCelsius, tempFahrenheit;

    cout << "\nPor favor, introduzca la temperatura en grados Celsius: ";
    cin >> tempCelsius;
    tempFahrenheit = ConvertirCel(tempCelsius);
    cout.precision(3);
    cout << "La temperatura en grados Fahrenheit es: " << tempFahrenheit << "\247F\n";
}

#endif