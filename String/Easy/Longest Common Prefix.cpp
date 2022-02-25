class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int maxi = INT_MAX;
        for(auto str : strs)
        {
            if(str.length() < maxi)
            {
                maxi = str.length();
            }
        }
        int i=0;
        for(i=0; i<maxi; i++)
        {
            char tmp = strs[0].at(i);
            for(auto st : strs)
            {
                if(st.at(i) != tmp and i==0)
                {
                    return "";
                }
                else if(st.at(i) != tmp)
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, i);
    }
};