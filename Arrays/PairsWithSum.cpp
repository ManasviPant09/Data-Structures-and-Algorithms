#include<iostream>
using namespace std;

void solution(int A[],int n,int sum){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==sum){
                count += 1;
            }
        }
    }
    cout<<"The total number of pairs that have the deried sum is: "<<count;
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
    int sum;
    cout<<"Enter the desired sum: ";
    cin>>sum;
    solution(A,n,sum);
    return 0;
}