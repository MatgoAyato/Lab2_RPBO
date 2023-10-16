#include <iostream>
module RBPO.LAB2.Variant14.Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Task1 {
			double f1(double x) {
				return (cos(x) + sin(x)) / (cos(x) - sin(x));
			}
			double f2(double x) {
				return (x < 2) ? abs(1 - sin(2 * x)) : (1 + pow(x,2)) / sqrt(2 * x);
			}
			double a(int i) {
				return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
			}
			double f3(int n) {
				double func3 = 0;
				for (int i = 1; i <= n; i++)
				{
					func3 += a(i);
				}
				return func3;
			}
			double f4(int i,double eps) {
				double tochnost = 99999, func4 = 0;

				for (i = 1; tochnost > eps; i++)
				{
					tochnost = abs((pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1)) - (pow(-1, (i - 1))) * (((i - 1) + 1) / (pow((i - 1), 3) + 1)));
					func4 += a(i);

				};
				return func4;
			}
		}
	}
}
