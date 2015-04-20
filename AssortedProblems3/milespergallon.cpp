#include <iostream>
using namespace std;

int main(){
    int gallons = 0, miles = 0, totaldistance = 0;
    cout << "What is the number of gallons the car can hold: ";
    cin >> gallons;
    cout << "How many miles can it drive on a full tank: ";
    cin >> miles;
    totaldistance = (miles/gallons);
    cout << "Car can drive " << totaldistance << " miles per gallon." << endl;
}