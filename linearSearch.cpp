#include<iostream>
using namespace std;

bool leanSearch(int num[],int n, int key){
    for(int i=0;i<n;i++){
        if(key==num[i])
           return 1;
    }
    return 0;
}

int main(){
    int arr[10]={22,10,3,5-4,2,5,8,90,67};
    int key;
    cout << "enter the key" << endl;
    cin >> key;
    bool found = leanSearch(arr,10,key);
    if(found){
        cout <<"Key is present " << endl;
    }
    else{
        cout<< "key is absent" << endl;
    }

}