#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	//��� ������, ����� ����� ����� ����� ������� ��������
	if ((n * (n + 1)) % 4 != 0) {
		cout << "No";
	}

	//�������������
	else {
		cout << "Yes" << endl;

		//���������� ��� ������: n % 4 == 0 | (n+1) % 4 == 0
		
		//������ ������
		if (n % 4 == 0)
		{
			//��� ����
			cout << n / 2 << endl;
			for (int i = 1; i < (n + 1 - i); i = i + 2) {
				cout << i << " " << n + 1 - i << " ";
			}

			cout << endl;

			//��� ����
			cout << n / 2 << endl;
			for (int i = 2; i < (n + 1 - i); i = i + 2) {
				cout << i << " " << n + 1 - i << " ";
			}
		}

		//������ ������
		else {
			//��� ����
			cout << (n / 2) + 1 << endl;
			for (int i = 1; i < (n - i); i = i + 2) {
				cout << i << " " << n - i << " ";
			}

			cout << endl;

			//��� ����
			cout << n / 2 << endl;
			for (int i = 2; i < (n - i); i = i + 2) {
				cout << i << " " << n - i << " ";
			}
			cout << n; // ���������� ���������
		}
	}


	return 0;
}