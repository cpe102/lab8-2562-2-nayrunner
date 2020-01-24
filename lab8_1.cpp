#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<string>
using namespace std;

int main(){	
	//input from user
	double loan , interest , pay ,balance , year;
	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interest rate per year (%): ";
	cin>>interest;
	cout<<"Enter amount you can pay per year: ";
	cin>>pay;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 

    //loop
	balance = loan ;
	year = 1;
    while(balance >0){
		if(balance<pay){
				cout << setw(13) << left << year; 
	            cout << setw(13) << left << balance;
	            cout << setw(13) << left << balance*(interest/100);
	            cout << setw(13) << left << balance+(balance*(interest/100));
	            cout << setw(13) << left << balance+(balance*(interest/100));
	            cout << setw(13) << left << 0;
				balance = 0;
	            cout << "\n";	
		}
		else{
	cout << setw(13) << left << year; 
	cout << setw(13) << left << balance;
	cout << setw(13) << left << balance*(interest/100);
	cout << setw(13) << left << balance+(balance*(interest/100));
	cout << setw(13) << left << pay;
	balance=(balance+(balance*(interest/100)))-pay;
	cout << setw(13) << left << balance;
	year++;
	cout << "\n";	
		}
	}




	
	return 0;
}
