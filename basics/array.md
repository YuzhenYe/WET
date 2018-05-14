# Arrays

## Definition 
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by using index.

## Declaration of an array
For example,
int nums[6] = {1, 3, 2, 50, 10, 100};
defines an array of 6 integers, and the integers are 1, 3, 2, 50, 10, and 100.

More precisely, the number within [] specifies the number of items in the array, {} is used to initialize the array.

## How to work with individual elements in an array
The individual elements can be refered using index. Note the index starts at 0 in C++. So the indices for an 
array of 5 elements are 0, 1, 2, 3, and 4. 

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
