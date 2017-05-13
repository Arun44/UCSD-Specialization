#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class pisano 
{
    ll n,m,temp; ll count = 2;ll prev =1;vll pis;ll k=2;bool t=false;ll index;
public:
    void inp()
    {
        cin >> n >> m;
        pis.pb(0);pis.pb(1);
        // to find the period of the pisano for given m
        while(t==false)
        {
             temp=((pis.at(k-2))%m + (pis.at(k-1))%m)%m ;
             pis.pb(temp);k=k+1;
             if ((temp==0)||(temp==1))
             {
                 if (temp==0)
                 {
                     prev = temp;
                 }
                 else if(temp==1)
                 {
                     if(prev==0)
                     {
                         t=true;
                     }
                     else 
                     {
                         count = count + 1;
                         prev = temp;
                     }
                 }
             }
             else
             {
                 if(prev!=0)
                 {
                    count = count + 1;
                 }
                 else
                 {
                     count = count + 2;
                 }
                 prev = temp;
             }
        }
        //cout << count << endl;
        index = (n%count) ;
        cout << pis.at(index) << endl;
    }
};
int main()
{
    pisano p;
    p.inp();
    return 0;
}

