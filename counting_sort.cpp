#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
void counting_sort(int arr[],int size){
    int max=0;

    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1]={0};

    int output[size];

    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    for(int i=size-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<size;i++){
        arr[i]=output[i];

    }
}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    counting_sort(arr,n);
    for(int h=0;h<n;h++){
        cout<<arr[h]<<" ";

    }
    return 0;


}