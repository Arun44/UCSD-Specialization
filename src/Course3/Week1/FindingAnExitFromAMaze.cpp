#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class maze
{
   ll n,m,tem1,tem2,source,destination;vll visited;
   bool f=true;
   public:
   void inp()
   {
       cin >> n >> m ;
       a = new lil[n+1];
       visited.pb(-1);
       forl(i,0,n)
       {
           visited.pb(-1);
       }
       forl(i,0,m)
       {
           cin >> tem1 >> tem2;
           a[tem1].pb(tem2);a[tem2].pb(tem1);
       }
       cin >> source >> destination ;
       dfs(source);
       if(f==true)
       {
           cout << 0 << endl;
       }
   } 
   void dfs(ll x)
   {
       visited[x]=0;
       for(auto it=a[x].begin();it!=a[x].end();it++)
       {
            if(visited.at(*it)==-1)
            {
                visited[*it]=0;
                if(*it==destination)
                {
                    cout << 1 << endl;
                    f=false;
                    break;
                }
                dfs(*it);
                if(f==false)
                {
                    break;
                }
            }
       }
   }
};
int main()
{
    maze m;
    m.inp();
    return 0;
}