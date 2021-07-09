#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define HardChess
#define ChessBoard

void main()
{
	setlocale(LC_ALL, "Rus");

	int s;

#ifdef HardChess
	cout << "Введите размер доски: "; cin >> s;
	cout << endl;

	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < s; k++)
			{
				if ((i + k) % 2 == 0) cout << "* * * * *";
				else cout << "         ";
			}
			cout << endl;
		}
	}
#endif // HardChess

#ifdef ChessBoard
	cout << "Введите размер доски: "; cin >> s;
	cout << endl;

	setlocale(LC_ALL, ".866");


	for (int i = 0; i < s + 2; i++)
	{
		cout << tab;

		for (int j = 0; j < s + 2; j++)
		{
			if ((i + j) % 2 == 0 && i != 0 && i != s + 1 && j != 0 && j != s + 1) cout << char(219) << char(219); // рисуем доску (белые квадраты)

			else if ((i == 0 || i == s + 1) && j != s + 1 && j != 0) cout << char(196) << char(196); // рисуем горизонтальные границы
			else if ((j == 0 || j == s + 1) && i != 0 && i != s + 1) cout << char(179); // рисуем вертикальные границы

			else if (i == 0 && j == 0) cout << char(218); // рисуем
			else if (i == 0 && j == s + 1) cout << char(191);
			else if (i == s + 1 && j == 0) cout << char(192);
			else if (i == s + 1 && j == s + 1) cout << char(217); // углы
			else cout << "  "; // рисуем доску (чёрные квадраты)
		}
		cout << endl;
	}
#endif // ChessBoard

	main();
}

