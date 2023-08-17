#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];
    cout <<"enter array values" << endl;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int ma=0;
    for(int i=0;i<n;i++){
        ma=max(ma,arr[i]);
    }
    
    int freq[ma+1];
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<ma+1;i++){
        if(freq[i]!=0)
            cout << i <<"->" << freq[i] << endl;
    }
}