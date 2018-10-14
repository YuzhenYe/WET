# Dynamic Arrays (Using Pointers)

## Background 
To solve the AIZU maximum profit problem, you probably have the following lines (or similar) to create an array to store the values of
a share over time. 
```
int tot;
cin>>tot;
int values[200000];
for(int i = 0; i < tot; i ++) cin >> values[i];
```
Your code creates an array of which can hold up to 200000 items, however, in an actual run, the array with 200000 slots may actually just
has 10 items (because tot is 10). 

## Declaration of an array dynamically
```
int tot;
cin>>tot;
int *values = new int[tot];
for(int i = 0; i < tot; i ++) cin >> values[i];
```
In the above code, an array which can store tot integers is dynamically allocated, the variable called values is a pointer, which points
to the array just allocated.  

A little more details. In this case, the computer dynamically allocates space for tot (which may be 5, 10, depending on the input when the program runs) elements of type int and returns a pointer to the first element of the sequence, which is assigned to values (a pointer). Therefore, values (a pointer) now points to a valid block of memory with space for tot elements of type int.

See another example
```
double *pt = new double[10];
```
In this case, a pointer (called pt) is created and pointing to a valid block of memory with space for 10 elements of type double.

## Luckily, dynamically allocated arrays can be used in the same way as statically predetermined arrays through indexing
```
for(int i = 0; i < tot; i ++) 
	cout << values[i] << endl;
```
The for loop above iterates through the indices, starting at 0, and ending at 5. 

## Dynamically arrays can be arrays of integers, strings, etc.
```
int *ipnt = new int[100];
string *spnt = new string[100];
```
