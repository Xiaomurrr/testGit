#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, Ang;
	setlocale(LC_ALL, "Russian"); // переключение локализации консоли
	cout << "¬ведите N: ";
	cin >> N;
	cout << "¬ведите M: ";
	cin >> Ang;
	// && and &
	if (N && M) //выведет true, если оба числа ненулевые
		cout << "N && M - true" << endl;
	else
		cout << "N && M - false" << endl;

	if (N & M) //также будет выводить true, тк числа ненулевые (false выведет, если все биты в числе 0)
		cout << "N & M - true" << endl;
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

	
	/
		.
		/
		kl
		k
		kh
		k
		f



	return 0;
}