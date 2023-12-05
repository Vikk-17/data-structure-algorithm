#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int> &arr)
{
    // Write your code here.
    int N = arr.size();
    for (int i = 0; i <= N - 2; i++)
    {
        int min = i;
        for (int j = i; j <= N - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(vector<int> &arr, int n)
{
    // write your code here
    for (int i = 0; i <= n - 1; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        // for the optimization that reduce tc to O(n) in best case
        if (didSwap == 0)
            break;
    }
}

void insertionSort(int arr[], int n)
{
    // write your code here
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

    int main()
    {

        return 0;
    }