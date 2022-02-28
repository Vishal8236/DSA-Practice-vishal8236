class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int amt5 = 0, amt10 = 0, amt20 = 0;
        for(int bi : bills)
        {
            if(bi == 5)
            {
                amt5 += 1;
            }
            else if(bi == 10)
            {
                if(amt5 != 0){ 
                    amt5--;
                    amt10++;
                }
                else{
                    return false;                    
                } 
            }
            else if(bi == 20)
            {
                if(amt5 != 0 and amt10 != 0){
                    amt5--;
                    amt10--;
                    amt20++;
                }
                else if(amt5 >= 3){
                    amt5 -= 3;
                    amt20++;
                }
                else{
                    return false;                    
                } 
            }
        }
        return true;
    }
};



problem link - https://leetcode.com/problems/lemonade-change/