#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (v[i] <= pivot) // searching for greater element
        {
            i++;
        }

        while (v[j] > pivot) //searching for smaller element
        {
            j--;
        }

        if (i < j)  // if after searching both greater and smaller i<j then swap elements at i and j
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    } while (i < j); // we stop when j becomes less than i

    // Swap v[low] and v[j]   then we swap pivot(v[low]) and lement at j
    temp = v[low];
    v[low] = v[j];
    v[j] = temp;
    return j;  // returning the index(indication correct position of pivot element in sorted array)
}

void quickSort(vector<int> &v, int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)  
    {
        partitionIndex = partition(v, low, high); 
        quickSort(v, low, partitionIndex - 1);  // sort left subarray 
        quickSort(v, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    
    vector<int>v = {9, 4, 4, 8, 7, 5, 6};
    printArray(v);
    int n=v.size();
    quickSort(v, 0,n - 1);
    printArray(v);
    return 0;
}
