#include <iostream>
using namespace std;

int main() {
    int t,n,count;
    cin>>t>>n;
    while(t>0){
      int s[n];
      for(int i=0;i<n;i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
             count=0; 
             continue;
          }
          else{
              count++;
              if(count==4){
                  break;
              }
          }
          
      }
      if(count<4){
          cout<<"yes"<<endl;
          
      }
      else{
          cout<<"no"<<endll;
      }
      t--;
    }
	
	return 0;
}
