
class Solution{
    int minEle;
    stack<int> s;
    stack<int> es;
    public:
    
       /*returns min element from stack*/
       int getMin(){
            if(es.empty())
            {
               return -1;
            }
             return es.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty())
            {
                return -1;
            }
            if(es.top()==s.top())
            {
                  es.pop();
            }
            int t = s.top();
            s.pop();
            return t;
       }
       
       /*push element x into the stacrk*/
       void push(int x){
          if(s.empty() ) {
             s.push(x);
             es.push(x);
          }else{
              s.push(x);
              if(es.top()>=s.top())
              {
                es.push(x);
              }
          }
       }
};




Space complexity O(1) approach below

class Solution{
   int min;
   stack<int> s;
   public:
   
      /*returns min element from stack*/
      int getMin(){
         if(s.empty())
         return -1;
         return min;
          //Write your code here
      }
      
      /*returns poped element from stack*/
      int pop(){
          if(s.empty())
          return -1;
          else if(s.top()>min){
          int res= s.top();s.pop(); return res;}
          else
          {int res=min;
          min=2*min-s.top();
          s.pop();
          return res;
          }
          
          //Write your code here
      }
      
      /*push element x into the stack*/
      void push(int x){
          if(s.empty())
          {min=x;s.push(x);}
          else 
          if(x<=min)
          {s.push(2*x-min);
              min=x;
          }
          else
          s.push(x);
          
          //Write your code here
      }
};



problem link - https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1