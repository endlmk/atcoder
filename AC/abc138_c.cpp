#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
   int N;
   cin >> N;

   vector<int> v(N);
   rep(i, N)
   {
      cin >> v[i];
   }

   sort(v.begin(), v.end());

   double ans = (v[0] + v[1]) / 2.0;
   for (int i = 2; i < N; ++i)
   {
      ans = (ans + v[i]) / 2.0;
   }

   cout << ans << endl;
}
