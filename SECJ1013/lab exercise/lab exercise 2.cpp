#include<iostream>
using namespace std;
// Arina Sofiah binti Hamede (A24CS0227)

int main(){
	
		int digit = 0, result = 0, num = 0;
		char option;
		
		do {
			
		result = 0;
		
		cout << "\nEnter an integer number : ";
		cin >> digit;
		cout << "\n";
		
		while (digit > 0) {
	 		num = digit % 10;
			result = result + num;
			digit = digit / 10;
		
		cout << num;
		if (digit > 0) {
				
			cout<<" + ";
		}
			
		
		else {
			
			cout << " = " << result << endl;
		
		}
			
	} 
	
		if (result % 2 == 0){
			
			cout << "\n" << result << " is an even number";
			
		}
		else {
			
			cout << "\n" << result << " is an odd number";
		}
		
		
		if (result % 4 == 0 && result % 5 == 0 && result % 3 == 0 ){
			
			cout << " & multiples of 3, 4 and 5";
		}
		
		else if (result % 4 == 0 && result % 5 == 0 ){
			
			cout << " & multiples of 4 and 5";
		}
		
		else if (result % 4 == 0 && result % 3 == 0 ){
			
			cout << " & multiples of 3 and 4";
		}
		
		else if (result % 3 == 0 && result % 5 == 0 ){
			
			cout << " & multiples of 3 and 5";
		}
		
		else if (result % 4 == 0){
			
			cout << " & multiples of 4";
		}
		
		else if (result % 5 == 0){
			
			cout << " & multiples of 5";
			
		}
		
		else if (result % 3 == 0){
			
			cout << " & multiples of 3";
			
		}
		
		else {
			
			cout << " ";
			
		}
		
		cout << "\n\nDo you want to count again (y/n) : ";
		cin >> option;
		
		} while (option == 'y');
		
		return 0;
}

