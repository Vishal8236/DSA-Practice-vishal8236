class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       //It is a variation of nearest greater in left 
       vector<int> tmp;
       stack<pair<int,int>> st;
       
       for(int i=0; i<n; i++)
       {
           if(st.size() == 0)
           {
                tmp.push_back(-1);   
           }
           else if(st.size() > 0 and st.top().first > price[i])
           {
               tmp.push_back(st.top().second);
           }
           else if(st.size() > 0 and st.top().first <= price[i])
           {
                while(st.size() > 0 and st.top().first <= price[i])  
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
           st.push(make_pair(price[i], i));
       }
       
       
       for(int i=0; i<n; i++)
       {
           tmp[i] = i-tmp[i];
       }
        return tmp;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1/Example 1:

Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
Explanation:
Traversing the given input span for 100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.