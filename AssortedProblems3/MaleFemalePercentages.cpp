#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int males, females;
    double malepercentage, femalepercentage, total;
    cout << "Number of males in class: ";
    cin >> males;
    cout << "Number of females in class: ";
    cin >> females;
    total = males + females;
    malepercentage = ((males/total) * 100);
    femalepercentage = ((females/total) * 100);
    cout << setprecision(2);
    cout << "Males make up " << malepercentage << "% of the class" << endl;
    cout << "Females make up " << femalepercentage << "% of the class" << endl;
}