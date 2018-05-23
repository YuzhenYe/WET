# Resouces for WET gang

# Main resources
  1) [C++ online tutorial](http://www.cplusplus.com/doc/tutorial/); [Game Programming in C++](http://www.jblearning.com/catalog/9781598220322/)
  2) [USA Computing Olympiad website](http://www.usaco.org); [Rosalind](http://rosalind.info/problems/locations/)

# Weekly topics/assignments
## Week 1 (04/25/2018). 
- Get to know some basic liux commands (pwd, cd, ls, mkdir, rm); [see details](https://github.com/YuzhenYe/WET/blob/master/basics/linux.txt)
- Get to know vim; [see details](https://github.com/YuzhenYe/WET/blob/master/basics/vim.md)
- Get to know git (git clone; git add; git commit; git push); [see details](https://github.com/YuzhenYe/WET/blob/master/basics/git.txt)
- Hello World (main function) [see a description](http://www.cplusplus.com/doc/tutorial/program_structure/); [see the code](https://github.com/YuzhenYe/WET/blob/master/firstCodes/HelloWorld.cpp)
- Compiler (g++; source codes vs executables) [see details](http://www.cplusplus.com/doc/tutorial/introduction/)
```
      Usage: g++ -o executable-file-name source-code
      Example: g++ -o HelloWorld HelloWorld.cpp
      How to run the program? simply call the name 
      ./HelloWorld (here ./ tells HelloWorld is in current folder)
```
- Exercises: complete different versions of the HelloWorld, push them to your github repository
- [Surprise] for loops
```
      for(int i = 0; i < 10; i ++) 
          cout<<"Hello World"<<endl;
```
:panda_face: Take-home exercises:
For all coding exercises, you need to use vim to write the code, and then compile and test your program before you push it to github
- ProudProgrammer.cpp:  this program prints "I am a C++ programmer".
- ProudProgrammerX10.cpp: this program prints 10 lines of "I am a C++ programmer".
- [Challenge] Numbers.cpp: write a program that display integers from 1 to 100, one number per line.

## Week 2 (05/02/2018).
- review vim, g++, basic structure of a C++ program, and git
- quiz: SkipNumber.cpp (the program prints 1, 3, 5, ... 1111)
- use variables; [see the description](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt);
      what's a variable; naming a variable; 
```
	int a = 10; //this statement declares an integer a, and initializes it to 10
```
- basic data types: int and string
- branching structures (if-else) (see [EvenOdd.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/EvenOdd.cpp) -- the program checks if a number is odd or even).
```
      //Syntax:
      if(expression) {
	//statements -- these statements will be executed only if expression is true
      }
      else {
	//statements -- these statements will be executed only if expression is false
      }
```
- coding practice: VarFun.cpp, in this program, you need to declare two integers and do something with them, and display the result (e.g., num1^2 + num2)

:panda_face: Take-home exercises. Write up the code, compile and test!

- CrazyFun.cpp, in this program, you need to declare two integers, give them proper names, and make up your own crazy function using the two variables, and display the result. You can refer to [this VarFun.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/VarFun.cpp) (or the one you wrote), which involves a very simple function (c = a + b).
- CourseGrade.cpp, the program asks user to type in a score (0-100) and displays "pass" if the score is greater than or equal to 60, otherwise display "fail". Use a if-else branching structure. You can refer [HelloYou.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/HelloYou.cpp) about getting user's inputs. Briefly, this is how you do: 

``` 
	int score; //declare a variable
	cout << "Please type a score: " << endl; //alert the user to type in a score 
	cin >> score; //use cin to assign user's input to the variable
```
- [Challenge] AddFunc.cpp, your program asks the user to type in an integer, and adds numbers from 1, 2, 3, and so on all the way up to the number the user gives. For example, if the user types in 5, your program needs to report 15 (since 1 + 2 + 3 + 4 + 5 = 15). For this problem, you need to use for loop, although you can come up with other smarter ways to compute the answer without using the loop!

## Week 3 (05/09/2018)
- Review: vim, compiler, git, basic structure, [for loop](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), if-else branching structure, variable, cin
- Quiz: 
```
problem 1:
int a = 10;
a += 20;
cout << a << endl;

problem 2:
int sum = 0;
for(int i = 1; i < 10; i ++) 
	sum += i; 
cout << sum << endl;

problem 3.
CompareNum.cpp: this program asks users to input two numbers, 
and displays the larger one (using if-else structure).
```
- Put emojis in your README file [emoji cheat sheet](https://gist.github.com/roachhd/1f029bd4b50b8a524f3c); [a list](https://gist.github.com/rxaviers/7360908)
- Coding practice: BitsBytes.cpp, write a program to find out how many distinct values a 16-bit unsigned integer would be able to represent (hint: use a loop to compute 2^n)! 
- Introduce arrays: [description](https://github.com/YuzhenYe/WET/blob/master/basics/array.md)
- Coding practice: NumArraySum.cpp, write a program, in which you declare an array of 10 integers, and write a loop to compute the sum.

:panda_face: Take-home exercises. Write up the code, compile and test!
- PosNeg.cpp, write a program that accepts a number from the user, and displays "positive" if the user types in a positive number; otherwise, display "nonpositive".
- CountDown.cpp, the program asks the user to input a number, and counts down to 0. For example, if the user gives 10, the program prints 10, 9, 8, 7, ..., 0. 
- [Challenge] NumArrayMax.cpp, write a program, in which you declare an array of 10 integers, and write a loop to find out the largest value.

## Week 4 (May 16, 2018)
- Review: variables & [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md) & [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md)
- Quiz: 
```
Q1:
int a[15] = {4, 3, 5, 1, 2, 3, 67, 18, 19, 19, 21, 21, 34, 35};
what's the largest index for a? and what's a[4]?
Q2: 
MinMax.cpp, write a program, in which you declare an array of 10 integers, 
and write a loop to find and display the smallest and largest values.
```
- More on [vim](https://github.com/YuzhenYe/WET/blob/master/basics/vim.md)  (delete a line, paste a line, delete more than one character, replace, move to a line, go to front/end) 
- More on branching structure: if-else if-else
- More on types (char & float/double) [CharDemo](https://github.com/YuzhenYe/WET/blob/master/firstCodes/CharDemo.cpp) [DnaDemo](https://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaDemo.cpp)
- Introduce functions [FunctionDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp)
- Coding practice: DnaChecker, a program that checks if a string is a valid DNA sequence or not

:panda_face: Take-home exercises. Write up the code, compile and test!
- MinFunc.cpp, in this program, you need to define a function called getMin(), which takes in two integers as its parameters, and returns the smaller value of the two. You need to call the function a few times in the main() function to see if getMin() works correctly or not. [You may refer [FunctionDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp)]
- FreqBase.cpp, you now know that genomes are character sequences (arrays) in the alphabet {A, T, C, G}, and 
  you wrote your first program (DnaChecker.cpp) which can check if a string is a valid DNA sequence or not! For this assignment, you write a program that counts how many As, Ts, Cs and Gs, and shows which letter is the most 
 frequent one. BTW, each letter in a DNA sequence is a base, that's why we call this program FreqBase. In a few weeks, you will be able to write your program to load an entire genome from a text file, but for this assignment, you will declare a DNA sequence in your code, like what you have done in DnaChecker.
- [Challenge] HammingDist.cpp. In CS, the Hamming distance between two strings of equal length is the number of positions at which the corresponding symbols are different. In other words, Hamming distance can be used to quantify the similarity of two strings. For example, given two sequences, "ABCDE", "ABCED", their Hamming distance is 2. In your HammingDist.cpp, you declare two strings, compute and display the Hamming distance between these strings. 

## Week 5 (May 22, 2018( 
- Review: variables, types (int, string, char), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), and [function](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) (why we define functions?)
- Quiz:
```
Q1:
int guessMe(int n) 
{
	int a = 0;
	for(int i = 1; i <= n; i ++) {
		a += i;
	}
	return a;
}
int main()
{
	int b = guessMe(5);
	int c = guessMe(10);
}
Using a sentence to describe what guessMe() does; b = ?; c = ?; and now type up the code.
Q2: 
The Hamming distance between "APPLE" and "ORANG" = ?
The Hamming distance between "FISH" and "FISH" = ?
```
- Introduce different ways to get user's inputs (data): argv, cin, and reading from a file [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)!
- Introduce continue, break, boolean, compound conditions (and, or, not); see [DnaChecker.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker.cpp) and [DnaChecker2.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker2.cpp)
- Introduce nested loops [CharParamid.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/CharParamid.cpp) & [two dimensional arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md)
- Coding practice: design and implement your own ASCII art master piece.


# Goals: 
  1) Learning the basics of C++ (NO class & objects)
  2) Learning some basic data structures & algorithms 
  3) Starting to use http://www.usaco.org 
  4) If kids get bored, we may try to use some arduino projects; great for introducing the concepts of inputs (not just text files, can be inputs from the sensors), hardware/software interaction, and loops.


