#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<=b;i++)
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class lst
{
    ll no;vll a;
public:
    void inp()
    {
        cin >> no;
        forl(i,0,no){a.pb(-1);}
        a.at(0)=0;a.at(1)=1;
        if(no==0){cout << a.at(0) << endl;return;}
        if(no==1){cout << a.at(1) << endl;return;}
        forl(i,2,no)
        {
              a.at(i)= ((a.at(i-1))%10  +  (a.at(i-2))%10)%10 ;
        }
        cout << a.at(no) << endl;
    }
};
int main()
{
    lst t;
    t.inp();
    return 0;
}