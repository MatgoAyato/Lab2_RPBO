#include <iostream>
module RBPO.LAB2.Variant14.Task4:a;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double a(int i) {
				return (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
			}
		}
	}
}