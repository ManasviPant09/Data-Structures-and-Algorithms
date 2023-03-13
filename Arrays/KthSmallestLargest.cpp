#include<iostream>
using namespace std;

void ksmallestelement(int A[],int n,int k){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout<<"The desired element is: "<<A[k-1];
}

void klargestelement(int A[],int n,int k){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]<A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout<<"The desired element is: "<<A[k-1];
}

int main(){
    int n;
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elemnts of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    ksmallestelement(A,n,k);
    klargestelement(A,n,k);
}