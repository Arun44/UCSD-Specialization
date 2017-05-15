#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class sea
{
    ll low,high,mid,no,temp,target; vll att,ques,ans;
    bool f=true;
    public:
    void inp()
    {
      cin >> no;
      forn(i,1,no)
      {
         cin >> temp; att.pb(temp);    
      }
      cin >> no;
      forn(i,1,no)
      {
          cin >> temp; ques.pb(temp);
      }
      forl(i,0,ques.size())
      {
           low = 0;high=att.size()-1;f=true;
           target = ques.at(i);
           calculate();
      }
      forl(i,0,ans.size())
      {
          cout << ans.at(i) << " " ;    
      }
    }
    void calculate()
    {
       while(low<=high)
       {
            mid = ((high - low)/2) + low ;
            if(att.at(mid)==target)
            {
                ans.pb(mid);
                f = false;
                break;
            }
           else
           {
                 if(target>att.at(mid))
                 {
                     low = mid + 1;    
                 }
                else if(target<att.at(mid))
                {
                     high = mid - 1;
                }
           }
       }
       if(f!=false)
       {
           ans.pb(-1);
       }
    }
};
int main()
{
    sea a;
    a.inp();
    return 0;
}