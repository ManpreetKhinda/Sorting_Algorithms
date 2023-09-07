#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int i,j,value;
    for(int i=1;i<n;i++){
        value=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>value){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }

}
int main(){
    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    insertion_sort(arr,n);
    for(int h=0;h<n;h++){
        cout<<arr[h]<<" ";

    }
    return 0;


}