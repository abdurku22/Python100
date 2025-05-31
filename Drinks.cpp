#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=n;
    vector<int>v;
    int a;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    double s=0;
    for(auto i:v)
    {
        s+=(i/100.0);
    }
    double p=(s/b)*100;
    cout<<p;

}