#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        for(i=0;i<n;i++){
          if(i==0||i==n-1){
            cout<<"1";
        }
        else{
            cout<<"0";
        }  
        
        }
        cout<<endl;
    }

	return 0;
}
