class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    vector<long long> getLeftSmall(long long arr[], int n)
    {
        vector<long long> tmp;
        stack<pair<long long, int>> st;
        
        for(int i=0; i<n; i++)
        {
            if(st.size() == 0)
            {
                tmp.push_back(-1);
            }
            else if(st.size() > 0 and st.top().first < arr[i])
            {
                tmp.push_back(st.top().second);
            }
            else if(st.size() > 0 and st.top().first >= arr[i])
            {
                while(st.size() > 0 and st.top().first >= arr[i])
                {
                    st.pop();
                }
                if(st.size() == 0)
                {
                    tmp.push_back(-1);
                }
                else{
                    tmp.push_back(st.top().second);
                }
            }
            st.push(make_pair(arr[i], i));
        }
        return tmp;
    }
    
    vector<long long> getRightSmall(long long arr[], int n)
    {
        vector<long long> tmp;
        stack<pair<long long, int>> st;
        
        for(int i=n-1; i>=0; i--)
        {
            if(st.size() == 0)
            {
                tmp.push_back(n);
            }
            else if(st.size() > 0 and st.top().first < arr[i])
            {
                tmp.push_back(st.top().second);
            }
            else if(st.size() > 0 and st.top().first >= arr[i])
            {
                while(st.size() > 0 and st.top().first >= arr[i])
                {
                    st.pop();
                }
                if(st.size() == 0)
                {
                    tmp.push_back(n);
                }
                else{
                    tmp.push_back(st.top().second);
                }
            }
            st.push(make_pair(arr[i], i));
        }
        reverse(tmp.begin(), tmp.end());
        return tmp;
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> leftsmall;
        vector<long long> rightsmall;
        
        leftsmall = getLeftSmall(arr, n);
        rightsmall = getRightSmall(arr, n);
        
        vector<long long> wid;
        for(int i=0; i<n; i++)
        {
            wid.push_back(rightsmall[i] - leftsmall[i] - 1);
        }
        
        // vector<int> res;
        long long max = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if((wid[i] * arr[i]) >= max)
            {
                max = wid[i] * arr[i];
            }
        }
        return max;
    }
};







problem link - https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#