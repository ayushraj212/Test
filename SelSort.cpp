#include<iostream>
using namespace std;


void selSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=a[i],minIndex=i;
      for(int j=i+1;j<n;j++){
        if(a[j]<min){
            min=a[j];
            minIndex=j;
        }
      }
    swap(a[i],a[minIndex]);
    }
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    selSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl; ;
    }

}