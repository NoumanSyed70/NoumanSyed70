#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream f1("integer.txt");
	const int size = 5;
	int arr[size];
	cout << "Enter 5 integers. " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		f1 << arr[i] << endl;
	}
	cout << "The number you entered in file are as following: " << endl;
	ifstream read("integer.txt");
	float sum = 0, num = 0;
	int inp;
	if (read.is_open()) {
		while (read >> inp) {
			cout << inp << endl;
			sum = sum + inp;
			num = num + 1;
		}
	}
	cout << "Sum is: " << sum << endl;
	float avg = sum / num;
	cout << "Average of numbers is: " << avg << endl;
	cout << "Now you can also check files." << endl;
	ofstream res("result.txt");
	res << "The sum of the integers you entered in integer file is " << sum << endl;
	res << "The average of the integers you enetered in integer file is " << avg << endl;
	system("pause");
	return 0;
}