#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <cstdio>
#include <string>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef stack<c> stll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class ty
{
    s ster;c temp,temp1; ll count = 0; stll att;ll index; 
public:
    void inp()
    {
        cin >> ster;
        forl(i,0,ster.size())
        {
            temp = ster.at(i);
            if((temp=='(') || (temp=='[') || (temp=='{'))
            {
                if(att.empty()==true)
                {
                     index = count+1 ;  att.push(temp);count = count + 1;
                }
                else
                {
                    count = count + 1; att.push(temp);
                }
            }
            else if ((temp==')') || (temp==']') || (temp=='}'))
            {
                if(att.empty()==true){ cout << count+1 << endl;return; }
                 if(temp==')')
                 {
                     temp1 = att.top();att.pop();
                     if(temp1=='(')
                     {
                         count = count + 1;
                     }  
                     else{ cout << count + 1 << endl; return;}
                 }
                 if(temp==']')
                 {
                     temp1 = att.top();att.pop();
                     if(temp1=='[')
                     {
                         count = count + 1;
                     }  
                     else{ cout << count + 1 << endl; return;}
                 }
                 if(temp=='}')
                 {
                     temp1 = att.top();att.pop();
                     if(temp1=='{')
                     {
                         count = count + 1;
                     }  
                     else{ cout << count + 1 << endl; return;}
                 }
           }
           else
           {
               count = count + 1;
           }
        
          
        }
        if(att.empty()==true)
        {
            cout << "Success" << endl;
        }
        else
        {
            cout << index << endl;
        }
    }
};
int main()
{
    ty k;
    k.inp();return 0;
}