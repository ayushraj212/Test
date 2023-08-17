#include <iostream>
using namespace std;

int dupNum(int a[], int n)
{
    int i, j;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                break;
        }
    }
    return a[j];
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << dupNum(arr, size) << endl;
}