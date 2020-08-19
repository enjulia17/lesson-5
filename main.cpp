#include <iostream>
#include <string>
using namespace std;

//using std::cout;
//using std::cin;
//using std::endl;

int main()
{
	setlocale(0, "");
	int arr[10];

	for (int i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}

	cout << "\nВаш массив: ";

	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}