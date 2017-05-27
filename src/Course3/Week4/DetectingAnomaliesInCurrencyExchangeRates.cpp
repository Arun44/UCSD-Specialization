#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<ll,pll> plll;
typedef vector<plll> vpll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class flight
{
    ll n,m,u,v,w; plll temp; pll tem; vll distance;vpll edges;
    public:
    void inp()
    {
        cin >> n >> m;
        distance.pb(1000000000);
        forl(i,0,n)
        {
            distance.pb(1000000000);    
        }
        forl(i,0,m)
        {
            cin >> u >> v >> w;
            edges.pb(mp(u,mp(v,w)));
            if(i==0)
            {
                distance[u]=0;    
            }
        }
        forl(i,0,n-1)
        {
                for(ll j=0;j<edges.size();j++)
                {
                     temp = edges[j];
                     tem = temp.second ;
                     if(distance[tem.first]>distance[temp.first]+tem.second)
                     {
                         distance[tem.first] = distance[temp.first] + tem.second ;

                     }
               }
        }
        forl(i,0,1)
        {
            for(ll j=0;j<edges.size();j++)
                {
                     temp = edges[j];
                     tem = temp.second ;
                     if(distance[tem.first]>distance[temp.first]+tem.second)
                     {
                         cout << 1 << endl;
                         return;
                     }
               }
        }
        cout << 0 << endl;
    }
};
int main()
{
    flight f;
    f.inp();
    return 0;
}