#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void occurrence(int A[],int n,int k){
    map<int,int> M;
    for(int i=0;i<n;i++){
        if(M.find(A[i])==M.end()){
            M[A[i]] = 1;
        }
        else{
            M[A[i]]++;
        }
    }
    int count = 0;
    for(auto &it:M){
        if(k==it.first){
            cout<<"The frequency for the given element is: "<<it.second<<endl;
            break;
        }
        count += 1;
    }
    if(count == M.size()){
        cout<<"The given element does not exist in the array!"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cout<<"Enter the element whose frequency you need to find: ";
    cin>>k;
    occurrence(A,n,k);
}