#include <iostream>

using namespace std;

int main() {

	int num;
	bool isPrime = true;
	cout << "Enter Number:";
	cin >> num;

	if (num == 0 || num == 1) {
		isPrime = false;
		cout << "Number is not Prime";
		return 0;
	}

	for (int i = 2; i <= num / 2; i++) {
		if ((num % i) == 0) {
			cout << "Number is not Prime";
			return 0;
		}
	}

	cout << "Number is Prime";

}