#include <iostream>
#include <vector>
#include <cstdio>
#include <iterator>
#include <utility>
#include <memory>
#include <algorithm>
#define ll long long
using namespace std;
bool compare(const pair<ll int,ll int>&i,const pair<ll int,ll int>&j)
{
    return i.second<j.second;
}
class op
{
    int n; ll int t1; ll int t2;ll int rp;
    vector<pair<ll int,ll int>> a;
    pair<ll int,ll int> b;
    pair<ll int,ll int>c;
    vector<int> kn;
    vector<ll int>points; int index=0; int count=0;
public:
    void create()
    {
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> t1 >> t2;
            a.push_back(make_pair(t1,t2)); 
            kn.push_back(-1);
            points.push_back(-1);
        }
        calc();
        prin();
    }
    void calc()
    {
        sort(a.begin(),a.end(),compare);
        for(unsigned int i=0;i<a.size();i++)
        {
            if(kn[i]==-1)
            {       
                    count=count+1;
                    b=a.at(i);
                    rp=b.second;
                    points[index]=b.second;
                    for(unsigned int j=i+1;j<a.size();j++)
                    {
                        c=a.at(j);
                        if(c.first<=rp)
                        {
                            kn[j]=1;
                            /*
                            if(c.second<b.second)
                            {
                                rp=c.second;
                                //points[index]=c.second;   
                            }
                             */
                        }
                    }
                    index=index+1;
            }
             
        }
        /*
        for(int i=0;i<a.size();i++)
        {
            b=a.at(i);
            cout << b.first << "  " << b.second << endl;
        }
         */
    }
    void prin()
    {
        cout << count << endl;
        for(unsigned int i=0;i<points.size();i++)
        {
            if(points.at(i)!=-1)
            {
                cout << points.at(i) << " " ;
            }
            else
            {
                break;
            }
        }
    }
    
};
int main()
{
    op o;
    o.create();
    return 0;
}