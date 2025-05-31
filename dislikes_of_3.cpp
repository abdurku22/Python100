#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i=1,c=1;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            int x=i%10;
            if((i%3==0)||(x==3))
            {
                if(i>2)
                {
                    k++;
                }
                
            }
            
        }
        cout<<k<<endl;
        

    }
}