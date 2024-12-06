#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, Ang;
	setlocale(LC_ALL, "Angelina"); // переключение локализации консоли
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите M: ";
	cin >> Ang;
	// && and &

	else
		cout << "N & M - false" << endl;
	// || and |
	if (N || M) //выведет true, если одно число ненулевое
		cout << "N || M - true" << endl;
	else
		cout << "N || M - false" << endl;
	if (N | M)
		cout << "N | M - true" << endl;
	else
		cout << "N | M - false" << endl;


	return 0;
}