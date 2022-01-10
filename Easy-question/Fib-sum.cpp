class Solution{
public:
    long long int fibSum(long long int N){
        //code here
    
        long long int sum = 0;
        long long int next;
        long long int first = 0;
        long long int second = 1;
        for(long long int i=0; i<=N; i++)
        {
            if(i == 0 or i == 1)
            {
                sum += i;
            }
            else{
                next = (first + second) % 1000000007;
                first = second;
                second = next;
                sum = (sum+next) % 1000000007;
            }
        }
        return sum;
    }
};
 


problem link - https://practice.geeksforgeeks.org/problems/fibonacci-sum1423/1