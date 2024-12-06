#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, M;
	setlocale(LC_ALL, "Russian"); // ïåðåêëþ÷åíèå ëîêàëèçàöèè êîíñîëè
	cout << "Ââåäèòå N: ";
	cin >> N;
	cout << "АХахпхвхпвыхаывах: ";
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

	// ~ and !
	if (!N)
		cout << "!N - true" << endl;
?
/??
?
?
/

/

	return 0;

	cout << "ÏÐèâåò ìíÿ âåòêó";
}
