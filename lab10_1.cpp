#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan , rate , pay , Total , NewBalance ;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;
	NewBalance = loan ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for (int x = 1; loan > 0; x++)
	{
		cout << fixed << setprecision(2);
		cout << setw(13) << left << x;
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan*rate/100;

		Total =  NewBalance + loan*rate/100 ;
		NewBalance = Total - pay ;
		cout << setw(13) << left << Total;
		if (pay > loan + loan*rate/100)
		{
			cout << setw(13) << left << Total ;
			cout << setw(13) << left << 0.00 ;
			break ;
		}else{
			cout << setw(13) << left << pay ;
			cout << setw(13) << left << NewBalance ;
		}
		cout << "\n";
		loan = NewBalance;
	}
	return 0;
}
