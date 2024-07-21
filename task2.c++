#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes for temperature conversions
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    double temperature;
    char scaleFrom, scaleTo;

    cout << "Temperature Converter\n";
    cout << "Enter the temperature followed by the scale (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> temperature >> scaleFrom;

    cout << "Convert to (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> scaleTo;

    // Convert input temperature to the desired scale
    if (scaleFrom == 'C' || scaleFrom == 'c') {
        if (scaleTo == 'F' || scaleTo == 'f') {
            cout << fixed << setprecision(2) << temperature << " °C = " << celsiusToFahrenheit(temperature) << " °F" << endl;
        } else if (scaleTo == 'K' || scaleTo == 'k') {
            cout << fixed << setprecision(2) << temperature << " °C = " << celsiusToKelvin(temperature) << " K" << endl;
        } else {
            cout << "Invalid scale to convert to." << endl;
        }
    } else if (scaleFrom == 'F' || scaleFrom == 'f') {
        if (scaleTo == 'C' || scaleTo == 'c') {
            cout << fixed << setprecision(2) << temperature << " °F = " << fahrenheitToCelsius(temperature) << " °C" << endl;
        } else if (scaleTo == 'K' || scaleTo == 'k') {
            cout << fixed << setprecision(2) << temperature << " °F = " << fahrenheitToKelvin(temperature) << " K" << endl;
        } else {
            cout << "Invalid scale to convert to." << endl;
        }
    } else if (scaleFrom == 'K' || scaleFrom == 'k') {
        if (scaleTo == 'C' || scaleTo == 'c') {
            cout << fixed << setprecision(2) << temperature << " K = " << kelvinToCelsius(temperature) << " °C" << endl;
        } else if (scaleTo == 'F' || scaleTo == 'f') {
            cout << fixed << setprecision(2) << temperature << " K = " << kelvinToFahrenheit(temperature) << " °F" << endl;
        } else {
            cout << "Invalid scale to convert to." << endl;
        }
    } else {
        cout << "Invalid scale from which to convert." << endl;
    }

    return 0;
}

// Function definitions for temperature conversions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}
