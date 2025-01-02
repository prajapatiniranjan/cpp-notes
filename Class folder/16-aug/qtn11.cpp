/*
Write a program that
 calculates the energy needed to heat water from an initial temperature to a final temperature.
  Your program should prompt the user
   to enter the amount of water in kilograms and the initial and final temperatures of the water.

The formula to compute the energy is Q = M * (finalTemperature – initialTemperature) * 4184

where M is the weight of water in kilograms temperatures are in degrees Celsius,
 and energy Q is measured in joules.

Here is a sample run:

sample run
*/

#include <iostream>
using namespace std;
int main()
{
    // Declare variables to store the amount of water and temperatures
    double mass;                // Mass of the water in kilograms
    double initial_temperature; // Initial temperature in degrees Celsius
    double final_temperature;   // Final temperature in degrees Celsius

    cout << "enter the Mass of the water in kilograms" << "\n";
    cin >> mass;

    cout << "enter the Initial temperature in degrees Celsius" << "\n";
    cin >> initial_temperature;

    cout << "enter the Final temperature in degrees Celsius" << "\n";
    cin >> final_temperature;
    /*The formula to compute the energy is Q = M * (finalTemperature – initialTemperature) * 4184
     */
    const double specificHeat = 4184;
    double energy = mass * (final_temperature - initial_temperature) * specificHeat;

    cout << "The energy required to heat the water is: " << energy << " joules" << "\n";

    /*
 Enter the mass of water in kilograms: 2.5
Enter the initial temperature of the water (in degrees Celsius): 20
Enter the final temperature of the water (in degrees Celsius): 100
The energy required to heat the water is: 835200 joules

    */
    return 0;
}