#include<iostream>
using namespace std;

int max(int arr[],int count){
    int maxidx=0;
    for (int i = 0; i < count; i++)
    {
        if(arr[i]>arr[maxidx]){
            maxidx=i;
        }
    }
    return maxidx;
}
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void selectionsort(int arr[],int count){
    int last;
    int index;
    for(int i=1;i<count;i++){
        last=count-i-1;
        index=max(arr,last);
        swap(arr,index,last);
    }
}
int display(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
}
int main()
{
    int arr[]={4,3,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    display(arr,n);
    return 0;
}
