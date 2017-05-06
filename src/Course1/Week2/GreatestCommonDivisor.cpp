#include <bits/stdc++.h>
#define ll long long
using namespace std;
class op
{
    ll int a,b,temp,t1,t2;
public:
    void create()
    {
        cin >> a >> b;
        t2=gcf();
        cout << t2;
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