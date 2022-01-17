class Solution{
public:

    void solve(vector<string>&str,string ip,string op)
   {
       if(ip.length()==0)
       {
           str.push_back(op);
           return ;
       }
       string op1=op;
       string op2=op;
       op1.push_back(' ');
       op1.push_back(ip[0]);
       
       op2.push_back(ip[0]);
       
       ip.erase(ip.begin()+0);
       solve(str,ip,op1);
       solve(str,ip,op2);
   }
    
    vector<string> permutation(string S){
        // Code Here
        vector<string> res;
        
        string ip = S;
        string op = "";
        
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        
        solve(res, ip, op);
        return res;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1

Input:
S = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)
Explanation:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".