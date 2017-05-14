#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class revenue
{
    ll no;ll temp; vll a,b;ll pro=0;
    public:
    void inp()
    {
        cin >> no;
        forn(i,1,no)
        {
             cin >> temp; a.pb(temp);    
        }
        forn(i,1,no)
        {
             cin >> temp; b.pb(temp);  
        }
        sort(a.begin(),a.end());sort(b.begin(),b.end());
        forl(i,0,a.size())
        {
            pro = pro + (a.at(i)*b.at(i)) ;    
        }
        cout << pro << endl;
    }
};
int main()
{
    revenue r;
    r.inp();
    return 0;
}