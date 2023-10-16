#include <cmath>
module RBPO.LAB2.Variant14.Task4:f3;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
            double f3(int n) {
                double func3 = 0;
                int i = 1;
                do
                {
                    func3 += (pow(-1, i)) * ((i + 1) / (pow(i, 3) + 1));
                    i++;
                } while (i <= n);
                return func3;
            }
		}
	}
}