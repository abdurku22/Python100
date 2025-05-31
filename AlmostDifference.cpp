#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    long long s=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int d=abs(arr[i]-arr[j]);
            if(d>1)
            {
                s+=arr[j]-arr[i];
            }
            else if(d<=1)
            {
                s+=0;
            }
        }
    }
    cout<<s<<endl;
    
}