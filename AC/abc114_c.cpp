#include <bits/stdc++.h>

using namespace std;

long long N = 0;

bool hasNum(long long t, long long c)
{
    do 
    {
        if(t % 10 == c)
        {
            return true;
        }
        t /= 10;
    }
    while(t > 0);

    return false;
}

long long dfs(long long s)
{
    if(s > N)
    {
        return 0;
    } 
    
    long long ret = (hasNum(s, 3) && hasNum(s, 5) && hasNum(s, 7)) ? 1 : 0;

    ret += dfs(s * 10 + 3);
    ret += dfs(s * 10 + 5);
    ret += dfs(s * 10 + 7);

    return ret;
}

int main()
{
    cin >> N;
    cout << dfs(0) << endl;
}