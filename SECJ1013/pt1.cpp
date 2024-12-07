#include <iostream>
#include<cstdlib>
#include <fstream>
using namespace std;

double BMRcalc (int age, char gender, double weight, double height) {
	double BMR;
	if (gender == 'M' || gender == 'm'){
		BMR = (10*weight) + (6.25*height) - (5*age);
	} else if (gender == 'F' || gender == 'f') {
		BMR = (10*weight) + (6.25*height) - (5*age) - 161;
	} else {
		cout << "INVALID";
	}
	return BMR;
}

void caloriesCalc (double BMR) {
	cout << "\nLittle or no exercise: " << BMR*1.2;
	cout << "\nExercise 1-3 times/week: " << BMR*1.375;
	cout << "\nExercise 4-5 times/week: " << BMR*1.55;
	cout << "\nExercise 3-4 times/week: " << BMR*1.725;
	cout << "\nExercise 6-7 times/week: " << BMR*1.9;
	
}

int main () {
	int age;
	char gender, choice;
	double weight, height, BMR;
	
	do { 
		cout << "Age (ages 15-80): ";
		cin >> age;
		cout << "\nGender (m/f): ";
		cin >> gender;
		cout << "\nHeight (cm): ";
		cin >> height;
		cout << "\nWeight (kg): ";
		cin >> weight;
		
		BMR = BMRcalc (age, gender, weight, height);
		
		if (BMR != 0) {
			cout << "\nBMR = " << BMR << " Calories/day" << endl;
			caloriesCalc(BMR);
		}
		
		
		cout << "\n\nDo you want to calculate again? (y/n): ";
		cin >> choice;
		
	} while (choice == 'Y' ||choice== 'y');
	
	return 0;
}
