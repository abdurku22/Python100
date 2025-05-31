#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector<int> a;
    if(a.begin()==a.end())
    {
        cout<<"equal"<<endl;
    }
    a.push_back(3);
    cout<<a.size()<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}