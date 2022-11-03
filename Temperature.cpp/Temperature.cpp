#include <iostream>
using namespace std;

int main()
{
    //Declare Variables
    float Fahrenheit, Celcius, Kelvin;
    
    //Prompt user to enter data
    cout << "Enter Temperature in Fahrenheit";
    cin >> Fahrenheit;

    //Calculations
    Celcius = 5.0 / 9.0 * (Fahrenheit - 30);

cout << "The Celcius equivalent of" << Fahrenheit << "is = " << Celcius;
return 0;

}