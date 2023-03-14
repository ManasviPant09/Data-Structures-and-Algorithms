#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findDuplicates(int A[],int n){
    map<int,int> M;
    for(int i=0;i<n;i++){
        if(M.find(A[i])==M.end()){
            M[A[i]] = 1;
        }
        else{
            M[A[i]]++;
        }
    }
    cout<<"The duplicates are: ";
    for(auto &it:M){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    findDuplicates(A,n);
    return 0;
}