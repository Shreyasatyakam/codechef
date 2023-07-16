#include <iostream>
using namespace std;

int main() {
	int n,t,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n>x){
	        int y;
	        y=(n-x);
	        if(x%2==0 and y%2!=0){
	            cout<<"no"<<endl;
	        }
	        else{
	            cout<<"yes"<<endl;
	        }
	    }
	}
	return 0;
}
