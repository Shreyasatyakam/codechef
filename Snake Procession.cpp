#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,st;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                st+=s[i];
            }
        }
        bool ans=true;
        if(st.length()%2!=0){
            ans=false;
        }
        for(int i=0;i<st.length();i++){
            if(i%2==0){
                if(st[i]=='T'){
                    ans=false;
                }
            }
            else {
                if(st[i]=='H'){
                    ans=false;
                }
            }
        }
        if(ans)
        cout<<"Valid"<<endl;
        else{
            cout<<"Invalid"<<endl;
        }
    }

	return 0;
}
