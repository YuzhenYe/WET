# Variables
We have seen variables such as i in the following:
```
for(int i = 0; i < 10; i ++)  //here i is a variable, and it is an integer
   cout<<i<<endl;
```
# Definition
Variable scope refers to the accessibility of a variable in a given program or function. For example, a variable may only be available within a specific function, or it may be available to the entire program. Specifically, the scope of a declaration is the part of the program for which the declaration is in effect; the lifetime of a variable or object is the time period in which the variable/object has valid memory. 

# Local variable
The majority of variables are local variables. These are created within a function or a block of code. Local variables can't be accessed by other functions/blocks. 
```
int main()
{
	for(int i = 0; i < 10; i ++) 
		cout<<i<<endl; //i only lives in this block
	cout<<i<<endl; //compiler will complain that i is undeclared 
}
```

In the following example, avar in func1() and avar in func2() are two different variables, even though they have the same name. It is just like there are many Hunters in the world: there is one in Bloomington, and you can imagine there are many other Hunters in other places, and they are different Hunters. 
```
void func1(void)
{
	int avar = 10;
	cout<<avar<<endl;
}
void func2(void)
{
	int avar = 10;
	cout<<avar<<endl;
}
```

# Global variable
Global variables are defined before main() function, and they are available through the entire program.
```
int tot, nums[10];
int get_ave(void)
{
	int sum;
	for(int i = 0; i < tot; i ++) {
		sum += nums[i];
	}	
	return num / tot;
}
int main()
{
	cin >> tot;
	for(int i = 0; i < tot; i ++) cin >> nums[i];
	cout<<"average "<<get_ave()<<endl;
}
```

Check out the following:
```
int tot, nums[10];
int get_ave(void)
{
	int sum;
	for(int i = 0; i < tot; i ++) {
		sum += nums[i];
	}	
	return num / tot;
}
int main()
{
	int tot, nums[100];
	cin >> tot;
	for(int i = 0; i < tot; i ++) cin >> nums[i];
	cout<<"average "<<get_ave()<<endl;
}
```

#When to use global variables
Try to avoid global variables as they may get very confusing. Sometimes they are convenient to use; so they don't need to pass around among functions.
