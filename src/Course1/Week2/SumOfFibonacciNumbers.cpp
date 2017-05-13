#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class sumoffibo
{
    ll n,temp; vll dp; ll sum=0;
    public:
    void inp()
    {
        cin >> n;
        dp.pb(0);dp.pb(1);
        forn(i,2,n)
        {
            temp = ((dp.at(i-2))%10 + (dp.at(i-1))%10)%10 ;
            dp.pb(temp) ;
        } 
        forl(i,0,dp.size())
        {
           sum = ((sum)%10 + (dp.at(i))%10)%10 ;    
        }
       cout << sum << endl;
    }
};
int main()
{
    sumoffibo p;
    p.inp();
    return 0;
}