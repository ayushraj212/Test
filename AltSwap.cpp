#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};

    swapAlt(even,8);
    printArr(even,8);

    cout << endl;
    
    swapAlt(odd,5);
    printArr(odd,5);
}