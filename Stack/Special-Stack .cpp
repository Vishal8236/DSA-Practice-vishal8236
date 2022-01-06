
void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size() == 0;
}

int pop(stack<int>& s){
	// Your code goes here
	if(!isEmpty(s))
	{
	    s.pop();
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	int minv = s.top();
	while(!isEmpty(s))
	{
	    minv = min(minv, s.top());
	    s.pop();
	}
	return minv;
}





Input:
Stack: 18 19 29 15 16
Output: 15
Explanation: The minimum element of the stack is 15.

prblem link - https://practice.geeksforgeeks.org/problems/special-stack/1