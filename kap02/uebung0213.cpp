/**
 *	This program solves Uebung 2.13 (p. 156).
 */
#include <vector>
#include <iostream>

double polynom(const std::vector<double>&, double);

int main(void){
	const std::vector<double> k0 {5, 3};
	const double x0 = 2.0;
	const std::vector<double> k1 {5, 3, 2, 3};
	const double x1 = 2.0;
	const std::vector<double> k2 {7.3, 3.1415, 2.4, 5.0, 13.4, x1};
	const double x2 = 4.55;
	const std::vector<double> k3 {1.1, 2.22, 13.0};
	const double x3 = 2.04;
	const std::vector<double> k4 = k3;
	const double x4 = 3.033;
	
	std::cout << "Beispiel 0: " << polynom(k0, x0) << '\n';
	std::cout << "Beispiel 1: " << polynom(k1, x1) << '\n';
	std::cout << "Beispiel 2: " << polynom(k2, x2) << '\n';
	std::cout << "Beispiel 3: " << polynom(k3, x3) << '\n';
	std::cout << "Beispiel 4: " << polynom(k4, x4) << '\n';
	system("pause");
	return 0;
}

double polynom(const std::vector<double>& k, double x){
	double ret {1};
	if (k.empty()){
		return 0;
	} else {
		ret = k[k.size()-1];
		for(int exp = k.size()-2; exp >= 0; exp--){
			ret *= x;
			ret += k[exp];
		}
	}
	return ret;
}