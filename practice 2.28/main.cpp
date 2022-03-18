#include <iostream>

using namespace std;

int main()
{    int x;
     cout << "Input a five-digit integer and press enter" << endl;
     cin >> x;
     cout << x / 10000  << "   " << x / 1000 - x / 10000 * 10 << "   " << x / 100 - x / 1000 * 10 << "   " << x / 10 - x / 100 * 10 << "   " << x - x/10 * 10 << endl;

    return 0;
}
