#include<iostream>
using namespace std;
int O[6] = { 0 };
float a = 30.02, b = 120.05, c = 99.99, d = 10.05, e = 60.06, f = 30.02;
void display(int n)
{
	if (n == 1)
	{
		O[0] = O[0] + 1;
	}
	if (n == 2)
	{
		O[1] = O[1] + 1;
	}
	if (n == 3)
	{
		O[2] = O[2] + 1;
	}
	if (n == 4)
	{
		O[3] = O[3] + 1;
	}
	if (n == 5)
	{
		O[4] = O[4] + 1;
	}
	if (n == 6)
	{
		O[5] = O[5] + 1;
	}
	cout << "\t\t*Welcome to FURC Cafe*\n\n";
	cout << "Our Menu is : \n\n";
	cout << " _________________________________________________\n";
	cout << "| Order |         Item        |  Price  |  Order  |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   1.  |      Cup of Tea     |  " << a << "  |    " << O[0] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   2.  |        Biryani      |  " << b << " |    " << O[1] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   3.  |        Qourma       |  " << c << "  |    " << O[2] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   4.  |       Paratha       |  " << d << "  |    " << O[3] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   5.  |         Sabzi       |  " << e << "  |    " << O[4] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   6.  |        Omlate       |  " << f << "  |    " << O[5] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|       |   Total Amount is   |  " << (O[0] * a) + (O[1] * b) + (O[2] * c) + (O[3] * d) + (O[4] * e) + (O[5] * f) << " |         |\n";
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
	cout << "\n\nWrite '0' when you want to give or order : ";
	cout << " \n\nPlease Place your Order : ";
}
int main()
{
	int n;
	display(0);
	do
	{
		cin >> n;
		if (n == 1)
		{
			system("cls");
			display(1);
		}
		if (n == 2)
		{
			system("cls");
			display(2);
		}
		if (n == 3)
		{
			system("cls");
			display(3);
		}
		if (n == 4)
		{
			system("cls");
			display(4);
		}
		if (n == 5)
		{
			system("cls");
			display(5);
		}
		if (n == 6)
		{
			system("cls");
			display(6);
		}
		if (n == 0)
		{
			break;
		}
	} while (n > 1 || n < 6);
	system("cls");
	cout << "\n\nYour Final order is : \n";
	cout << " _________________________________________________\n";
	cout << "| Order |         Item        |  Price  |  Order  |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   1.  |      Cup of Tea     |  " << a << "  |    " << O[0] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   2.  |        Biryani      |  " << b << " |    " << O[1] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   3.  |        Qourma       |  " << c << "  |    " << O[2] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   4.  |       Paratha       |  " << d << "  |    " << O[3] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   5.  |         Sabzi       |  " << e << "  |    " << O[4] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|   6.  |        Omlate       |  " << f << "  |    " << O[5] << "    |\n";
	cout << "|^^^^^^^|^^^^^^^^^^^^^^^^^^^^^|^^^^^^^^^|^^^^^^^^^|\n";
	cout << "|       |   Total Amount is   |  " << (O[0] * a) + (O[1] * b) + (O[2] * c) + (O[3] * d) + (O[4] * e) + (O[5] * f) << " |         |\n";
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ";
}