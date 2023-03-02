#include<iostream>
using namespace std;

void MinMaxElement(int A[],int n){
    int max = A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    int min = A[0];
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min = A[i];
        }
    }
    cout<<"The minimum element is: "<<min<<endl;
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
    MinMaxElement(A,n);
    return 0;
}