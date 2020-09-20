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
        int k,sum,flag;
        cin>>k;
        if(k>7) flag=k;
        else flag =k-1;
        for(int i=1;i<9;i++)
        {
            if(i==1) cout<<"O";
            if(flag>7)
            {
                if(i==1) sum=8;
                else sum=9;
                for(int j=1;j<sum;j++)
                {
                    cout<<".";
                }
                flag-=8;
            }
            else 
            {
                if(i==1) sum=8;
                else sum=9;
                for(int j=1;j<sum;j++)
                {
                    if(k==1) cout<<"X";
                    else if(j<=flag) cout<<".";
                    else cout<<"X";
                }
                flag=0;
            }
            cout<<endl;
        }
    }
    
}