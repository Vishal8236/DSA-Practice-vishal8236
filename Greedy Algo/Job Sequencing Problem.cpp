/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool comp (Job a, Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort (arr, arr+n,comp);
       vector<bool> vis(n,false); 
      
      int maxprofit=0; int jobcnt=0;
      for (int i=0; i< n; i++){
      
     for (int j= arr[i].dead-1; j>=0; j--){
                 
                  if (vis[j])
                     continue;
                    
                   else{
                       
                 vis[j]= true;
                 maxprofit+= arr[i].profit;
                 jobcnt++;
                 break;
               }
            }
        }
         
     return {jobcnt,maxprofit};
          
    } 
};



problem link - https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#