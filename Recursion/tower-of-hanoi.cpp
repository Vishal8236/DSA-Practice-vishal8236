
class Solution{
    public:
    // You need to complete this function
    long long c = 0;
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        solve(N, from, to, aux);
        return c;
    }
    void solve(int N, int from, int to, int aux)
    {
        if(N == 1)
        {
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            ++c;
            return;
        }
        
        solve(N-1, from, aux, to);
        
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        c++;
        solve(N-1, aux, to, from);   
    
        // return 
    }

};

problem link - https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

