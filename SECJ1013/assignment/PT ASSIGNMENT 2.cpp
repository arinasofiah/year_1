#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;



double CalculateInstallment(double loan_amount, double interest_rate, int years) {
    double total_interest, monthly_interest, monthly_installment;
	total_interest = (interest_rate/100) * loan_amount * years;
	monthly_interest = total_interest / (years*12);
	monthly_installment = (loan_amount + total_interest) / (years*12);
	return monthly_installment;	
}

void displayLoanDetails(double price, string model, string variant, string region) {
    cout << "\n\nCar Info\n";
    cout << "Model: " << model << endl;
    cout << "Variant: " << variant << endl;
    cout << "Region: " << region << endl;
    cout << "Paint Type: Metallic" << endl; 
    cout << "Price (MYR): " << price << endl;
}

int main() {
    int model_choice, variant_choice, region_choice;
    double price = 0, down_pay, interest_rate, loan_amount, monthly_installment;
    int repay_years;
    string model, variant, region;
    char choice;

    do{
	
    cout << "\nProton Car Loan Calculator\n";
    cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
    cin >> model_choice;

    if (model_choice == 1) {
        model = "X50";
        cout << "Select Variant [1-1.6L Standard, 2-1.6L Premium]: ";
        cin >> variant_choice;
        if (variant_choice == 1) {
            variant = "1.5L Standard";
            price = 86300.00; 
        } 
		else if (variant_choice == 2) {
            variant = "1.5L Premium";
            price = 101800.00; 
        } 
		else {
            cout << "Invalid variant choice!" << endl;
        }
        
        cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    	cin >> region_choice;
    	if (region_choice == 1) {
        	region = "Peninsular Malaysia";
   		} 
		else if (region_choice == 2) {
        	region = "East Malaysia";
        	price = price + 2000; 
    	} 
		else {
        	cout << "Invalid region choice!" << endl;
    	}
        
    }
	else if (model_choice == 2) {
        model = "Exora";
        
        cout << "Select Variant [1-1.6L Standard, 2-1.6L Premium]: ";
        cin >> variant_choice;
        if (variant_choice == 1) {
            variant = "1.6L Standard";
            price = 62800.00; 
        } 
		else if (variant_choice == 2) {
            variant = "1.6L Premium";
            price = 69800.00; 
        } 
		else {
            cout << "Invalid variant choice!" << endl;
        }
        
        cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    	cin >> region_choice;
    	if (region_choice == 1) {
        	region = "Peninsular Malaysia";
   		} 
		else if (region_choice == 2) {
        	region = "East Malaysia";
        	price = price + 2000; 
    	} 
		else {
        	cout << "Invalid region choice!" << endl;
    	}
        
    } 
	else if (model_choice == 3) {
        model = "Persona";
        
        cout << "Select Variant [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
        cin >> variant_choice;
        if (variant_choice == 1) {
            variant = "1.6L Standard CVT";
            price = 47800.00; 
        } 
		else if (variant_choice == 2) {
            variant = "1.6L Premium CVT";
            price = 58300.00; 
        } 
		else {
            cout << "Invalid variant choice!" << endl;   
        }
        
        cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    	cin >> region_choice;
    	if (region_choice == 1) {
        	region = "Peninsular Malaysia";
   		} 
		else if (region_choice == 2) {
        	region = "East Malaysia";
        	price = price + 2000; 
    	} 
		else {
        	cout << "Invalid region choice!" << endl;
    	}
    } 
	
	else {
        cout << "Invalid model choice!" << endl;
    }
    
    	
		displayLoanDetails(price, model, variant, region);
		
        cout << "\n\nDown Payment (MYR): ";
        cin >> down_pay;
   		cout << "Interest Rate (%): " ;
   		cin >> interest_rate;
       	cout << "Repayment Period (in years): " ;
    	cin >> repay_years;
    	cout << endl;
    	
        loan_amount = price - down_pay;

        
        monthly_installment = CalculateInstallment(loan_amount, interest_rate, repay_years);
        
        cout << "MONTHLY INSTALLMENT (MYR): " << monthly_installment << endl;

        cout << "Do you want to enter other data? (Y/N): " ;
        cin >> choice;
        

    } while (choice == 'Y' || choice == 'y');  

    cout << "\nThank you :)" << endl;

    return 0;
}

