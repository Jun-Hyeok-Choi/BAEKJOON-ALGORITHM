#include <iostream>

using namespace std;

int A, B, V;

int main() {
	cin >> A >> B >> V;
	if ((V - A) % (A - B) == 0)
		cout << (V - A) / (A - B) + 1;
	else
		cout << (V - A) / (A - B) + 2;

	return 0;
}