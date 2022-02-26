#include "iostream"
#include "algorithm"
using namespace std;

static bool cmp(int a, int b)
{
    return a<b;
}

int main()
{
    int arr[] = {23,45,56,21,4,63,25};
    int n = 7; 
    sort(arr, arr+n, cmp);


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}