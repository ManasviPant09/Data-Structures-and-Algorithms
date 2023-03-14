#include<iostream>
using namespace std;

void rotate(int A[],int n){
    int temp = A[n-1];
    for(int i=n-1;i>0;i--){
        A[i] = A[i-1];
    }
    A[0] = temp;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements you need in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    rotate(A,n);
    return 0;
}