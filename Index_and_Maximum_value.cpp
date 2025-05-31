#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[m]={0};
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            arr.push_back(x);
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)max=arr[i];
        }
        for(int i=0;i<m;i++)
        {
            char c;
            int l,r;
            cin>>c>>l>>r;
            if(r>=max)
            {
                if(c=='+')
                {
                    arr1[i]=max++;
                }
                else if(c=='-')
                {
                    arr1[i]=max--;
                }
                else
                {
                    arr1[i]=max;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            cout<< arr1[i]<<" ";
        }
        
        
    }
}