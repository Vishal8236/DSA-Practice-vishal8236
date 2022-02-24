#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
    int arr[] = {1,2,3,7,5,6,8,4};
    int n = 8;
    int k=4;
    int window_sum = 0;
    int maxi;
    
    for(int i=0; i<k; i++)
    {
        window_sum += arr[i];
    }
    maxi = window_sum;
    for(int i=k; i<n; i++)
    {
        window_sum -= arr[i-k];
        window_sum += arr[i];
        
        maxi = max(maxi, window_sum);
    }
    cout<<maxi;
	return 0;
}



output is 26