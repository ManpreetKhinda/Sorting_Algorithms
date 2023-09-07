#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for (int i=0;i<n1;i++){
        L[i]=arr[p+i];
    }
    for (int i=0;i<n2;i++){
        M[i]=arr[q+1+i];
    }
    int i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=M[j];
        j++;
        k++;

    }

}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);

    }

}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    mergesort(arr,0,n-1);
    for(int h=0;h<n;h++){
        cout<<arr[h]<<" ";

    }
    return 0;


}