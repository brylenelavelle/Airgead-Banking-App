#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float initialInv; 
	float monthlyDep; 
	float anualInt; 
	float numMonths; 
	float numYears;
	float totalAmt; 
	float intAmt; 
	float yearTotInt;

	cout << "************\n";
	cout << "**** Data Input ****\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";
	system("PAUSE");

	cout << "************\n";
	cout << "**** Data Input ****\n";

	cout << "Initial Investment Amount: $";
	cin >> initialInv;

	cout << "Monthly Deposit: $";
	cin >> monthlyDep;

	cout << "Annual Interest: %";
	cin >> annualIntRate;

	cout << "Number of years: ";
	cin >> numYears;

	numMonths = numYears * 12;
	system("PAUSE");
	totalAmt = initialInv;
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	for (int i = 0; i < numYears; i++) {
		intAmt = (totalAmt) * ((anualInt / 100));
		totalAmt = totalAmt + intAmt;
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t$" << intAmt << "\n";
	}

	totalAmt = initialInv;
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";
	for (int i = 0; i < numYears; i++) {
		yearTotInt = 0;
		for (int j = 0; j < 12; j++) {
			intAmt = (totalAmt + monthlyDep) * ((anualInt / 100) / 12);
			yearTotInt = yearTotInt + intAmt;
			totalAmt = totalAmt + monthlyDep + intAmt;
		}
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t$" << yearTotInt << "\n";
	}
	return 0;
}