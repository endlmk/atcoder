#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    string s;
    cin >> s;
    
    vector<int> num(s.length() + 1, 0);

    int gtnum = 0; // <
    int ltnum = 0; // >
    rep(i, num.size()) 
    {
        if(i > 0)
        {
            if(s[i - 1] == '<')
            {
                ++gtnum;
            }
            else
            {
                gtnum = 0;
            }
        }

        if(i < s.size())
        {
            if(s[i] == '>')
            {
                if(ltnum == 0)
                {
                    for(int j = i; j < s.length() && s[j] == '>'; ++j)
                    {
                        ++ltnum;
                    }
                }
                else
                {
                    --ltnum;
                }
            }
            else
            {
                ltnum = 0;
            }
        }
        else
        {
            ltnum = 0;
        }

        num[i] = max(gtnum, ltnum);
    }

    ll ans = 0;
    rep(i, num.size())
    {
        ans += num[i];
    }

    cout << ans << endl; 
    
}
