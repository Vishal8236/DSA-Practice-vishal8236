class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int len = strs[0].length();
        int delete_c = 0;
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<strs.size()-1; j++)
            {
                if(strs[j].at(i) > strs[j+1].at(i))
                {
                    delete_c++;
                    break;
                }
            }
        }
        return delete_c;
    }
    
};




problem link - https://leetcode.com/problems/delete-columns-to-make-sorted/




Example 1:

Input: strs = ["cba","daf","ghi"]
Output: 1
Explanation: The grid looks as follows:
  cba
  daf
  ghi
Columns 0 and 2 are sorted, but column 1 is not, so you only need to delete 1 column.



Example 2:

Input: strs = ["a","b"]
Output: 0
Explanation: The grid looks as follows:
  a
  b
Column 0 is the only column and is sorted, so you will not delete any columns.




Example 3:

Input: strs = ["zyx","wvu","tsr"]
Output: 3
Explanation: The grid looks as follows:
  zyx
  wvu
  tsr
All 3 columns are not sorted, so you will delete all 3.