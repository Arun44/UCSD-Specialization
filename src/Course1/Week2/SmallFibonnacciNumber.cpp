#include <iostream>
#include <vector>
#include <cstdio>
#include <iterator>
#define ll long long
using namespace std;
class op
{
    int n; vector<ll int> dp;ll int l;ll int temp; ll int t2;
    public:
    void create()
    {
        cin >> n;
        for(int i=0;i<=n;i++)
        {
            dp.push_back(-1);
        }
        dp[0]=0;dp[1]=1;
        l=calc(n);
        cout << endl;
        cout << l;
    }
    ll int calc(int k)
    {
        
        if(dp[k]!=-1)
        {
            return dp[k];
        }
        else if(k==0)
        {
            return 0;
        }
        else if(k==1)
        {
            return 1;
        }
        else
        {
            //t2=k;
            dp[k]=calc(k-1)+calc(k-2);
            temp=dp[k];
            return temp;
        }
    }
};
int main()
{
    op o;
    o.create();
    return 0;
}