class Solution{
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int> s;
        vector<int> res;
        
        for(int i=n-1; i>=0; i--)
        {
            if(s.size() == 0)
            {
                res.push_back(-1);
            }
            else if(s.size() > 0 and s.top() < arr[i])
            {
                res.push_back(s.top());
            }
            else if(s.size() > 0 and s.top() >= arr[i])
            {
                while(s.size() > 0 and s.top() >= arr[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    res.push_back(-1);
                } 
                else{
                    res.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    } 
};



problem link - https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1/#


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)



Example 1:

Input: N = 5, arr[] = {3, 8, 5, 2, 25}
Output: 2 5 2 -1 -1
Explanation: 
1. Roll number 1 has 3 marks. The first person 
who has less marks than him is roll number 4, 
who has 2 marks.
2. Roll number 2 has 8 marks, he helps student 
with 5 marks.
3. Roll number 3 has 5 marks, he helps student 
with 2 marks.
4. Roll number 4 and 5 can not pick anyone as 
no student with higher roll number has lesser 
marks than them. This is denoted by -1.
Output shows the marks of the weaker student that 
each roll number helps in order. ie- 2,5,2,-1,-1