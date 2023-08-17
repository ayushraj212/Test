#include<iostream>
using namespace std;

int uniElem(int arr[],int n){
   int ans=0;
   for(int i=0;i<n; i++){
       ans=ans^arr[i];
   }
   return ans;
}

int main(){
    int a[7]={1,2,2,1,4,5,4};
    int b[6]={1,2,2,1,4,4};

    cout << uniElem(a,7);
    cout << endl;
    cout << uniElem(b,6);
}