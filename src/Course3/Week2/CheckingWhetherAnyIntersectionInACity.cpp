#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef stack<ll> stll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a; lil *b;
class intersection
{
    ll n,m,tem1,tem2,temp;stll wait; vll visited,rvisited;
    ll count = 0;
    public:
    void inp()
    {
         cin >> n >> m;
         a = new lil[n+1]; b = new lil[n+1];
         visited.pb(-1);rvisited.pb(-1);
         forl(i,1,n+1)
         {
             visited.pb(-1);rvisited.pb(-1);    
         }
         forl(i,0,m)
         {
             cin >> tem1 >> tem2 ;
             a[tem1].pb(tem2);  // for forward direction
             b[tem2].pb(tem1);  // for reverse direction
         }
        forl(i,1,n+1)
        {
             if(visited.at(i)==-1)
             {
                 dfs(i) ;     
             }
        }
        while(wait.empty()==false)
        {
             temp = wait.top(); wait.pop();
             if(rvisited[temp]==-1)
             {
                 count = count + 1;
                 rdfs(temp); 
             }
        }
        cout << count << endl;
    }
    void dfs(ll x)
    {
        visited[x]=0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
            if(visited[*it]==-1)
            {
                visited[*it]=0;
                dfs(*it);    
            }
        }
        wait.push(x); //pushing the elements into the stack:)
    }
    void rdfs(ll x)
    {
        rvisited[x]=0;
        for(auto it=b[x].begin();it!=b[x].end();it++)
        {
                if(rvisited[*it]==-1)
                {
                     rvisited[*it]=0;
                     rdfs(*it);
                }
            
            
        }
    }
};
int main()
{
   intersection t;
   t.inp();
   return 0;
}