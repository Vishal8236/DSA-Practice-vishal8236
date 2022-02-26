class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        
        for(int i=0; i<n; i++)
        {
            minh.push({end[i], start[i]});
        }
        
        
        int e = minh.top().first;

        int count = 1;
        
        while(true)
        {
            minh.pop();
            if(minh.empty()) break;
            if(minh.top().second > e)
            {
                e = minh.top().first;
                count++;
            }
        }
        return count;
    }
};




problem link - https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/#


