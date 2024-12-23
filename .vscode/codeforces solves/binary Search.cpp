#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}



int Binarysearch( vector<int> &a, int findElement)   // Fix parameter type
{
    int low = 0;
    int high = a.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Fix the calculation of 'mid'

        if (a[mid] == findElement)
        {
            return mid;
        }
        else if (a[mid] > findElement)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;// This should be outside the while loop
}

int main()
{
    int size;

    cout << "Enter the size : ";
    cin >> size;

    vector<int> vktor;

    cout << "Enter " << size << " Element:" << endl;
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin >> elements;
        vktor.push_back(elements);
    }

    bubbleSort(vktor);

    cout << "Sorted : ";
    for (int i = 0; i < size; i++)
    {
        cout << vktor[i] << " ";
    }
    cout << endl;

    int findElement;
    cout << "Enter the element to search: ";
    cin >> findElement;

    int result = Binarysearch(vktor, findElement); // Use the correct function name

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
