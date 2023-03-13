#include<iostream>
using namespace std;

void ReverseArray(int A[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start += 1;
        end -= 1;
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
    ReverseArray(A,n);
    return 0;
}