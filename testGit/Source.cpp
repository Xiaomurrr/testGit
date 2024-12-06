#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, M;
	setlocale(LC_ALL, "Russian"); // ������������ ����������� �������
	cout << "������� N: ";
	cin >> N;
	cout << "������� M: ";
	cin >> M;
	// && and &
	if (N && M) //������� true, ���� ��� ����� ���������
		cout << "N && M - true" << endl;
	else
		cout << "N && M - false" << endl;

	if (N & M) //����� ����� �������� true, �� ����� ��������� (false �������, ���� ��� ���� � ����� 0)
		cout << "N & M - true" << endl;
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

	// ~ and !
	if (!N)
		cout << "!N - true" << endl;
	else
		cout << "!N - false" << endl;
	if (~N)
		cout << "~N - true" << endl;
	else
		cout << "~N - false" << endl;

	return 0;
}