#include<iostream>
using namespace std;

void SubArraySum(int A[],int n,int sum){
    int currentSum;
    for(int i=0;i<n;i++){
        currentSum = A[i];
        if(currentSum==sum){
            cout<<"The required sum was found at index "<<i<<endl;
            return;
        }
        else{
            for(int j=i+1;j<n;j++){
                currentSum += A[j];
                if(currentSum==sum){
                    cout<<"The required sum was found between the indices "<<i<<" and "<<j<<endl;
                    return;
                }
            }
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
    int sum;
    cout<<"Enter the desired sum: ";
    cin>>sum;
    SubArraySum(A,n,sum);
    return 0;
}