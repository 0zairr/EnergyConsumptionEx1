// EnergyConsumptionEx1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Filename: EnergyConsumptionEx1.cpp
Programer: Ozair Ghaissi
Date: 10/09/2024
*/

#include <iostream>
using namespace std;


int main()
{
    const int totalCustomers = 16500;
    const double energyDrinkersPercent = 0.15;
    const double citrusDrinkersPercent = 0.58;

    // Calculate the approximate number of energy drinkers
    int energyDrinkers = totalCustomers * energyDrinkersPercent;

    // Calculate the approximate number of citrus-flavored drinkers
    int citrusDrinkers = energyDrinkers * citrusDrinkersPercent;

    // Display results
    cout << "Approximate number of customers who purchase energy drinks per week: "
        << energyDrinkers << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
        << citrusDrinkers << endl;

    return 0;
}

