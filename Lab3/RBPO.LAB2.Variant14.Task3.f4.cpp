#include <cmath>
module RBPO.LAB2.Variant14.Task3;
namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
			double f4(double eps) {
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
		}
	}
}