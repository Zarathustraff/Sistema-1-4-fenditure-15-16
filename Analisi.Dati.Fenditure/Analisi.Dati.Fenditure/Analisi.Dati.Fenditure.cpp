// Analisi.Dati.Fenditure.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "BasicExcel.hpp"
#include "ExcelFormat.h"
#include "math.h"
#include "persistence1d.hpp"

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN


#include <windows.h>
#include <shellapi.h>
#include <crtdbg.h>
#include <vector>

#else // _WIN32


#define	FW_NORMAL	400
#define	FW_BOLD		700

#endif // _WIN32
double sind(double gradi);

double cosd(double gradi);

double convertiSecondiInGradi(double secondi);

double modulo(double val);

double gradiRadianti(double gradi);

double square(double value);


double convertiSecondiInGradi(double secondi) {

	int Gradi = secondi;

	double Gr = Gradi;

	double finale = ((secondi - Gr) / 0.6) + Gr;

	return finale;

};

double gradiRadianti(double gradi) {
	const double M_PI = 4 * atan(1);
	return gradi*M_PI / 180;
};

double sind(double gradi) {
	const double M_PI = 4 * atan(1);
	return sin((gradi)* M_PI / 180);
};

double cosd(double gradi) {
	const double M_PI = 4 * atan(1);
	return cos((gradi)* M_PI / 180);
};

double modulo(double val) {
	if (val < 0.0) {
		return -val;
	}
	else {
		return val;
	};
};

double square(double value) {
	return value*value;
};







int main()
{
	YExcel::BasicExcel f1("1 fenditura.xls");
	YExcel::BasicExcel f2("2 fenditure.xls");
	YExcel::BasicExcel f3("3 fenditure.xls");
	YExcel::BasicExcel f4("4 fenditure.xls");
	YExcel::BasicExcelWorksheet* f1Sheet = f1.GetWorksheet(0);
	YExcel::BasicExcelWorksheet* f2Sheet = f2.GetWorksheet(0);
	YExcel::BasicExcelWorksheet* f3Sheet = f3.GetWorksheet(0);
	YExcel::BasicExcelWorksheet* f4Sheet = f4.GetWorksheet(0);

	vector<long> f1L, f2L, f3L, f4L;
	vector<float> f1F, f2F, f3F, f4F;

	for (int row = 0; f1Sheet->Cell(row,1)->)

    return 0;
}

