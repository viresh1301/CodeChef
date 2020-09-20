#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll int n,a,sum=0,x=0,y=0;
	    cin>>n;
	    vector<int>v1;
	    vector<int>v2;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v1.push_back(a);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v2.push_back(a);
	    }
	    for(int i=0;i<n;i++)
	    {
	        x+=v1[i];
	        y+=v2[i];
	        if(v1[i]==v2[i] && x==y) sum+=v1[i];
	        else continue;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
