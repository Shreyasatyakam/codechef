#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int k,count=0;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int r=0;
   for(int i=0;i<n;i++){
       r=r+arr[i]-k;
       count++;
       if(r<0){
       cout<<"NO "<<count<<endl;
       break;
   }
   }
       if(r>=0){
       cout<<"YES"<<endl;

   }
    } 

	return 0;
}
