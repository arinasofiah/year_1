// Arina Sofiah binti Hamede A24CS0227 22/12/2024
#include<iostream>
#include<cstdlib>
using namespace std;

void getInput(int& total_cases, int& new_cases, int& total_deaths, int& total_recovered);
void dispStatus(int active_cases);
void dispOutput(int active_cases);
double calcAverage(int num_states, int total_active);

void input()
{
	cin.ignore();
	cin.clear();
}

void getInput(int& total_cases, int& new_cases, int& total_deaths, int& total_recovered) {
    cout << "Total cases: ";
    cin >> total_cases;
    input();

    cout << "New cases: ";
    cin >> new_cases;
    input();

    cout << "Total death: ";
    cin >> total_deaths;
    input();

    cout << "Total recovered: ";
    cin >> total_recovered;
    input();
}
void dispStatus(int active_cases) {
    if (active_cases > 40) {
        cout << "Status : Red zone" << endl;
    } else if (active_cases >= 21 && active_cases <= 40) {
        cout << "Status : Orange zone" << endl;
    } else if (active_cases >= 1 && active_cases <= 20) {
        cout << "Status : Yellow zone" << endl;
    } else {
        cout << "Status : Green zone" << endl;
    }
}

void dispOutput(int active_cases) {
    cout << "Active cases: " << active_cases << endl;
    dispStatus(active_cases);
}

double calcAverage(int num_states, int total_active) {
	int average;
    average = (total_active) / num_states;
    return average;
}

int main() {
    string state_name, choice, highest_state;
    int total_active = 0, highest_active = -1, num_states = 0, 
    	active_cases, total_cases, new_cases, total_deaths, total_recovered;
    
	
   do{
   
        cout << "\n<<<<<<<<<< DATA >>>>>>>>>>" << endl;
        cout << "State name : ";
        getline(cin, state_name);
        

        getInput(total_cases, new_cases, total_deaths, total_recovered);

        int active_cases = total_cases + new_cases - total_deaths - total_recovered;

        cout << "\n<<<<<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>>" << endl;
        dispOutput(active_cases);

        if (active_cases > highest_active) {
            highest_active = active_cases;
            state_name = highest_state;
        }

        total_active = total_active + active_cases;
        num_states++;
        

        cout << "Press ENTER to continue... "; 
        getline(cin, choice);
        
   } while(choice == "ENTER");
        
    

   
    double average_active = calcAverage(num_states, total_active);

    cout << "\n<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>> " << endl;
    cout << "\nTotal : " << total_active << endl;
    cout << "Highest : " << highest_active << "(" << highest_state << ")" << endl;
    cout << "Average for " << num_states << " state: " << average_active << endl;

    return 0;
}


