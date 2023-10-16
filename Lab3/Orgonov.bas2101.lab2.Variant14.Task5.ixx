#include <cmath>
export module RBPO.LAB2.Variant14.Task5;

export namespace RBPO {
	namespace Lab2 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab2::Task5::f1(double x) {
	return (cos(x) + sin(x)) / (cos(x) - sin(x));
}
double RBPO::Lab2::Task5::f2(double x) {
	if (x < 2) return abs(1 - sin(2 * x)); else return (1 + pow(x, 2)) / sqrt(2 * x);
}
double RBPO::Lab2::Task5::a(int i) {
	return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
}
double RBPO::Lab2::Task5::f3(int n) {
		double func3 = 0;
		int i = 1;
		do
		{
			func3 += (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
			i++;
		} while (i <= n);
		return func3;
}
double RBPO::Lab2::Task5::f4(double eps) {
	double tochnost = 99999, func4 = 0;
	int i = 1;
	do
	{
		tochnost = abs((pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1)) - (pow(-1, (i - 1))) * (((i - 1) + 1) / (pow((i - 1), 3) + 1)));
		func4 += a(i);
		i++;
	} while (tochnost > eps);
	return func4;
}