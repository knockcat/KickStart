// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acf079

#include <iostream>
#include <iomanip>
#define pi 3.1415926535
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, a, b;
        cin >> r >> a >> b;
        double sum = 0.000000;
        sum += pi * r * r;
        r *= a;
        int ind = 1;
        while (r != 0)
        {
            sum += pi * r * r;
            if (ind & 1)
                r /= b;
            else
                r *= a;
            ++ind;
        }
        static int i = 0;
        cout << "Case #" << ++i << ":"
             << " " << fixed << setprecision(6) << sum << endl;
    }
    return 0;
}