#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> m;
    m[0]=2;
    vector <int >vec;
    vec.push_back(3);
    
    m[10]=3;
    m[-5]=9;
    cout<<m[0]<<endl;
    cout<<m[10]<<endl;
    cout<<m[-5]<<endl;
    cout<<m[100]<<endl;
}