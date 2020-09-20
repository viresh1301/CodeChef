#include <iostream>
#include <bits/stdc++.h>
#define v vector<int>
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,sum=0;
        cin>>n;
        v v1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.pb(a);
        }
        for(ll i=0;i<n-1;i++)
        {
            sum+=max(v1[i],v1[i+1]) - min(v1[i],v1[i+1]) -1;
        }
        cout<<sum<<endl;
    }
    
}