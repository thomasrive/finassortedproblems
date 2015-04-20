#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	const double classA = 15.00, classB = 12.00, classC = 9.00;
	int ticketsA = 0, ticketsB = 0, ticketsC = 0;
	double incomeTotal = 0;
	cout << "Tickets sold for Class A seats: ";
	cin >> ticketsA;
	cout << "Tickets sold for Class B seats: ";
	cin >> ticketsB;
	cout << "Tickets sold for Class C seats: ";
	cin >> ticketsC;
	incomeTotal = ((classA * ticketsA) + (classB * ticketsB) + (classC * ticketsC));
	cout << fixed << showpoint << setprecision(2) << "Total USD in generated sales: $" << incomeTotal << endl;
	return 0;
}