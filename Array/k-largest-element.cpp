class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int, vector<int>, greater<int>> minh;
	    
	    for(int i=0; i<n; i++)
	    {
	        minh.push(arr[i]);
	        
	        if(minh.size() > k)
	        {
	            minh.pop();
	        }
	    }
	    
	    int s = minh.size();
	    vector<int> res(s);
	    
	    
	    while(!minh.empty())
	    {
	        int top = minh.top();
	        res[--k] = top;
	        minh.pop();
	    }
	    
	    
	    return res;
	}

};



problem link - https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1