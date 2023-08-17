#include<iostream>
using namespace std;

void reverse(char arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}

int getLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char arr[20];
    cout<<"Enter your name"<<endl;
    cin>>arr;
    cout<<"your name is ";
    cout<<arr<<endl;
    cout<<"length is "<<getLength(arr)<<endl;
    int len=getLength(arr);
    reverse(arr,len);
    cout<<"Reverse of string: ";
    cout<<arr<<endl;
}