// Check if a String is a Palindromic or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    bool flag=true;
   for(int i=0;2*i<n;i++){
       if(str[i]!=str[n-i-1]){
           flag=false;
           break;
       }
   }
    if(flag==true){
        cout<<"String is Palindromic"<<endl;
    }else{
        cout<<"String is Not Palindromic"<<endl;
    }
    return 0;
}