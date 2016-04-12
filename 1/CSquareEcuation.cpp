#include "CSquareEcuation.h"
#include <iostream>

using namespace std;

CSquareEquation::CSquareEquation(int x, int y, char z)
{
	if (x < 0 || x > 20)
	{
		a = 1;
	}
	if (y < 0 || y > 20)
	{
		b = 1;
	}

	else a = x;
	b = y;
	c = z;
}

void CSquareEquation::Results()
{
	cout << "The perimeter is: " << Perimeter() << endl;
	cout << "The area is: " << Area() << endl;
	if (IsTheSquare())
	cout << "Is it square? Yes "<< endl;
	else cout << "Is it square? No! " << endl;


}

void CSquareEquation::Draw()
{
	char arr[20][20];

	for (int i = 0; i < a; i = i++)
		for (int j = 0; j < b; j++)
			arr[i][j] = ' ';
	
	for (int i = 0; i <a; i = i + a - 1)
		for (int j = 0; j < b; j++)
			arr[i][j] = c;
	
	for (int i = 0; i < b; i = i + b)
		for (int j = 0; j <a; j++)
			arr[j][i] = c;
		
		for (int i = 0; i < a; i = i++)
		{
			for (int j = 0; j < b; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
}

int CSquareEquation::Area()
{
	return (a*b);
}

int CSquareEquation::Perimeter()
{
	return (2*(a+b));
}

bool CSquareEquation::IsTheSquare()
{
	if (a == b) return true;
	else return false;
}

