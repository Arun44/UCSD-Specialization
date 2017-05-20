#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef list<ll> lil;
typedef queue<pll> qpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class flights
{
    ll n,m,tem1,tem2,source,destination; 
    vll visited; qpll wait; pll temp;ll ans;
    bool f=true;
    public:
    void inp()
    {
        cin >> n >> m;
        a = new lil[n+1];
        visited.pb(-1);
        forl(i,1,n+1)
        {
            visited.pb(-1);    
        }
        forl(i,0,m)
        {
            cin >> tem1 >> tem2 ;
            a[tem1].pb(tem2); a[tem2].pb(tem1);
        }
        cin >> source >> destination ;
        wait.push(mp(source,0));
        while(wait.empty()==false)
        {
              temp = wait.front(); wait.pop();
              bfs(temp.first,temp.second);
              if(f==false)
              {
                  break;    
              }
        }
        if(f==true){cout << -1 << endl;}
        else{cout << ans << endl;}
    }
    void bfs(ll x,ll dis)
    {
        visited[x]=0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
             if(visited[*it]==-1)
             {
                   visited[*it]=0;
                   wait.push(mp(*it,dis+1));
                   if(*it==destination)
                   {
                       ans = dis + 1;
                       f=false;
                       break;
                   }
             }
        }
    }
};
int main()
{
     flights f;
     f.inp();
     return 0;
}