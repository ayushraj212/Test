#include<iostream>
using namespace std;

int sumArr(int num[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    return sum;

}

 int main()
 {
    int size;
    cout << "Enter the Size of array " << endl;
    cin >> size;
    int arr[100];
    cout << "enter the array" << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Sum of array : " << sumArr(arr, size);
 }