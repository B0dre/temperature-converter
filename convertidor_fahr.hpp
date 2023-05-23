#ifndef CONVERTIDOR_FAHR_HPP
#define CONVERTIDOR_FAHR_HPP

float ConvertirFahr(float tempFahr);
void opcionFahrenheit();

float ConvertirFahr(float tempFahr)
{
    float tempCel;
    tempCel = ((tempFahr - 32) * 5) / 9;
    return tempCel;
}

void opcionFahrenheit()
{
    using std::cout, std::cin;
    int tempCelsius, tempFahrenheit;

    cout << "\nPor favor, introduzca la temperatura en grados Fahrenheit: ";
    cin >> tempFahrenheit;
    tempCelsius = ConvertirFahr(tempFahrenheit);
    cout.precision(3);
    cout << "La temperatura en grados Celsius es: " << tempCelsius << "\247C\n";
}

#endif