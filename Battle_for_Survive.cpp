#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        vector<long long>a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        
        for(int i=0;i<n-2;i++)
        {
            a[n-2]-=a[i];
        }
        a[n-1]=a[n-1]-a[n-2];        
        cout<<a[n-1]<<endl;
    }
}