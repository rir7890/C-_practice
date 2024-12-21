#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && key < arr[j])
        {
            // swap(arr[j], arr[j + 1]);
            // here we are not swapping but moving the low index value to upper index value
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // this line will be removed if we use swap in while loop
    }
}

void BubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    // arr=[34,100,45,23,16,2]
    vector<int> arr{34, 100, 45, 23, 16, 2};
    // insertionSort(arr);
    // BubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}