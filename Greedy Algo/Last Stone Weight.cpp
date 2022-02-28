class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       while(stones.size() > 1)
       {
           sort(stones.begin(), stones.end());
           
           int s = stones.size()-1;
           int s1 = stones[s];
           int s2 = stones[s-1];
           
           if(s1 == s2)
           {
               stones.pop_back();
               stones.pop_back();
           }
           else if(s1 != s2)
           {
               stones.pop_back();
               stones.pop_back();
               stones.push_back(s1-s2);
           }
       }
        int res = stones.empty() ? 0 : stones[0]; 
       return res;
    }
};



problem link - https://leetcode.com/problems/last-stone-weight/