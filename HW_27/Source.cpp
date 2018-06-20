//2. Построить классы для описания плоских фигур : круг, квадрат, прямоугольник.В классе должны быть перегружены 
//операции++, --, != , == , >, <, >> , << , =, +=, -=, ().Выполнить тестирование класса, создав массив объектов класса.
#include"library.h"
//#include"Circle.h"
#include"Square.h"

int main()
{
	setlocale(LC_ALL, "ru");
	size_t kol;
	cout << "Введите кол-во квадратов: ";
	cin >> kol;
	Square S(kol), S1(kol);
	cout << endl << "Ниже вывод квадратов со стороной в см: " << endl;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
		
	}
	cout << endl <<"Оператор инкремента++"<< endl;
	S[1]++;
	cout << S[1] << endl;
	cout << endl << "Оператор декремента--" << endl;
	S[1]--;
	cout << S[1] << endl;
	cout << endl << "Оператор !=" << endl;
	cout << (S[0] != S[0]) << endl;
	cout << endl << "Оператор ==" << endl;
	cout << (S[0] == S[0]) << endl;
	cout << endl << "Оператор >" << endl;
	cout<<(S[1] > S[0]) << endl;
	cout << endl << "Оператор <" << endl;
	cout << (S[1] < S[0]) << endl;
	cout << endl << "Оператор =" << endl;
	S1 = S;
	for (int i = 0;i < kol;i++)
	{
		cout << S1[i] << endl;
	}
	cout << endl << "Оператор +=" << endl;
	S += S1;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
	}
	cout << endl << "Оператор -=" << endl;
	S -= S1;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
	}

	cout << endl << "Оператор ()" << endl;
	S(5);
	
	system("pause");
	return 0;
}