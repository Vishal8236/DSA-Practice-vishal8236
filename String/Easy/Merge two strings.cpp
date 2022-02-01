string merge (string S1, string S2)
{
    // your code here
    string res = "";
    int p = 0;
    // int q = 0;
    for(p=0; p<S1.length() and p<S2.length(); p++)
    {
        res += S1[p];
        res += S2[p];
    }
    
    for(int i=p; i<S1.length(); i++)
    {
        res += S1[i];
    }
    
    for(int i=p; i<S2.length(); i++)
    {
        res += S2[i];
    }
    return res;
}


problem link - https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1/


Example 1:

Input:
S1 = "Hello" S2 = "Bye"
Output: HBeylelo
Explanation: The characters of both the 
given strings are arranged alternatlively.
â€‹Example 2:

Input: 
S1 = "abc", S2 = "def"
Output: adbecf
Explanation: The characters of both the
given strings are arranged alternatlively.