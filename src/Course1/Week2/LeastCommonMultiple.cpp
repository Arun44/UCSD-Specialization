#include <bits/stdc++.h>
#define ll long long
using namespace std;
class op
{
    ll int a,b,temp,t1,t2,a1,b1;ll ans;
public:
    void create()
    {
        cin >> a >> b;
        a1=a;b1=b;
        t2=gcf();
        ans = (a1*b1) / t2 ;
        cout << ans << endl;
    }
    ll int gcf()
    {
        if(b==0)
        {
            return a;
        }
        else
        {
            temp=a%b;
            a=b;
            b=temp;
            t1=gcf();
            return t1;
        }
    }
    
};
int main()
{
    op o;
    o.create();
    return 0;
}

