#include<iostream>
using namespace std;

void SortArray(int A[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;                
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    SortArray(A,n);
    return 0;
}