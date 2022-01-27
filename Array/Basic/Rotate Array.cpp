#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code4
	int t;
	cin>>t;
	
// 	int arr[2];
// 	while()
    while(t--)
    {
    	int n;
    	cin>>n;
    	
    	int r;
    	cin>>r;
    	
    	vector<int> arr(n);
    	for(int i=0; i<n; i++)
    	{
    	    cin>>arr[i];
    	}
    	
    	while(r--)
    	{
    	    int top = arr[0];
    	    
    	    arr.erase(arr.begin() + 0);
    	    arr.push_back(top);
    	}
    	
    	for(int a : arr)
    	{
    	    cout<<a<<" ";
    	}
    	
    	cout<<endl;
    }
	return 0;
}



problem link - https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays


Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6