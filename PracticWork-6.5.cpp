#include <iostream>

using namespace std;

int main()
{
    //fibonacciMax = 12200160415121876738 что я смог получить на своём пк. всего 93 числа
	
	int number;
	int i = 1;

	number:
	cout << "Введите порядковый номер желаемого числа из ряда Фибоначчи: ";
	cin >> number;
    unsigned __int64* fibonacci = new unsigned __int64[number];
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	
	if (number < 0) {
		cout << "Только положительное число!\n";
		goto number;
	}
	else if (number == 0) {
		cout << "Нулевое число: 0";
	}
	else if (number == 1 || number == 2) {
		cout << i << "-е число в ряду Фибоначчи: " << fibonacci[0] << endl;
	}
	else if (number > 93) {
		cout << "Слишком большое число для этой программы!\n";
		cout << "Укажите номер не более 93\n";
		goto number;
	}
	else {
		while (i < number) {
			i++;
			fibonacci[i] = fibonacci[i-1]+ fibonacci[i - 2];
						
		}
		cout << i << "-е число в ряду Фибоначчи: " << fibonacci[number - 1] << endl;
	}

    return 0;
}
