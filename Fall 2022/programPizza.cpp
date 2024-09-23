#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI = 3.14259;
const float FLATCOST = 	5.00;
const float UPHCARGE = 0.15;

float GetDiameter = 0.0
{
	float diameter = 0.0
	cout<< " Please enter diameter of the pizza = ";
	cin >> diameter
	
	return diameter;
}

float CalculateArea(float diamtereofpizza)
{
	float area = 0.0;
	
	area = PI * pow(diamtereofpizza/2.0, 2);
	
	return area;
}

float CalculatePrice(float areaOfPizza)
{
	float price = 0.0;
	
	if( areaOfPizza <= 80.0)
	{
		price = FLATCOST
	}
	else
	{
		price = (areaOfPizza - 80.0) * UPHCARGE + FLATCOST;
	}
	return price;
}


void DisplayFinalPrice (float finalcostOfPizza)
{
	cout << " The final price of the pizza is = $" << fixed << setprecision(2) << finalcostOfPizza << endl;
}
Main()
{
	float diamtereofpizza = 0.0;
	float areaOfPizza= 0.0;
	float finalcostOfPizza = 0.0;
	
	diamtereofpizza = GetDiameter() ;
	areaOfPizza = CalculateArea(diamtereofpizza);
	cout << fixed << setprecision(5)<< areaOfPizza << endl;
	finalcostOfPizza = CalculatePrice(areaOfPizza);
	DisplayFinalPrice(finalcostOfPizza);
}