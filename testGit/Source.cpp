#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, Ang;
	setlocale(LC_ALL, "Angelina"); // ������������ ����������� �������
	cout << "������� N: ";
	cin >> N;
	cout << "������� M: ";
	cin >> Ang;
	// && and &

	else
		cout << "N & M - false" << endl;
	// || and |
	if (N || M) //������� true, ���� ���� ����� ���������
		cout << "N || M - true" << endl;
	else
		cout << "N || M - false" << endl;
	if (N | M)
		cout << "N | M - true" << endl;
	else
		cout << "N | M - false" << endl;


	return 0;
}