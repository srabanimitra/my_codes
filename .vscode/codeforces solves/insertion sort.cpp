#include <bits/stdc++.h>
using namespace std;

using namespace std;

void insertionSort(vector<int>& array, int arrSize)
{
    int key;

    //************ INSERTION SORT CODE *********************

    for(int i = 1; i < arrSize; i++) // corrected loop boundary
    {
        key = array[i];
        int j = i - 1;

        while( (j >= 0) && (array[j] > key) )
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }

    // Print Sorted Array

    cout << endl << endl << "Sorted Array : " << endl;
    for(int i = 0; i < arrSize; i++)
    {
        cout << array[i];
        if(i != arrSize - 1)
            cout << ", ";
    }
}

int main()
{
    int arrSize;
    cout << "Enter the size of Array : ";
    cin >> arrSize;

    if(arrSize <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> array(arrSize);
    cout << "Enter "<< arrSize << " elements of the Array : ";
    for(int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }

    insertionSort(array, arrSize);

    return 0;
}


