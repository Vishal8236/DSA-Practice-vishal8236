class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
      int s = 0, e = a.size()-1;
        vector<int> ans(2, -1);
        //first occurrence
        while(s <= e){
            int m = s + (e-s)/2;
            if(a[m] < target)
                s = m+1;
            else if(a[m] > target)
                e = m-1;
            else{
                if(m == s || a[m] != a[m-1]){
                    ans[0] = m;
                    break;
                }
                else{
                    e = m-1;
                    ans[0] = m-1;
                }
            }
        }

        //last occurrence
        s = 0, e = a.size()-1;
        while(s <= e){
            int m = s + (e-s)/2;
            if(a[m] < target)
                s = m+1;
            else if(a[m] > target)
                e = m-1;
            else{
                if(m == e || a[m] != a[m+1]){
                    ans[1] = m;
                    break;
                }
                else{
                    s = m+1;
                    ans[1] = m+1;
                }
            }
        }
        return ans; 
    }
};


problem link - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]