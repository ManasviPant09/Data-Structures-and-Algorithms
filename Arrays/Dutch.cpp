#include<iostream>
using namespace std;

void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i];
    }
}

void solution(int A[],int n){
    int count0 = 0, count1 = 0, count2 = 0,j;
    for(int i=0;i<n;i++){
        switch (A[i])
        {
        case 0:
         count0 ++;
         break;

        case 1:
         count1 ++;
         break;
        
        case 2:
         count2 ++;
         break;
        }
    }
    j = 0;
    while(count0>0){
        A[j++] = 0;
        count0--;
    }
    while(count1>0){
        A[j++] = 1;
        count1--;
    }
    while(count2>0){
        A[j++] = 2;
        count2--;
    }
    printArray(A,n);
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array consisting only 0s, 1s and 2s: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    solution(A,n);
    return 0;
}