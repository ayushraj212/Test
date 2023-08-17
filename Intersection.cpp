#include<iostream>
using namespace std;

// int findElem(int a[],int n,int b[],int m){
//     int ans;
//     for(int i=0;i<n;i++){
//          int elem=a[i];
//         for(int j=0;j<m;j++){
//             if(elem==b[j]){
//                 cout << elem << endl;
//                 b[j]=-1;
//                 break;
//             }
//         }
//     }
//     return ans;
    
// }
// time complexity ki gand mar gye
int main(){
    int arr1[5]={1,3,5,7,8};
    int arr2[4]={3,1,5};
    
    for(int i=0;i<5;i++){
         int elem=arr1[i];
        for(int j=0;j<4;j++){
            if(elem==arr2[j]){
                cout << elem << endl;
                arr2[j]=-1;
                break;
            }
        }
    }
    //cout << findElem(arr1,5,arr2,4) << endl;

}