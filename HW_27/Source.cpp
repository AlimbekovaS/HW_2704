//2. ��������� ������ ��� �������� ������� ����� : ����, �������, �������������.� ������ ������ ���� ����������� 
//��������++, --, != , == , >, <, >> , << , =, +=, -=, ().��������� ������������ ������, ������ ������ �������� ������.
#include"library.h"
//#include"Circle.h"
#include"Square.h"

int main()
{
	setlocale(LC_ALL, "ru");
	size_t kol;
	cout << "������� ���-�� ���������: ";
	cin >> kol;
	Square S(kol), S1(kol);
	cout << endl << "���� ����� ��������� �� �������� � ��: " << endl;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
		
	}
	cout << endl <<"�������� ����������++"<< endl;
	S[1]++;
	cout << S[1] << endl;
	cout << endl << "�������� ����������--" << endl;
	S[1]--;
	cout << S[1] << endl;
	cout << endl << "�������� !=" << endl;
	cout << (S[0] != S[0]) << endl;
	cout << endl << "�������� ==" << endl;
	cout << (S[0] == S[0]) << endl;
	cout << endl << "�������� >" << endl;
	cout<<(S[1] > S[0]) << endl;
	cout << endl << "�������� <" << endl;
	cout << (S[1] < S[0]) << endl;
	cout << endl << "�������� =" << endl;
	S1 = S;
	for (int i = 0;i < kol;i++)
	{
		cout << S1[i] << endl;
	}
	cout << endl << "�������� +=" << endl;
	S += S1;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
	}
	cout << endl << "�������� -=" << endl;
	S -= S1;
	for (int i = 0;i < kol;i++)
	{
		cout << S[i] << endl;
	}

	cout << endl << "�������� ()" << endl;
	S(5);
	
	system("pause");
	return 0;
}