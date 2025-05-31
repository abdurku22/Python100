#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int c=0;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>h)
        {
            c++;
        }
    }
    c+=n;
    cout<<c;

}