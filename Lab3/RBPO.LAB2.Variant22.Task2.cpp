#include <iostream>
module RBPO.LAB2.Variant22.Task2;

namespace RBPO {
	namespace Lab2 {
		namespace Task2 {
			double f1(double x) {
				return (4 - pow(x, 2)) / 2;
			}
			double f2(double x) {
				if (x > 3.0) {
					return 1.2 * pow(x, 2) - 3 * x - 9;
				}
				else {
					return 12 / (2 * pow(x, 2) + 1);
				}
			}
			double a(int i) { 
				return pow(-1, i) * (i + 1) / (pow(i, 3) + 2);
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
