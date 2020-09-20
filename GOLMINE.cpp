#include <iostream>
#include <bits/stdc++.h>
#define v vector<int>
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        double c=0.0,cu=0.0;
        ll g,a,b;
        for(int i=0;i<n;i++)
        {
            cin>>g>>a>>b;
            cu+=((g*a*1.0)/(a+b));
            c+=((g*b*1.0)/(a+b));
        }
        cout<<fixed<<setprecision(5)<<c<<" ";
        cout<<fixed<<setprecision(5)<<cu<<endl;
    }
    
}