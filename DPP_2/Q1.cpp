// Q1. Anti-Clockwise rotate of a matrix by 90 degree
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    //step1:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    // step2:
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    int k;
    // step3:
    for(int i=0;i<n;i++){
        k=n-1;
        for(int j=0;j<k;j++){
            swap(matrix[j][i],matrix[k][i]);
            k--;
        }
    }
    // step4:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}