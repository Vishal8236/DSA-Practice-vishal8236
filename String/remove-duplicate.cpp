class Solution{
public:	
		
	string removeDups(string S) 
	{
	    string res = "";
	    
	    for(int i=0; i<S.length(); i++)
	    {
            if(res.find(S[i]) == -1)
            {
                res += S[i];
            }
            else{
                continue;
            }
	    }
	    return res;
	}
};



Approach 2 -

class Solution{
public: 
string removeDups(string S) 
{
   int hash[123]={0};
   string str="";
   for (int i=0;i<S.length();i++)
   {
       if (hash[S[i]]==0)
       {
           hash[S[i]]=1;
           str=str+S[i];
       }
   }
   return str;
}




problem link - https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1
