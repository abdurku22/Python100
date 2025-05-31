#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,c=1;
    cin>>k>>r;
    int b=k;
    int x=10;
    while(x--)
    {
        int a=(k*c)%10;
        if(a==r||(a==0))
        {
            break;
        }
        else
        {
            c++;
            
        }
        
    }
    cout<<c<<endl;
    
    
}