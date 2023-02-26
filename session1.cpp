#include <iostream>
#include <string>
using namespace std;

// take a day as an input and the number of days after it and output if it's weekend or not

int main() {
	string week_days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	
	int x, after;
	string current_day;
	cin >> current_day >> after;

	for (int i = 0; i < 7; i++) {
		if (current_day == week_days[i]) {
			x = i;
			break;
		}
	}


	int ans = (after + x) % 7;
	if (ans == 4 || ans == 5) {
		cout << "weekend heeeeehh";
	}
	else {
		cout << "3aiz a3iat";
	}
	cout << endl;
	cout << week_days[ans];

 	cin.get();
}
