#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    string a, b;
    cin >> a >> b;
    auto num = stoi(a + b);

    for(int i = 1; i <= 320; ++i)
    {
        if(i * i == num)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
