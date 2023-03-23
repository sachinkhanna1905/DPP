// Check if a String are isomorphic or not.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    map<char,int> map1, map2;
    for (int i=0;i<s.length();i++){
        map1[s[i]]=i+1;
    }
    for (int i=0;i<s.length();i++){
        map2[t[i]]=i+1;
    }
    for (int i=0;i<s.length();i++){
        if (map1[s[i]]!=map2[t[i]]){
            cout<<"It is not Isomorphic"<<endl;
        }
    }
    cout<<"yes, this is Isomorphic String"<<endl;
    return 0;
}