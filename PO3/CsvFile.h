#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Point.h"
#include "ErrorCode.h"

class CsvFile
{
private:
	std::fstream Plik;
	Point Punkt;
public:
	CsvFile(void);
	~CsvFile(void);
	ERROR_CODE read(std::vector<Point>& wek);
	ERROR_CODE read(Point& pkt, int indeks);
	ERROR_CODE write(std::vector<Point>& wek);
};

