#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int c=0,b[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>b[i];
	       if(b[i]==1)c++;
	   }
	   if(c%2==0) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	   
	}
	
	return 0;
}
