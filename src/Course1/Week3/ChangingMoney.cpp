#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
class changing
{
    ll m,temp; vll dp;
    public:
    void inp()
    {
        cin >> m;
        forn(i,0,m)
        {
           dp.pb(-1);    
        }
        dp.at(0)=0;
        forn(i,1,m)
        {
           dp[i] = df(i); 
           //cout << "value of i is  " << i << " " <<  dp[i] << endl;
        }
        cout << dp[m] << endl;
    }
    ll df(ll x)
    {
         if(x>=0)
         {
              if(dp[x]!=-1)
              {
                  return dp[x];    
              }
              else
              {
                   dp[x] = MIN(df(x-1),MIN(df(x-5),df(x-10))) + 1;
                    return dp[x];
              }
         }
        else
        {
            return 10000;    
        }
    }
};
int main()
{
    changing g;
    g.inp();
    return 0;
}