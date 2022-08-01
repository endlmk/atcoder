#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    string s;
    cin >> s;

    auto it = s.cbegin();
    while(it != s.cend() && *it == 'W')
    {
        ++it;
    }

    int setWPos = 0;
    int i = 0;
    ll ans = 0;
    for(;it != s.cend(); ++it)
    {
        if(*it == 'W')
        {
            ans += (i - setWPos);
            ++setWPos;
        }
        ++i;
    }

    cout << ans << endl;
}
