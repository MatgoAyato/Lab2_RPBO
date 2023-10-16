#include <iostream>
module RBPO.LAB2.Variant14.Task4:f2;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double f2(double x) {
				if (x < 2) return abs(1 - sin(2 * x)); else return (1 + pow(x, 2)) / sqrt(2 * x);
				}
			}
		}
	}