#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[10]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        if(arr1[i]>0)
        {
            cout<<"Frequency of "<<i<<"= "<<arr1[i]<<endl;
        }
    }
    
    
}