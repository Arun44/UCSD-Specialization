#include <iostream>
#include <utility>
#include <iterator>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <cmath>
#define l  float
using namespace std;
int n,m;
class neg
{
    bool x,y;
    vector<l> process;
    deque<l> relax;
    vector<l> distance; 
    list<pair<l ,l >>* a; int v; 
    int tem1;int tem2;int w;int sou;
    int o=1;
    int nodeno; 
    public:
    neg(int v)
    {
        this -> v = v;
        a = new list<pair<l ,l >>[v+1];
    }
    void create()
    {
        for(int i=0;i<=n;i++)
        {
            distance.push_back(1000000000000000000);
            process.push_back(-1);
        }
        for(int i=0;i<m;i++)
        {
            cin >>  tem1 >> tem2 >> w;
            a[tem1].push_back(make_pair(w,tem2));
        }
        cin >> sou;
        distance[sou]=0;
    }
    void exp()
    {
        for(int i=1;i<=n-1;i++)
        {      
               y=true;
               x=true;
               o=sou;
                while(o<=n)
                { 
                    if ((y==true)&&(o!=sou))
                    {
                        break;
                    }
                    
                         if ((o==sou)&&(x==true))
                         {
                             for(auto it=a[o].begin();it!=a[o].end();it++)
                            {
                                if(distance[it->second]>distance[o]+ it->first)
                                {
                                    distance[it->second] = distance[o] + it->first;
                                }
                                y=false;
                            }
                         }
                         else if (o!=sou)
                         {
                             for(auto it=a[o].begin();it!=a[o].end();it++)
                            {
                                if(distance[it->second]>distance[o]+ it->first)
                                {
                                    distance[it->second] = distance[o] + it->first;
                                }
                            }
                     
                 } 
                        if ((o==sou)&&(x==true))
                        {
                            x=false;
                            o=1;
                        }
                        else
                        {
                            o=o+1;
                        }
                }
            
        }
        
        cout << endl;
         for(unsigned int i=1;i<distance.size();i++)
        {
            cout << distance.at(i) << endl;
        }
         
        if(y==true)
        {
            print();
        }
        else
        {
            check();
        }
    }
    
    void check()
    {
        o=1;
        while(o<=n)
        {
                for(auto it=a[o].begin();it!=a[o].end();it++)
                {
                    if(distance[it->second]>distance[o]+ it->first)
                    {
                       if ((distance[it->second]!=1000000000000000000)||(distance[o]!=1000000000000000000))
                       {
                       //distance[it->second] = distance[o] + it->first; 
                       relax.push_back(it->second); 
                       }  
                    }
                }
                
            o=o+1; 
        }
        cout << endl;
        /*
        for(unsigned int i=0;i<relax.size();i++)
        {
            cout << relax.at(i) << " " ;
        }*/
         
        bt();
        print();
    }
    void bt()
    {
        while(relax.empty()==false)
        {
            nodeno=relax.front();
            relax.pop_front();
            process[nodeno]=1;
               for(auto it=a[nodeno].begin();it!=a[nodeno].end();it++)
                {
                    if(process[it->second]==-1)
                    {
                        relax.push_back(it->second);  
                    } 
                    distance.at(it->second)=-44;
                }
        }
        
    }
    void print()
    {
        for(unsigned int i=1;i<distance.size();i++)
        {
            //cout << distance.at(i) << endl;
            if(distance.at(i)==-44)
            {
                cout << "-" << endl;
            }
            else if(distance.at(i)==1000000000000000000)
            {
                cout << "*" << endl;
            }
            else
            {
                cout << distance.at(i) << endl;
            }
        }
    }
    
};
int main()
{
    cin >> n>> m;
    neg tel(n);
    tel.create();
    tel.exp();
    return 0;
}