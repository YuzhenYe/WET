# Arrays

## Definition 
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by using index. [[Ref](http://www.cplusplus.com/doc/tutorial/arrays/)]

## Declaration of an array
For example,
int nums[6] = {1, 3, 2, 50, 10, 100};
defines an array of 6 integers, and the integers are 1, 3, 2, 50, 10, and 100.

More precisely, the number within [] specifies the number of items in the array, {} is used to initialize the array.

## How to work with individual elements in an array
The individual elements can be accessed using the same identifier, with the proper index. Note the index starts at 0 in C++. 
So the indices for an array of 5 elements are 0, 1, 2, 3, and 4. 

Using the same array as an example, int nums[6] = {1, 3, 2, 50, 10, 100},
nums[0] (0 is the index) is the first element (i.e., 1), nums[1] (1 is the index) is the second element (i.e. 3), and so on.

For example: the following statement
```
cout << nums[0] << endl;
```
prints the first element from the array.

## Work with the array using a for loop to iterate over the indices
```
int nums[6] = {1, 3, 2, 50, 10, 100};
for(int i = 0; i < 6; i ++) 
	cout << nums[i] << endl;
```
The for loop above iterates through the indices, starting at 0, and ending at 5. 

## Arrays of character
```
char s1[] = "Hello";
char s2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
string s3 = "Hello";
for(int i = 0; i < s3.length(); i ++) {
	cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
}
```	
## Arrays as parameters
In C++, it is not possible to pass the entire block of memory represented by an array to a function directly as an argument. But what can be passed instead is its address. 

To accept an array as parameter for a function, the parameters can be declared as the array type, but with *empty brackets*, omitting the actual size of the array. For example:
```
int getSum(int nums[], int length) 
{
	//statements
}
int main()
{
	int a[5] = {23, 30, 10, 100, 36};
	int result = getSum(a, 5);
}

```

## Multidimensional arrays
Multidimensional arrays can be described as "arrays of arrays". A 2D-array is just like a table, with rows and columns. 
For example,
```
int table1[2][5]; 
int add = 0;
for(int r = 0; r < 2; r ++) {
	for(int c = 0; c < 5; c ++) {
		add ++;
		table1[r][c] = add;
	}
}
```
In the above code block, the first statement declares a table with two rows, and five columns, and the nested loops are used for assigning values to the table. Similarly to 1D arrays, individual elements can be accessed using proper index for 2D arrays. The difference is that For 2D arrays, two indices are needed for specifying an element, one for the first dimension (the row) and one for the second dimension (the column) (e.g., table1[0][0] is the very first number on the top left corner; what's the very last number on the bottom right corner?)
