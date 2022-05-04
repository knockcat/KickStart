// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acee89

#include <bits/stdc++.h>
using namespace std;

bool check(int i)
{
    string str = to_string(i);
    reverse(str.begin(), str.end());

    return (str == to_string(i));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long ind = 0;
        long long x;
        cin >> x;
        long long i = 1;

        while (i * i <= x)
        {
            if (x % i == 0)
            {
                if (check(i))
                    ++ind;
                if (x / i != i)
                {
                    if (check(x / i))
                        ++ind;
                }
            }

            ++i;
        }

        static long long k = 0;
        cout << "Case #" << ++k << ":"
             << " " << ind << endl;
    }
    return 0;
}