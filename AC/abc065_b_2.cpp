#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N)
    {
        cin >> a[i];
    }

    int button = 1;
    rep(i, 100000)
    {
        if(a[button - 1] == 2)
        {
            cout << (i + 1) << endl;
            return 0;
        }
        button = a[button - 1];        
    }
    
    cout << -1 << endl;;
}
