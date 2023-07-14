#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int k,n,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
       
    }
     for(i=0;i<n;i++){
          if(arr[i]<=k){
        cout<<"1";
        k=k-arr[i];
    } 
    else{
        cout<<"0";
    }
     }
   
    cout<<endl;
    }
    
    return 0;
}
