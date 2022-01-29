char* reverse(char *S, int len)
{
    //code here
    stack<char> st;

    for(int i=0; i<len; i++)
    {
        st.push(S[i]);
    }
    
    int k=0;
    while(!st.empty())
    {
        S[k] = st.top();
        k++;
        st.pop();
    }
    return S;
}


problem link - https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1


Example 1:

Input: S="GeeksforGeeks"
Output: skeeGrofskeeG