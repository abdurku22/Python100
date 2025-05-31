#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=0;j<3;j++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum>1)
        {
            c++;
        }
    }
    cout<<c;
}