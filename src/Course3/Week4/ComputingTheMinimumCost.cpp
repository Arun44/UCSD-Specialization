#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef priority_queue<pll,vector<pll>,greater<pll>> pqll;
typedef vector<ll> vll;
typedef list<pll> lpll;
typedef lpll::iterator pit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lpll *a;
class flight
{
    ll n,m,u,v,w,s,d; vll process,distance; pqll wait; pll temp,qw;pit it;
    public:
    void inp()
    {
        cin >> n >> m;
        a = new lpll[n+1];
        process.pb(-1);distance.pb(1000000000);
        forl(i,0,n)
        {
            process.pb(-1);distance.pb(1000000000);  
        }
        forl(i,0,m)
        {
           cin >> u >> v >> w;
           a[u].pb(mp(v,w));
        }
        cin >> s >> d;
        wait.push(mp(0,s));distance[s]=0;
        while(wait.empty()==false)
        {
              temp = wait.top();   
              wait.pop();
              if(process[temp.second]==-1)
              {
                    comp();
                    process[temp.second]=0;
              }
        }
        if(distance[d]!=1000000000)
        {
           cout << distance[d] << endl;    
        }
        else
        {
            cout << -1 << endl;    
        }
    }
    void comp()
    {
         for(auto it=a[temp.second].begin();it!=a[temp.second].end();it++)
         {     
             
             
                if(distance[it->first]>(distance[temp.second]+ it->second))
                {
                        distance[it->first]=(distance[temp.second]+ it->second);
                        wait.push(mp(distance[it->first],it->first));
                }
                
         }
        return;
    }
};
int main()
{
    flight f;
    f.inp();
    return 0;
}