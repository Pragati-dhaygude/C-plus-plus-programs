#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int p, int r)
{
    int idx = p-1;
    int pivot = arr[r];
    for(int j=p; j<r; j++)
    {
        if(arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[r], arr[idx]);
    return idx;
}
void quickSort(vector<int> &arr, int p, int r)
{
    if(p<r)
    {
        int pivIdx = partition(arr, p, r);
        quickSort(arr, p, pivIdx-1); //left half
        quickSort(arr, pivIdx+1, r); //right half

    }
}

int main()
{
    vector<int> arr= {34, 21, 45, 12, 54, 11};
    quickSort(arr, 0, arr.size()-1);

    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;

}