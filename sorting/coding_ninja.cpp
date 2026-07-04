#include<iostream>
#include<vector>
using namespace std;


/*Selection Sort*/
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

/*Bubble sort*/
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

/*Insertion sort*/
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

/*Merge sort*/
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}


void mS(vector<int> &arr, int low, int high)
{
    int mid = (low + high) / 2;
    // base case
    if (low >= high)
        return;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
    // Write your code here.
    mS(arr, 0, n - 1);
}

int main()
{

    return 0;
}