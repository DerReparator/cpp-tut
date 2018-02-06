#include "mathexpr.h"

using namespace std;
/* UEBUNG 1.1 */

mathexpr::mathexpr()
{
    float x;
    cout << "x eingeben:";
    cin >> x;
    cout << "x       = " << x << '\n';
    cout << "fabs(x) = " << fabs(x) << '\n';
    cout << "sqrt(x) = " << sqrt(x) << '\n';
    cout << "sin(x)  = " << sin(x) << '\n';
    cout << "exp(x)  = " << exp(x) << '\n';
    cout << "log(x)  = " << log(x) << '\n';
 }

mathexpr::~mathexpr()
{
    //dtor
}
