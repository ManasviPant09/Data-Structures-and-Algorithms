#include<iostream>
#include<algorithm>
using namespace std;

void Intersection(int A[],int B[],int n,int m){
    sort(A,A+n);
    sort(B,B+m);
    int i=0,j=0,k=0,max=m+n;
    int C[max];
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            C[k] = A[i];
            k++;
            i++;
            j++;            
        }
    }
    cout<<"The intersection is: ";
    for(int i=0;i<k;i++){
        cout<<C[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the first array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the first array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int m;
    cout<<"Enter the number of elements in the second array: ";
    cin>>m;
    int B[m];
    cout<<"Enter the elements of the second array: "<<endl;
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    Intersection(A,B,n,m);
    return 0;
}