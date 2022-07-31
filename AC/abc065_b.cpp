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

    unordered_set<int> visited{1};
    int ans = 0;
    int i = 1;
    do
    {
        i = a[i - 1];
        ++ans;
        if(visited.find(i) != visited.end())
        {
            cout << -1 << endl;
            return 0;
        }
        visited.insert(i);
    } while (i != 2);
    
    cout << ans << endl;;
}
