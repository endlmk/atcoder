#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    int N = 0;
    cin >> N;

    auto pre = N * 100 / 108;

    int t = 0;
    do 
    {
        t = pre * 108 / 100;
        if(t == N)
        {
            cout << pre << endl;
            return 0;
        }
        ++pre;
    }
    while(t <= N);

    cout << ":(" << endl;
}
