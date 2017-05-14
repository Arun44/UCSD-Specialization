#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef vector<ll> vll;
typedef vector<s> vss;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
ll comp(string x,string y)
{
    string xy = x.append(y);string yx=y.append(x);
    return xy.compare(yx) > 0 ? 1:0; 
}
class solution
{
    ll n,temp; vll a; vss att;s ans;
    public:
    void inp()
    {
        cin >> n;
        forn(i,1,n)
        {
           cin >> temp; a.pb(temp);    
        }
        forl(i,0,a.size())
        {
            att.pb(to_string(a.at(i)));    
        }
        sort(att.begin(),att.end(),comp);
        forl(i,0,att.size())
        {
            ans = ans + att.at(i);    
        }
        cout << ans << endl;
    }
};
int main()
{
     solution a;
     a.inp();
     return 0;
}