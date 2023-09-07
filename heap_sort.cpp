#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
void heapify(int arr[],int n, int i){
    int root=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[root]){
        root =l;
    }
    if(r<n && arr[r]>arr[root]){
        root =r;
    }
    if(root!=i){
        swap(arr[i],arr[root]);
    }
    heapify(arr, n,root);
}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for (int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    heapsort(arr,n);
    for(int h=0;h<n;h++){
        cout<<arr[h]<<" ";

    }
    return 0;


}
