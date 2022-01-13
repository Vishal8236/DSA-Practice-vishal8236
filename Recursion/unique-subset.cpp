
void solve(vector<int> arr,vector<int> op,int i,set<vector<int> > &s){
       if(i==arr.size()){
           s.insert(op);
           return;
       }
       solve(arr,op,i+1,s);
       op.push_back(arr[i]);
       solve(arr,op,i+1,s);
   }
   vector<vector<int> > AllSubsets(vector<int> arr, int n)
   {
       vector<vector<int> > ans;
       sort(arr.begin(),arr.end());
       set<vector<int> > s;
       vector<int> op;
       solve(arr,op,0,s);
       for(auto i:s) ans.push_back(i);
       return ans;
   }

problem link - https://practice.geeksforgeeks.org/problems/subsets-1587115621/1#