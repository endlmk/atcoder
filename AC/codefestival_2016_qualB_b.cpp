#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    int N = 0, A = 0, B = 0;
    cin >> N >> A >> B;

    string s;
    cin >> s;

    auto cond_a = [&] (int pass) { return pass < A + B; };
    auto cond_b = [&] (int pass, int pass_b) { return pass < A + B && pass_b < B; };

    int pass = 0;
    int pass_b = 0;
    rep(i, N)
    {
        bool passed = false;
        if(s[i] == 'a')
        {
            if(cond_a(pass))
            {
                passed = true;
                ++pass;
            }
        }
        else if(s[i] == 'b')
        {
            if(cond_b(pass, pass_b))
            {
                passed = true;
                ++pass;
                ++pass_b;
            }
        }

        cout << (passed ? "Yes" : "No") << endl;
    }
}