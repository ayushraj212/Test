#include<iostream>
using namespace std;

int getMax(int num[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       maxi=max(maxi,num[i]);
    }
    // for(int i=0;i<n;i++){
    //     if(num[i]>max)
    //       max=num[i];
    // }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    // for(int i=0; i<n;i++){
    //     if(num[i] < min)
    //       min=num[i];
    // }
    return mini;
}

int main()
{
    int arr[100];
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    cout << "enter the values of array" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
cout << "max value is " << getMax(arr,size) << endl;
cout << "min value is " << getMin(arr,size)<< endl;

}