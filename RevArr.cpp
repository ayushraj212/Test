#include <iostream>
using namespace std;

void printArr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}

void Reverse(int num[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i + 1 <= j)
    {
        swap(num[i], num[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[6] = {2, 34, 5, 0, 6, 7};
    int brr[5] = {5, 7, 12, 4, 8};

    Reverse(arr, 6);
    Reverse(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);
}