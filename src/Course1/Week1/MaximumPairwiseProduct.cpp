#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class product
{
    ll no,temp;vll a;
    public:
    void inp()
    {
        cin >> no;
        forl(i,0,no){cin >> temp;a.pb(temp);}
        sort(a.begin(),a.end(),greater<ll>());
        cout << a.at(0) * a.at(1) << endl;
    }
};
int main()
{
    product p;
    p.inp();
    return 0;
}