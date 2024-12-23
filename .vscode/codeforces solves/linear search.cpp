#include <bits/stdc++.h>
using namespace std;



int Linersearch( vector<int> &a, int findElement, int size)   // Fix parameter type
{
    for(int i = 0; i < size ; i++){
        if(a[i] == findElement){
            return i;
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


    int findElement;
    cout << "Enter the element to search: ";
    cin >> findElement;

    int result = Linersearch(vktor, findElement, size); // Use the correct function name

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

