#include <iostream>
#include <bits/stdc++.h>
#define v vector<int>
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int morty(ll b)
{
    if(b==0) return 0;
    else
    {
        return b%10 + morty(b/10);
    }
}

int chef(ll a)
{
    if(a==0) return 0;
    else
    {
        return a%10 + chef(a/10);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,cheff,mortyy,count=0,star=0;
        cin>>n;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            cheff = chef(a);
            mortyy= morty(b);
            //cout<<cheff<<" "<<mortyy<<endl;
            if(cheff==mortyy)
            {
                count++; 
                star++;
            }
            else if(cheff>mortyy) count++;
            else star++;
        }
        
        if(count>star)
        {
            cout<<"0"<<" "<<count<<endl;
        }
        else if(count<star)
        {
            cout<<"1"<<" "<<star<<endl;
        }
        else cout<<"2"<<" "<<count<<endl;
        
    }
    
}