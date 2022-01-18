class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        for(auto i : arr)
        {
            if(i > max)
            {
                max = i;
            }
        }
        return max;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1