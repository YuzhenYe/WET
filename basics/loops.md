# Loops

## The for loop
```
for (initialization; condition; increase) {
	//a single statement
	//or a block of statements enclosed in curly braces
}
```
The for loop repeats statement while condition is true. But, in addition, the for loop provides specific locations to contain an initialization and an increase expression, executed before the loop begins the first time, and after each iteration, respectively. Therefore, it is especially useful to use **counter variables** as condition.

It works in the following way:

- Step 1: initialization is executed. Generally, this declares a counter variable, and sets it to some initial value. This is executed a single time, at the beginning of the loop.
- Step 2: condition is checked. If it is true, the loop continues; otherwise, the loop ends, and statement is skipped; go to step 5.
- Step 3: statement is executed. As usual, it can be either a single statement or a block enclosed in curly braces { }.
- Step 4: increase is executed, and the loop gets back to step 2.
- Step 5: the loop ends: execution continues by the next statement after it.

Example:
```
for(int i = 0; i < 100; i ++) {
	cout << i << endl;
}
```
