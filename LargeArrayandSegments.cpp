#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        long long x;
        cin>>n>>k>>x;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        long long coef=x/sum;
        long long rem =x%sum;
        // cout<<coef<<endl;
        // cout<<rem<<endl;
        long long s=0;
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            s+=a[i];
            c++;
            if(s>=rem)
            {
                
                break;
            }
        }
        //cout<<c<<endl;
        if(coef>k)
        {
            //cout<<"case 1"<<endl;
            cout<<0<<endl;
        }
        else if(coef==k)
        {
            if(rem==0)
            {
                //cout<<"case 2"<<endl;
                cout<<1<<endl;
            }
            else
            {
                //cout<<"case 3"<<endl;
                cout<<0<<endl;
            }
        }
        else if(coef<k)
        {
            //cout<<"case 4"<<endl;
            long long j=n-c+(k-coef-1)*n+1;
            cout<<j<<endl;
        }        
    }
}