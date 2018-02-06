#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <mathexpr.h>

using namespace std;

double f(double x){
    return (exp(x)+1)/(x+1);
}

int main()
{
    mathexpr meinMathe;
    system("pause");
    const double epsilon = 1e-6;
    fstream file;
    file << setiosflags(ios::fixed);
    file.open("werte.bin", ios::out);

    for(double i = -10.0; i <= 10.0; i += 0.01F){
        if((i < (-1+epsilon)) && (i > (-1-epsilon))){
            file << endl;
        } else {
            file << "f(" << i << ") = " << f(i) << endl;
        }
    }
}
