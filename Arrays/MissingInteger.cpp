#include<iostream>
using namespace std;

void solution(int A[],int n){
    int a = ((n+1)*(n+2))/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += A[i];
    }
    cout<<"The mssing number is: "<<a-sum;
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
    solution(A,n);
    return 0;
}