#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class majority
{
    ll no,temp,majorelement,index;vll att;ll count=0;
    public:
    void inp()
    {
      cin >> no;
      forl(i,0,no)
      {
         cin >> temp;
         att.pb(temp);    
      }
      forl(i,0,att.size())
      {
           if(i==0)
           {
               count = count + 1;
               index = i;
               majorelement = att.at(index);
           }
          else
          {
               if(att.at(i)!=majorelement)
               {
                   count = count - 1;
                   if(count==0)
                   {
                      index = i;majorelement = att.at(index);
                      count = count + 1;
                   }
               }
               else
               {
                   count = count + 1;    
               }
          }
      }
      count = 0;
      forl(i,0,att.size())
      {
          if(att.at(i)==majorelement)
          {
             count = count + 1;      
          }
      }
      if(count>(att.size()/2))
      {
         cout << 1 << endl;    
      }
      else
      {
          cout << 0 << endl;    
      }
    }
};
int main()
{
    majority y;
    y.inp();
    return 0;
}