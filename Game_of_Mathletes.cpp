#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector <int> a;
        int x;
        for(int i=0;i<n;i++)
        {
            
            cin>>x;
            a.push_back(x);
        }
        for(int i=*a.begin();i<a.size();i++)
        {
            int b=*a.begin();
            for(int j=i+1;j<a.size();j++)
            {
                if(b+a[j]==k)
                {
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+j);
                    c++;
                }
            }
        }
        cout<<"c is ="<<c<<endl;
    }
}