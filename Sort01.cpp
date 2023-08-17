#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void Sort(int num[],int n){
    int i=0;
    int j=n-1;
    int step=0;
    while(i<j){
        cout << "step" << step++ << endl;
        printArray(num,n);
        while(num[i]==0 && i<j){
            i++;
        }
        while(num[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(num[i],num[j]);
            i++;j--;
        }
    }
}

int main(){
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    int arr[size];
    cout << "enter the array" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }



    Sort(arr,size);
    cout << "sorted array:" << endl;
    printArray(arr,size);
}