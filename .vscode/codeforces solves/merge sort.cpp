#include <iostream>
#include <vector>
#include <climits> // for INT_MAX

using namespace std;

// Merge function
void merge(int low, int mid, int hi, int arrA[])
{
    int sizeL = mid - low + 1; //size of left array
    int sizeR = hi - mid; //size of right array

    vector<int> arr_left(sizeL);
    vector<int> arr_right(sizeR);

    for(int i = 0; i < sizeL; i++)
    {
        arr_left[i] = arrA[low + i];
    }
    for(int j = 0; j < sizeR; j++)
    {
        arr_right[j] = arrA[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while(i < sizeL && j < sizeR)
    {
        if(arr_left[i] <= arr_right[j])
        {
            arrA[k++] = arr_left[i++];
        }
        else
        {
            arrA[k++] = arr_right[j++];
        }
    }

    while(i < sizeL)
    {
        arrA[k++] = arr_left[i++];
    }

    while(j < sizeR)
    {
        arrA[k++] = arr_right[j++];
    }
}

// Merge sort function
void mergeSort(int low, int hi, int arrA[])
{
    if(low < hi)
    {
        int mid = low + (hi - low) / 2;
        mergeSort(low, mid, arrA);
        mergeSort(mid + 1, hi, arrA);
        merge(low, mid, hi, arrA);
    }
}

int main()
{
    cout << "***You have to input an array***" << endl;
    int sizeA;
    cout << "Enter the array size :";
    cin >> sizeA;

    if(sizeA <= 0)
    {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> arrA(sizeA);

    cout << "Enter " << sizeA << " elements of the array :";
    for(int i = 0; i < sizeA; i++)
    {
        cin >> arrA[i];
    }

    int low = 0, hi = sizeA - 1;

    mergeSort(low, hi, arrA.data());

    // Print the merge sorted array
    cout << "Sorted Array: ";
    for(int i = 0; i < sizeA; i++)
    {
        cout << arrA[i] << " ";
    }
    cout << endl;

    return 0;
}
