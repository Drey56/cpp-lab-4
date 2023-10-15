#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	//Для случая, когда общая масса наших тарелок нечетная
	if ((n * (n + 1)) % 4 != 0) {
		cout << "No";
	}

	//Удовлетворяет
	else {
		cout << "Yes" << endl;

		//Рассмотрим два случая: n % 4 == 0 | (n+1) % 4 == 0
		
		//Первый случай
		if (n % 4 == 0)
		{
			//Для Пети
			cout << n / 2 << endl;
			for (int i = 1; i < (n + 1 - i); i = i + 2) {
				cout << i << " " << n + 1 - i << " ";
			}

			cout << endl;

			//Для Маши
			cout << n / 2 << endl;
			for (int i = 2; i < (n + 1 - i); i = i + 2) {
				cout << i << " " << n + 1 - i << " ";
			}
		}

		//Второй случай
		else {
			//Для Пети
			cout << (n / 2) + 1 << endl;
			for (int i = 1; i < (n - i); i = i + 2) {
				cout << i << " " << n - i << " ";
			}

			cout << endl;

			//Для Маши
			cout << n / 2 << endl;
			for (int i = 2; i < (n - i); i = i + 2) {
				cout << i << " " << n - i << " ";
			}
			cout << n; // докидываем последнюю
		}
	}


	return 0;
}