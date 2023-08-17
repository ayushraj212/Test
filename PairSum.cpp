#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,-3,3,3,-2};
    int p1,p2;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==0){
                 p1=min(arr[i],arr[j]);
                 p2=max(arr[i],arr[j]);
                 cout << p1 ;
                 cout << ",";
                 cout << p2 << endl; 
            }
        }
        
    }
    
}