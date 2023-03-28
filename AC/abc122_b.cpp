#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
   string s;
   cin >> s;

   int ans = 0;
   int tmp = 0;
   for (const auto c : s)
   {
      if (c == 'A' || c == 'C' || c == 'G' || c == 'T')
      {
         ++tmp;
      }
      else
      {
         ans = max(ans, tmp);
         tmp = 0;
      }
   }
   ans = max(ans, tmp);

   cout << ans << endl;
}
