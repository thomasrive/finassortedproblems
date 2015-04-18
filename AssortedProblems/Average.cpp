#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string month1, month2, month3;
	double rain1, rain2, rain3, average;
	cout << "Name of month: ";
	cin >> month1;
	cout << "Rainfall (inches): ";
	cin >> rain1;
	cout << "Name of month: ";
	cin >> month2;
	cout << "Rainfall (inches): ";
	cin >> rain2;
	cout << "Name of month: ";
	cin >> month3;
	cout << "Rainfall (inches): ";
	cin >> rain3;
	average = ((rain1 + rain2 + rain3)/3);
	cout << fixed << showpoint << setprecision(2) << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches.";
	cout << endl;
	return 0;
}