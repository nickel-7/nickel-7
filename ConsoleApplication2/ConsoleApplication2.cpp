// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

//int Div(int a, int b)
//{
//	try
//	{
//		if (b == 0)
//		{
//			throw exception("Divided by zero");
//		}
//		return a / b;
//	}
//	catch (...)
//	{
//		cout << "  Exception in function digits  " << /*exp.what() <<*/ endl;
//	}
//}

int DigitString(char* digit)
{
	int c = atoi(digit);
	try
	{
		if (c == 0 && digit!=0)
		{
			throw exception("Can't be digit");
		}
		else if (c< -214748365 || c > 214748365)
		{
			throw exception("digit is very long");
		}

		 return c;
	}
	catch (exception exp)
	{
		
		cout << "  Exception in function digits  " << exp.what() << endl;
	}
	
}

int main()
{
	/*try
	{
		cout << Div(12, 0) << endl;
	}
	catch (exception exp)
	{
		cout << "Exception in function digits  " << exp.what()<<endl;
	}*/

	char* digit = new char[20];
	cin >> digit;
	int c=DigitString(digit)+1;
				
	
	/*catch (invalid_argument exp)
	{
		cout << "  exception work  " << exp.what() << endl;
		
	}*/
	cout << c;

	/*if (c == NULL)
	{
		cout << "work exception";
	}
	else
		cout << c[0]+1;*/
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
