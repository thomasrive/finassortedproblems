#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double testScores[5];
	int i = 0;
	double average = 0;
	for (i = 1; i <= 5; i++){
		cout << "Test Score " << i << ": ";
		cin >> testScores[i - 1];
	}
	for (i = 0; i < 5; i++){
		average += testScores[i];
	}
	average = average / 5; 
	cout << showpoint << fixed << setprecision(1) << "Average Test Scores: " << average << endl;
	return 0;
}