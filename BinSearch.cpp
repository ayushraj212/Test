#include<iostream>
using namespace std;


int binSearch(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key)
           return mid;
        else if(a[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}

int main()
{
    int arr[100];
    int size,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the key "<<endl;
    cin>>key;
    cout<<binSearch(arr,size,key)<<endl;

}