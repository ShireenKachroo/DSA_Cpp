void insertSorted(stack<int> &stack, int num)
{
	//base case
	if(stack.empty() || (!stack.empty() && stack.top() < num)){
		stack.push(num);
		return;
	}

	//processing
	int n = stack.top();
	stack.pop();

	//recursive call
	insertSorted(stack,num);

	//put topmost ele back while returning
	stack.push(n);
	
return;
}

void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty())  return;

	//processing
	int num = stack.top();
	stack.pop();

	//recursive call for remaining part
	sortStack(stack);

	//while returning, insert num in sorted way
	insertSorted(stack,num);

return;
}
