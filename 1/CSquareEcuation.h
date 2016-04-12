#pragma once

class CSquareEquation
{
public:
	CSquareEquation(int, int, char);
	void Results();
	void Draw();

private:
	int a, b;
	char c;
	int Area();
	int Perimeter();
	bool IsTheSquare();
	
	
};