#include <iostream>
module RBPO.LAB2.Variant22.Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
			double f2(double x) {
				if (x > 3.0) {
					return 1.2 * pow(x, 2) - 3 * x - 9;
				}
				else {
					return 12 / (2 * pow(x, 2) + 1);
				}
			}
		}
	}
}