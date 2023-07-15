#include <iostream>
using namespace std;

int main() {
	int t;;
	cin>>t;
	while(t--){
	    int mt,mn,sn;
	    cin>>mt>>mn>>sn;
	    int cnt=0;
	   int T=sn/mn;
	   int r=sn%mn;
	   if(T<mt){
	       cout<<T*mn*mn+r*r<<endl;
	   }
	   else{
	       cout<<mt*mn*mn<<endl;
	   }
	}
	return 0;
}
