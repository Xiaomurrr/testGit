#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, Ang;
	setlocale(LC_ALL, "Russian"); // ������������ ����������� �������
	cout << "������� N: ";
	cin >> N;
	cout << "������� M: ";
	cin >> Ang;
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