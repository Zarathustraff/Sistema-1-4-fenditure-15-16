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
	for (int a = 0; a == 0; a++) {
		try {
			YExcel::BasicExcel f1("1.xls");
			if (!(f1.file_.IsOpen())) {
				throw 1;
				break;
			};
			
			YExcel::BasicExcel f2("2.xls");
			if (!(f2.file_.IsOpen())) {
				throw 2;
				break;
			};
			YExcel::BasicExcel f3("3.xls");
			if (!(f3.file_.IsOpen())) {
				throw 3;
				break;
			};
			YExcel::BasicExcel f4("4.xls");
			if (!(f4.file_.IsOpen())) {
				throw 4;
				break;
			};

			YExcel::BasicExcelWorksheet* f1Sheet = f1.GetWorksheet(0);
			YExcel::BasicExcelWorksheet* f2Sheet = f2.GetWorksheet(0);
			YExcel::BasicExcelWorksheet* f3Sheet = f3.GetWorksheet(0);
			YExcel::BasicExcelWorksheet* f4Sheet = f4.GetWorksheet(0);

			
			vector<float> f1F, f2F, f3F, f4F;
			vector<double> f1D, f2D, f3D, f4D;

			for (int row = 0; row<400; row++) {
				
				f1D.push_back(f1Sheet->Cell(row, 1)->GetDouble());
				f1F.push_back(f1D[row] /*/ 10000*/);
				std::cout <<row<<": "<< f1Sheet->Cell(row, 1)->GetDouble() << ": " << f1D[row] << ": " << f1F[row] << endl;
			};
			for (int row = 0; row<400; row++) {

				f2D.push_back(f2Sheet->Cell(row, 1)->GetDouble());
				f2F.push_back(f2D[row] /*/ 10000*/);
				std::cout << row << ": " << f1Sheet->Cell(row, 1)->GetDouble() << ": " << f2D[row] << ": " << f2F[row] << endl;
			};
			for (int row = 0; row<400; row++) {

				f3D.push_back(f3Sheet->Cell(row, 1)->GetDouble());
				f3F.push_back(f3D[row] /*/ 10000*/);
				std::cout << row << ": " << f1Sheet->Cell(row, 1)->GetDouble() << ": " << f3D[row] << ": " << f3F[row] << endl;
			};
			for (int row = 0; row<400; row++) {

				f4D.push_back(f4Sheet->Cell(row, 1)->GetDouble());
				f4F.push_back(f4D[row] /*/ 10000*/);
				std::cout << row << ": " << f4Sheet->Cell(row, 1)->GetDouble() << ": " << f4D[row] << ": " << f4F[row] << endl;
			};
		}
		catch (int e) {

			std::cout << "errore Nr. " << e << endl;

		};
	};

	int i;
	std::cin >> i;

    return 0;
}

