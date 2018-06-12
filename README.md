# Resouces for WET gang
## Main resources
  1) [C++ online tutorial](http://www.cplusplus.com/doc/tutorial/); [Game Programming in C++](http://www.jblearning.com/catalog/9781598220322/)
  2) [USA Computing Olympiad website](http://www.usaco.org); [Rosalind](http://rosalind.info/problems/locations/)
## [Goals](https://github.com/YuzhenYe/WET/blob/master/assessments/goals.md)

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
- [Quiz](https://github.com/YuzhenYe/WET/blob/master/assessments/quiz.md): 
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
- [Quiz](https://github.com/YuzhenYe/WET/blob/master/assessments/quiz.md): 
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

## Week 5 (May 22, 2018) 
- Review: variables, types (int, string, char), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), and [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) (why we use functions?)
- [Quiz](https://github.com/YuzhenYe/WET/blob/master/assessments/quiz.md): 
- Introduce different ways to get user's inputs (data): argv, cin, and reading from a file [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)!
- Introduce continue, break, boolean, compound conditions (and, or, not); see [DnaChecker.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker.cpp) and [DnaChecker2.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker2.cpp)

:panda_face: Take-home exercises. Write up the code, compile and test!

- LuckyNumber.cpp, this program gets a number from the user through the command line, and tells if it is a lucky number or not. The program has its own array of numbers, and if the user happens to type in one of the numbers, it is a lucky number! For example, if your program has this array of numbers {30, 40, 20, 34, 100, 70, 90}, and the user gives 40, your program needs to display "40 is a lucky number!" (however, if the user gives 55, your program needs to display "sorry please try again"). For this assignment, you must use argc and argv to get the number from the user. In addition, try to use "continue" or "break" in the loop. 
- OddAdd.cpp,  the program receives two integers from the user (again, through the command line), computes and displays the sum of all odd integers from a through b, inclusively. For example, if the user calls the program as, ./OddAdd 100 200, the program shall display 7500. 
- [Challenge] Fibonacci.cpp. The Fibonacci numbers 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... are generated by the following rules: F(n) = F(n-1)+F(n-2) when n > 1, F(0) = 0, and F(1) = 1 (so F(2) = F(1) + F(0) = 1, and so on). Implement a program, which takes a number (<= 25) from the user, computes and displays the n-th Fibonacci number ([see more about Fibonacci number](http://rosalind.info/problems/fibo/)). For example, if the user runs the program as this, ./Fibonacci 6, the program shall display 8. [Hints: your program computes and stores Fibonacci numbers as an array, even though it only needs to display n-th element].

## Week 6 (Wed May 30, 2018)
- Review: variables, types (int, string, char, bool), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops/continue/break](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp), and argc/argv.
- Quiz
- Arrays as parameters ([description](https://github.com/YuzhenYe/WET/blob/master/basics/array.md) | [Demo](https://github.com/YuzhenYe/WET/blob/master/firstCodes/PrintArray.cpp))
- Read from/write to a file ([description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md) | [Write demo](https://github.com/YuzhenYe/WET/blob/master/firstCodes/WriteDemo.cpp) | [Read demo](https://github.com/YuzhenYe/WET/blob/master/firstCodes/ReadDemo.cpp))
- Coding practice: HammingDist2, which reads strings from a file, computes and displays the hamming distance between the strings. 

:panda_face: Take-home exercises. Write up the code, compile and test!
- ExpenseSum.cpp. Assume your parents ask you to track your family's expenses for each month. You write down all the expenses in a text file. For simplicity, you can assume that all expenses are in whole dollars (e.g., 2 for 2 dollars, and so on). Now you need to write a program that reads expenses from a file, computes and displays the total dollar amount. Make sure that your program gets the file name from command line (argv), since you want to be able to run your program on any given file containing the expenses. In addition, since you now know how to write a function and pass an array into the function as an argument, you need to write a function called getSum() in your code, which takes in an array of expenses, and returns the sum. Prepare two test files, one called April.txt, which lists all the expenses that occured in April, and another one called May.txt, listing all the expenses occured in May, of course. Test your program with these two inputs.
- GCcontent.cpp. This program reads a DNA sequence from a given file (through command line), computes and displays the GC-content,i.e., the total number of Gs and Cs divided by the length of the DNA sequence. Why we care about GC-content? We know GC pair is bound by three hydrogen bonds, whereas AT pair only involves two. Because of this reason (and base pair stacking), DNA with low GC-content is less stable than DNA with high GC-content. You may test your program using this file of DNA sequence [dna.txt](https://github.com/YuzhenYe/WET/blob/master/basics/dna.txt).

## Week 6 (Fri June 1, 2018)
- Introduce while loop (we have seen while loop in [ReadDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/ReadDemo.cpp))
- Introduce nested loops [CharParamid.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/CharParamid.cpp) & [two dimensional arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md)
- Coding practice: design and implement your own ASCII art master piece.

## Week 7 (Jun 3-9, 2018)
- During the summer time :sunglasses:, you will review things that you have learned, or learn something new on your own. And work out two problems for each week. 
- :bulb: Sorting problem & selection sort (algorithm & pseudo code)([see Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/sorting-algorithms/a/selection-sort-pseudocode))
- :muscle: Problem 1: Implement selection sort. Call your program SelectionSort.cpp. (Hint) Use nested loops: the outer loop tracks the leftmost position of the unsorted portion of the array (at the beginning of the iteration, the unsorted portion is the entire array; the unsorted portion shrinks by one in size after each iteration); the inner loop is to find the smallest number in the unsorted portion. For this problem, try to write your program such that it gets numbers from a text file (so your program reads strings from the file, convert them into numbers and store the numbers in an array). 
- :muscle: Problem 2: A string is a palindrome if it reads the same backward as forward. Madam is a palindrome, ATCGCTA is another example of palindromes. Why we care about palindromes? Palindromes can be words, can be found in musical notes, and they can be found in genomes (for some biological reasons). Joseph Haydn's Symphony No. 47 in G is nicknamed "the Palindrome". The third movement, minuet and trio is a musical palindrome; the second half of the piece is the same as the first but backwards. The longest palindromic word in the Oxford English Dictionary is the onomatopoeic tattarrattat, coined by James Joyce in Ulysses (1922) for a knock on the door. Write a program called Palindrome.cpp, which gets a query string through the command line, checkes and reports if the input string is a palindrome or not. For simplicity, assume there are no spaces in the input string. 

## Week 8 (Jun 11-18, 2018)
- Trust that you have implemented the selection sort algorithm & palindrome checker. Before you code up for the two new problems for this week, please take time to review some of the stuff that you have learned so far:  [variables](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt), types (int, string, char, bool), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), branching structures (if-else) (see [EvenOdd.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/EvenOdd.cpp)), [loops/continue/break](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp), and [getting inputs from cin, command line (argv), and text files](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md) (see [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)).
- :sunglasses: Problem 1. For this week, you are going to implement another sorting algorithm, insertion sort. Imagine that you are playing a card game. You're holding the cards in your hand, and these cards are sorted. The dealer hands you exactly one new card, and you have to put it into the correct place so that the cards you're holding are still sorted! This is the idea behind insertion sort. Loop over positions in the array, starting with index 0 (remember C/C++ starts with index 0 instead of 1). Each new position is like the new card handed to you by the dealer, and you need to insert it into the correct place in the sorted subarray to the left of that position. (see more explanations about insertion sort at [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort)). Again, write your program (called InsertionSort) such that it gets numbers from a text file (so your program reads strings from the file, convert them into numbers and store the numbers in an array).
- :sunglasses: Problem 2. Binary search. Assume you have an array of numbers sorted from the smallest to the largest (e.g., {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, which BTW, are all the primes smaller than 100). Given a query number (e.g., 67), how can you tell if this number is in the array for not? Obviously, you can search the array sequentially, starting at index 0, moving to the next index one at a time, until you find the slot which holds the same number as the query number, or you exhaust the array, reaching to the end of the array with no luck (in this case, the number is not in the array). This approach is called sequential search, which doesn't seem to be the most efficient way for finding a number in a sorted array of numbers. Fortunately, you can try binary search. The idea is that you first look at the number in the middle of the array, if this number happens to be the same as the query number, you solve the problem! Otherwise, you just continue to look for the number in the left half of the array (when the number in the middle is greater than the query number), or the right half of the array (when the number in the middle is greater than the query number), not the entire array. How you find if the query number is in the half of the array? You apply the same idea, until you find the answer, or the range you need to check becomes empty (no match). Name your program BinarySearch. Make sure your program gets the query number from the command line. For simplicity, you can hard code the sorted array of numbers in your program. (Hints: you may want to use a while loop).
