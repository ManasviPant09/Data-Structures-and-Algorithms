#include<iostream>
using namespace std;

void MoveNegative(int A[],int n){
    int temp;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            for(int j=1;j<n;j++){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements you want in your array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    MoveNegative(A,n);
    return 0;
}