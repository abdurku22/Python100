#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
                
            }
            else 
            {
                if(i%4==1)
                {
                    if(j==m-1)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else if(i%4==3)
                {   
                    if(j==0)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
            
        }
        cout<<endl;
    }

}