/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(struct Item a , struct Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        
        return r1 > r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        int current_w = 0;
        double res = 0;
            
        sort(arr, arr+n, cmp);
        
        for(int i=0; i<n; i++)
        {
            if(current_w + arr[i].weight  <= W)
            {
                res += arr[i].value;
                current_w += arr[i].weight;
            }
            else{
                int remain = W - current_w;
                res += arr[i].value * (remain / (double)arr[i].weight);
                break;
            }
        }
        return res;
    }
        
};


problem link - https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1/#
