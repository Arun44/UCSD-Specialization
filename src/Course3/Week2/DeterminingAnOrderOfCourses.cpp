#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class maze
{
   ll n,m,tem1,tem2;vll visited,start; vpll stop;vpll wait;
   ll count = 1;
   public:
   void inp()
   {
       cin >> n >> m ;
       a = new lil[n+1];
       visited.pb(-1);start.pb(-1);stop.pb(mp(-1,-1));
       forl(i,0,n)
       {
           visited.pb(-1);start.pb(-1);stop.pb(mp(-1,-1));
       }
       forl(i,0,m)
       {
           cin >> tem1 >> tem2;
           a[tem1].pb(tem2);
           wait.pb(mp(tem1,tem2));
       }
       forl(i,0,wait.size())
       {
            if(visited[wait.at(i).first]==-1)
            {
                dfs(wait.at(i).first);    
            }
       }
       forl(i,1,n+1)
       {
            if(visited[i]==-1)
            {
                count = count + 2;
                stop[i]=mp(count,i);
            }
       }
       sort(stop.begin(),stop.end());
       for(ll i=n;i>0;i--)
       {
           cout << stop.at(i).second << " " ;    
       }
        
   } 
   void dfs(ll x)
   {
       visited[x]=0;start[x]=count;
       for(auto it=a[x].begin();it!=a[x].end();it++)
       {
            if(visited.at(*it)==-1)
            {
                visited[*it]=0;
                count = count + 1;
                dfs(*it);
            }
        
       }
       count = count + 1;
       stop[x]=mp(count,x);
    }
};
int main()
{
    maze m;
    m.inp();
    return 0;
}


