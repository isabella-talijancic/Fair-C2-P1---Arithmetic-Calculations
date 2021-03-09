//C2 P1 - Arithmetic Calculations

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Variable Declarations
int jersey_number;
char another_player = 'Y';
double total_base_hits;
double at_bats;
double slug_percent;
double on_base;
double walks;
double sacrifice_flies;
double g_p_a;

int main()
{
    cout << "⚾ ⚾ Stengel County Softball Team ⚾ ⚾ ";
    
    cout << "\n\nEnter the player's jersey number: ";
    cin >> jersey_number;
    cout << "\nEnter the total bases earned with hits: ";
    cin >> total_base_hits;
    cout << "\nEnter the number of at-bats: ";
    cin >> at_bats;
    //ADD-INS
    cout << "\nEnter the number of walks: ";
    cin >> walks;
    cout << "\nEnter the number of sacrifice flies: ";
    cin >> sacrifice_flies;
    
 
    //Processing... Baseball calculations are THREE decimal points
    slug_percent = (total_base_hits / at_bats);
    on_base = (total_base_hits + walks) / (at_bats + walks + sacrifice_flies);
    g_p_a = (on_base * 1.8) + (slug_percent) / 4;
       
    cout << "\n\nData for player # " << jersey_number << " is: ";
	cout << "\n\n  **Slugging Percentage: " << setprecision(3) << slug_percent;
	cout << "\n\n  **On-Base Percentage: " << setprecision(3) << on_base;
	cout << "\n\n  **Gross Production Average: " << setprecision(3) << g_p_a; 
	cout << "\n\nWould you like to enter another players' information (Y/N)? ";
	cin >> another_player;
       
    while (another_player == 'Y' || another_player == 'y')
    {
	    cout << "\n\nEnter the player's jersey number: ";
    	cin >> jersey_number;
    	cout << "\nEnter the total bases earned with hits: ";
    	cin >> total_base_hits;
    	cout << "\nEnter the number of at-bats: ";
    	cin >> at_bats;
    	//ADDINS
    	cout << "\nEnter the number of walks: ";
    	cin >> walks;
    	cout << "\nEnter the number of sacrifice flies: ";
    	cin >> sacrifice_flies;
    	cout << "\n\nData for player # " << jersey_number << " is: ";
		cout << "\n\n  **Slugging Percentage: " << setprecision(3) << slug_percent;
		cout << "\n\n  **On-Base Percentage: " << setprecision(3) << on_base;
		cout << "\n\n  **Gross Production Average: " << setprecision(3) << g_p_a;
	    cout << "\n\nWould you like to enter another players' information (Y/N)? ";
	    cin >> another_player;

    }
  cout << "\nEnd of Program";
  return 0;
}