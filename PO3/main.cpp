#include <iostream>
#include "BinaryFile.h"
#include "CsvFile.h"
#include "ErrorCode.h"

using namespace std;

int main()
{
	//CsvFile CSV;
	vector<Point> Wektor;
	Point Punkt;
	for (float i = 1; i <= 10; i++)
	{
		Punkt.setX(i);
		Punkt.setY(i);
		Punkt.setZ(i);
		Wektor.push_back(Punkt);
	}

	////CSV.write(Wektor);

	//Point Odczytany;
	//CSV.read(Odczytany, 0);

	//cout << Odczytany.getX() << ", " << Odczytany.getY() << ", " << Odczytany.getZ() << endl;

	BinaryFile BIN;
	BIN.write(Wektor);

	return 0;
}