#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> vi;
	    int p;
	    for(int i=0;i<5;i++)
	    {
	        int a;
	        cin>>a;
	        vi.push_back(a);
	    }
	    cin>>p;
	    for(int i=0;i<5;i++)
	    {
	        vi[i]=vi[i]*p ;
	    }
	    int sum =accumulate(vi.begin(),vi.end(),0);
	    if(sum<=120) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	    
	}
	return 0;
}
