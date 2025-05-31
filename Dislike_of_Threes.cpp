#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i=1,c=1;
        cin>>k;
        while(1)
        {
            if(c==k)
            {
                break;
            }
            int x=i%10;
            if((i/3==0)||(x==3))
            {
                if(i<3)
                {
                    i++;
                    c++;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
                c++;
            }
            cout<<"i= "<<i<<endl;
            cout<<"c= "<<c<<endl;
            if(c==k)
            {
                break;
            }
        }
        cout<<i<<endl;

    }
}