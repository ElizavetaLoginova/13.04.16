#include <iostream>
#include "CSquareEcuation.h"

using namespace std;

int main()
{
	int a, b;
	cout << "Enter the length: ";
	cin >> a;
	cout << "Enter the width: ";
	cin >> b;

	char sym;
	cout << "Enter the symbol for drawing: ";
	cin >> sym;


	CSquareEquation eq(a, b, sym);
	eq.Results();
	eq.Draw();
	system("pause");
}
