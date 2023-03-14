#include<iostream>
using namespace std;

int findPeakElement(int A[],int n){
    cout<<"The peak element is: ";
    if(n==1){
        return A[0];
    }
    if(n==2){
        if (A[0] >= A[1]){
        return 0;
        }
        if (A[n - 1] >= A[n - 2]){
            return A[n - 1];
        }
    }
    for(int i=1;i<n-1;i++){
        if(A[i]>=A[i-1] && A[i]>=A[i+1]){
            return A[i];
        }
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
    cout<<findPeakElement(A,n);
    return 0;
}