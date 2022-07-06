#pragma once
#include <vector>
#include <fstream>
#include <string>
#include "Point.h"
#include "ErrorCode.h"

class BinaryFile
{
private:
	std::fstream Plik;
	Point Punkt;
public:
	BinaryFile	(void);
	~BinaryFile	(void);
	ERROR_CODE read	(std::vector<Point>& vec);
	ERROR_CODE read	(Point& pkt, int indeks);
	ERROR_CODE write(std::vector<Point>& vec);
};

