#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double d;
typedef pair<d,d> pdd;
typedef vector<d> vdd;
typedef vector<pdd> vpdd;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class loot
{
    d tempweight=0;ll n;d m;d tem1,tem2;vpdd att;d value=0;
    public:
    void inp()
    {
        cin >> n >> m;
        forn(i,1,n)
        {
            cin >> tem1 >> tem2 ;
            att.pb(mp((tem1/tem2),tem2));
        }
        sort(att.begin(),att.end(),greater<pdd>());
        forl(i,0,att.size())
        {
               
              if(( tempweight + att.at(i).second )<= m )
              {
                  value = value + (att.at(i).first)* (att.at(i).second) ; 
                  tempweight = tempweight + att.at(i).second ;
                  if(tempweight==m)
                  {
                      break; //the bag has been filled to it's capacity:)    
                  }
              }
              else
              {
                   value = ((m - tempweight)* (att.at(i).first)) + value ;
                   break;
              }
        }
        printf("%0.5f",value);
    }
};
int main()
{
    loot t;
    t.inp();
    return 0;
}