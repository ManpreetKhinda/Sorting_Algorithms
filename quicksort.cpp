#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}


int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);

        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    quicksort(arr,0,n-1);
    for(int h=0;h<n;h++){
        cout<<arr[h]<<" ";

    }
    return 0;


}