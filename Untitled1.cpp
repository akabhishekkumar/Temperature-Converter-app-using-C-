#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return celsius * 9/5 + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Select conversion type (1/2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << convertedTemp << " F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << convertedTemp << " C" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

