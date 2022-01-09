vector<int> minAnd2ndMin(int a[], int n) {
    int fs = INT_MAX;
    int ss = INT_MAX;
    vector<int> res;

    for(int i=0;i<n;i++){
        if(a[i]<fs){
            ss=fs;
            fs=a[i];
        }else if(a[i]<ss && a[i]!=fs){
            ss=a[i];
        }
    }
    
    if(ss == INT_MAX)
    {
        return {-1,-1};
    }
    
    res.push_back(fs);
    res.push_back(ss);
    return res;
}



Time complexity - O(N)
Space complexity - O(1)


problem link - https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1