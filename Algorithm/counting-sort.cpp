class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        vector<int> tmp(256, 0); //make int array with 256 size and initial value should be 0
        string res = "";
        for(char st : arr)
        {
            tmp[st]++;
        }
        
        for(int i=0; i<tmp.size(); i++)
        {
            for(int j=0; j<tmp[i]; j++)
            {
                char ch = i; //convert int to char ex- 97-a, 98-b
                res += ch;
            }
        }
        return res;
    }
};


Input:
N = 5
S = "edsab"
Output: abdes
Explanation: In lexicographical order, string will be abdes.

problem link - https://practice.geeksforgeeks.org/problems/counting-sort/1