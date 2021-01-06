/*
Given the meal price(base cost of a meal), 
tip percent(the percentage of the meal price being added as tip), 
and tax percent(the percentage of the meal price being added as tax),
find and print the meal's total cost.
Round the result to the nearest integer.

== EXAMPLE ==
MealCost = 100
TipPercent = 15
TaxPercent = 8

A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value 123 and return from function
*/

#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    double tip = (meal_cost / 100) * tip_percent;
    double tax = (meal_cost / 100) * tax_percent;
    int total_cost = round(meal_cost + tip + tax);
    cout << total_cost;
}

int main() 
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear buffer before taking new line

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}