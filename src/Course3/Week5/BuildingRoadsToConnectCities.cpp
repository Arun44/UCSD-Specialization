#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double d;
typedef pair<ll,ll> pll;
typedef pair<d,d> pdd;
typedef vector<d> vd;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef pair<d,pll> pdll;
typedef vector<pdll> vpddd;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class dus
{
    ll no,tem1,tem2; vpll a;d dis;vpddd b;// d t1;
    pdd t2; d ans; vll rank,parent;
    
    public:
    void inp()
    {
        cin >> no;
        forl(i,0,no)
        {
            cin >> tem1 >> tem2 ;
            a.pb(mp(tem1,tem2));
        }
        forl(i,0,a.size()-1)
        {
            forl(j,i+1,a.size())
            {
              dis=sqrt(((a[i].first-a[j].first)*(a[i].first-a[j].first))+ ((a[i].second-a[j].second)*(a[i].second-a[j].second)));
              b.pb(mp(dis,mp(i,j)));
            }
        }
        sort(b.begin(),b.end());
        /* forl(i,0,b.size())
        {
              t1 = b[i].first; t2 = b[i].second;
              cout << t1 << " " << t2.first << t2.second << endl;
              
        }*/
        forl(i,0,no)
        {
             parent.pb(i);rank.pb(0);
        }
        forl(i,0,b.size())
        {
             t2 = b[i].second;
             ll r1=finpar(t2.first);
             ll r2=finpar(t2.second);
             if(r1!=r2)
             {
                 ans = ans + b[i].first ;  
                 if(rank[r1]==rank[r2])
                 {
                      parent[r2]=r1;
                      rank[r1]=rank[r1]+1;rank[r2]=0;
                 }
                 else
                 {
                     if(rank[r1]<rank[r2])
                     {
                         parent[r1]=r2;
                         rank[r1]=0;
                     }
                     else 
                     {
                         parent[r2]=r1;
                         rank[r2]=0;
                     }
                 }
             }
             else
             {
                 continue;
             }
        }
        printf("% 0.8f",ans);
    }
    ll finpar(ll x)
    {
        while(x!=parent[x])
        {
            parent[x]=finpar(parent[x]);
            break;
        }
        return parent[x];
    }
};
int main()
{
    dus p;
    p.inp();
    return 0;
}