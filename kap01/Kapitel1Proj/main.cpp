#include <iostream>

using namespace std;

int main()
{
    int s1, s2;

    cout << "Geben Sie zwei ganze Zahlen ein: ";
    cin >> s1 >> s2;

    cout << "Summe: " << s1+s2 << "\n Groesse der Summe: " << sizeof(s1) << "\n Erste eingegebene Zahl war: " << s1;
    return 0;
}
