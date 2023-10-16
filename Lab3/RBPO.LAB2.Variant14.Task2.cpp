#include <iostream>
#include <cmath>
#include <math.h>
module RBPO.LAB2.Variant14.Task2;

namespace RBPO {
	namespace Lab2 {
		namespace Task2 {
            double a(int i) {
                return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
            }
            double f1(double x)
            {
                return (cos(x) + sin(x)) / (cos(x) - sin(x));
            }
            double f2(double x) {
                double func2;
                if (x < 2) func2 = abs(1 - sin(2 * x)); else func2 = (1 + pow(x , 2)) / pow((2 * x),0.5);
                return func2;
            }

            double f3(int k)
            {
                double func3 = 0;

                while (int i = 1 <= k)
                {
                    func3 += a(i);
                    i++;
                };
                return func3;
            }
            double f4(double E)
            {
                double tochnost = 99999, func4 = 0;
                int i = 1;
                while (tochnost > E)
                {
                    tochnost = abs((pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1)) - (pow(-1, (i - 1))) * (((i - 1) + 1) / (pow((i - 1), 3) + 1)));
                    func4 += a(i);
                    i++;
                };
                return func4;
            }
		}
	}
}
