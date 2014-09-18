//A program that calculates the number of calories in a cheese sandwhich.
//
//Programmed by: Blake Levine

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cheese = 106; // Calories in a slice of cheese
	int bread = 70; // Calories in a slice of bread

	int totalCalories;
	totalCalories = 2 * bread + cheese;

	cout << "there were " << totalCalories << " calories in my sandwich.";

	return 0;
}

