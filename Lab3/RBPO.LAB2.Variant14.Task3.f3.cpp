module RBPO.LAB2.Variant14.Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
			double f3(int n) {
                double func3 = 0;
                int i = 1;
                do
                {
                    func3 += a(i);
                    i++;
                } while (i <= n);
                return func3;
			}
		}
	}
}