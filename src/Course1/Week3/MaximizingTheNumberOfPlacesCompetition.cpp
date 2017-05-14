#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class prize
{
    ll l=1;ll k;vll ans;ll count=0;
    public:
    void inp()
    {
        cin >> k;
        while(k>2*l)
        {
            count = count + 1;
            ans.pb(l);
            k=k-l;l=l+1;
        }
        count = count + 1;
        ans.pb(k);
        cout << count << endl;
        forl(i,0,ans.size())
        {
            cout << ans.at(i) << " " ;
        }
    }
    
};
int main()
{
   prize p;
   p.inp();
   return 0;
}