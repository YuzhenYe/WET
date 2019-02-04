# Resouces for WET gang
## Main resources
  1) [C++ online tutorial](http://www.cplusplus.com/doc/tutorial/); [Game Programming in C++](http://www.jblearning.com/catalog/9781598220322/); [C++ STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
  2) [USA Computing Olympiad website](http://www.usaco.org); [AIZU](http://judge.u-aizu.ac.jp/onlinejudge/); [Timus](http://acm.timus.ru).
## [Goals](https://github.com/YuzhenYe/WET/blob/master/assessments/goals.md)

# Weekly topics/assignments

## 2019
## Week 33 (Feb 3 - Feb 9)
- Friends. Assume there are n (which is even) people, and one can be friend with only another person. So for n people, there will be n/2 pairs of friends. Write a program that computes the number of different ways of making friends for the entire group. For example, if there are two people, we will only see one case (the two people have to be friend for each other, as there are no other choices). If there are four people (Jon, Hunter, Alexis, and Bingrui), there are three possibilities: 1) (Jon-Hunter, Alexis-Bingrui), 2) (Jon-Bingrui, Hunter-Alexis), and 3) (Hunter-Bingrui, Jon-Alexis). Denote f(n) as the number of possible pairings for the group of n people, can you write a formula for f(n) using recursion, and without using recursion, respectively?
- Review: recursion.
Recursion occurs when a thing is defined in terms of itself or of its type. The Fibonacci sequence is a classic example of recursion, in which Fib(0)=0, Fib(1)=1 are the bases, and Fib(n)=Fib(n-1)+Fib(n-2) for n > 1 (the recursive rule). Assume you implement a function called fib in your program, which gets an integer n as its parameter, and returns the nth number in the Fibonacci sequence, check out fib() in [this code](https://github.com/YuzhenYe/WET/blob/master/basics/Fib.cpp):
Here is another example: factorial of n. n! = n(n-1)(n-2)(n-3)...1, so Fac(n) = n * Fac(n - 1); the base case: F(1) = 1. See [the code](https://github.com/YuzhenYe/WET/blob/master/basics/Fac.cpp).
- [USACO problem: Combination Lock](http://train.usaco.org/usacoprob2?a=YBlTmVmnxlt&S=combo). "Please determine the number of distinct settings for the dials that will open the lock". How to solve the problem? 1) you need to have a way to check each distinct setting in a systematic way; and 2) you need to know if a setting works or not.  (Important! define a function which checks if two input numbers are close)
- Homework assignments: 1) complete Combination Lock problem if you haven't; 2) [Timus Power](http://acm.timus.ru/problem.aspx?space=1&num=1110) (Hints: in C++, you can use pow(x, n) to compute the value of x to the power of n; however, you cannot call pow(x, n) directly to solve this problem, as pow(x, n) explodes when n gets large; think about how you can use (A*B) MOD C = ((A MOD C) * B) MOD C to solve this problem)
; 3) [Timus Farm](http://acm.timus.ru/problem.aspx?space=1&num=1349) (hint: [Fermat's Last Theorem](https://en.wikipedia.org/wiki/Fermat%27s_Last_Theorem); 4) [Timus Taxi](http://acm.timus.ru/problem.aspx?space=1&num=1607) (obviously you need to use a loop in your program, to allow Petr and driver to take turns to change price).

## Week 32 (Jan 27 - Feb 2)
- Warmup practice: given an integer, print its digits one at a time. For example, for 345, your program prints 5, 4, 3
- Timus problem: Penguins (use getline() function to get an entire line one)
- USACO problem: <a href="http://train.usaco.org/usacoprob2?a=gahCOktgeJ2&S=crypt1">Prime Cryptarithm</a>. This is a complicated problem, and it will save you a lot of time if you define a function in your program that checks if a number only contains good digits or not. For example, you may define a function like this: bool goodnum(int num, int n, int *digit), where num is the number to be checked, n is the number of good digits and digit stores the good digits, and the function returns true (num only contains good digits) or false (otherwise). So calling goodnum(222, 5, {2, 3, 4, 6 8}), for example, shall return true, because 222 contains only the good digits. Why define a function like this? Your program needs to check if a number contains good digits or not, again and again, in many places. Also how to figure how many good solutions? There is no shortcut, just check one at a time in a systematic way (first check 100 * 10, and then 100 * 11, and so on), and keep track of the count of valid solutions.
- Homework assignment: 1) complete the USACO problem Prime Cryptarithm if you haven't completed it; 2) Timus problem: <a href="http://acm.timus.ru/problem.aspx?space=1&num=1493">One Step from Happiness</a>; 3) Timus problem: <a href="http://acm.timus.ru/problem.aspx?space=1&num=1243">Divorce of the Seven Dwarfs</a>. Happy coding!

## Week 31 (Jan 20-26)
- Warmup practice: mean & standard deviation calculation
- Timus problem: <a href="http://acm.timus.ru/problem.aspx?space=1&num=1567">SMS-spam</a>
- Timus problem: <a href="http://acm.timus.ru/problem.aspx?space=1&num=1319">Hotel</a>
- Homework assignments: 1) complete USACO Mixing Milk & Barn Repair problems if you haven't!! 2) complete Timus SMS-spam and Hotel problems if you haven't; 3) Timus problems <a href="http://acm.timus.ru/problem.aspx?space=1&num=1263">Elections</a> and <a href="http://acm.timus.ru/problem.aspx?space=1&num=1991">The battle near the swamp</a> (optional).

## Week 30 (Jan 13-19)
- Review 0: [Hello World](https://github.com/YuzhenYe/WET/blob/master/firstCodes/HelloWorld.cpp); [variables](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt); String & characters [[description](https://github.com/YuzhenYe/WET/blob/master/basics/stringchar.md)]; [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md) (continue/break), branching structure (if-else; if-else if-else), inputs (cin, and type conversion) [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)
- Review 1: [Struct](https://github.com/YuzhenYe/WET/blob/master/basics/struct.md); Define and use functions [FunctionDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp); Sorting [quicksort in C++](https://github.com/YuzhenYe/WET/blob/master/USACO/scoreboard2.cpp) 
- Review 2: USACO problem: [Mixing milk](http://train.usaco.org/usacoprob2?a=yxBCZyWduDD&S=milk)
- Review 3: complete search & greedy approach
- Problem 1: Name demixer! A name keeper of a swim club messed up the names of all its swimmers -- he accidentally removed all the spaces between names so the names are concatanated into a string, for example, smithjohngeorgehuntercrystaljonalexisbingruitylermike. Please help the name keeper figure out all the names. You may use the following common names to solve the problem. Use this [file](http://github.com/YuzhenYe/WET/blob/master/basics/name.txt) as the input. The output shall be
```
smith john george hunter crystal jon alexis bingrui tyler mike
```
- Problem 2: Lucky numbers. There are several types of numbers that are commonly termed lucky numbers. We will work on the lucky numbers obtained this way. First, writing out all odd numbers: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, .... The first odd number >1 is 3, so strike out every third number from the list: 1, 3, 7, 9, 13, 15, 19, .... The first odd number greater than 3 in the list is 7, so strike out every seventh number: 1, 3, 7, 9, 13, 15, 21, 25, 31, .... Write a program to generate lucky numbers using this approach. Your program only applies the striking out procedure twice, and only reports numbers that are smaller than 1000. Call your program luckynumber.cpp.
- Homework assignments: 1) complete above Problem 1 & 2 if you haven't; 2) complete [USACO problem Mixing milk](http://train.usaco.org/usacoprob2?a=yxBCZyWduDD&S=milk) if you haven't; 3) [USACO Barn repair](http://train.usaco.org/usacoprob2?a=A8YtR7P9xA1&S=barn1)

## 2018

## Week 29 (Dec 16-Dec 23)
- Review: complete search problems
- Quiz: write a program that takes in a list of numbers and outputs the maximum, minimum, average, and the median. You may use the following as input for testing (the first line tells how many numbers, and the second line shows the actual numbers). 
```
12
20 30 23 40 1 2 35 188 500 10 10000 100
```
- Exercise 1: Timus [Simple Expression](http://acm.timus.ru/problem.aspx?space=1&num=2066)
- Exercise 2: Timus [Hidden Entrance](http://acm.timus.ru/problem.aspx?space=1&num=1910)
- Sometimes being greedy is good. Assume you work as a cashier, and you need to make a change for 80 cents. Obviously you don't want to give your customer 80 pennies (you can certainly do it, but your customer probably won't be happy). Instead, you give 3 quarters, and 1 nickel. By doing this, you give the fewest number of coins for the amount! Can you write a program that takes the change amount as the input, and outputs the fewest number of coins for making the change? You can assume you have unlimited numbers of common coins (penny, nickel, dime and quarter). This will be the exercise #3 for today.
- Homework assignments: 1) complete all the exercise problems if you haven't completed them; 2) USACO [Mixing milk](http://train.usaco.org/usacoprob2?a=WxKvKhw0ed4&S=milk2); 3) Timus problems [Wedding dinner](http://acm.timus.ru/problem.aspx?space=1&num=2100) & [Four Imps](http://acm.timus.ru/problem.aspx?space=1&num=1924)
## Week 28 (Dec 1-Dec 7)
- Review: transformation, name that number, and palindromic squards (what worked and what didn't work for you)
- What's this? "0123456789"[7]
- What's this? "0123456789ABCDEFGHIGK"[15]
- Recap: complete search
- Introduce [Timus Online Judge](http://acm.timus.ru/) (similar to AIZU using cin & cout & choose G++7.1)
- Exercise 1:  Number tower & its reflection
```
Example input 5,
ouput:
    1
   222
  33333
 4444444
555555555
---------
555555555
 4444444
  33333
   222
    1
```
- Exercise 2: Pokemon! Write a program to sort the pokemon cards according to their prices or power numbers ([review sort](https://github.com/YuzhenYe/WET/blob/master/USACO/scoreboard2.cpp); [review struct](https://github.com/YuzhenYe/WET/blob/master/basics/struct.md))
```
Sample input:
4 price
Weedle 40 15
Paras 60 10
Closter 120 50
Hydreigon 150 34

The first line tells how many Pokemon cards, and how to sort the cards (either power or price) 
The second and following lines show the power and price for each pokemon card.

Your program needs to output the cards according to the requirement. 
Sample output:
Paras 60 10
Weedle 40 15
Hydreigon 150 34
Closter 120 50
```
- Homework assignment: [USACO dual pylindrome](http://train.usaco.org/usacoprob2?a=oezbVVZ1Fo3&S=dualpal)
- Optional HW assignments:  [Timus: Lost in Localization](http://acm.timus.ru/problem.aspx?space=1&num=1785); [Timus: Two Gangsters](http://acm.timus.ru/problem.aspx?space=1&num=1409); [Timus: Bicycle Codes](http://acm.timus.ru/problem.aspx?space=1&num=1877); [Timus: Eniya](http://acm.timus.ru/problem.aspx?space=1&num=1293); [Timus: Grisha] (http://acm.timus.ru/problem.aspx?space=1&num=2012); [Timus: berries](http://acm.timus.ru/problem.aspx?space=1&num=2001)

## Week 27 (Nov 25-Dec 1)
- Review: Name that Number. Approach 1:  examine each word in the dictionary to see if it maps to the digits of the number in question. Approach 2: given a number, generate all possible strings that encode to that number and look them up in the dictionary. For Approach 2, how would you look up a word in the dictionary? Which of the two approaches do you prefer? Why?
- New topic: [switch statement](https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm). You don't have to use switch statement at all, as you can alway use if-else if-else statements. However when there are so many branching structures, it makes sense to use switch statement.
- Exercise 1: letter2score, use the switch statement to write a program that takes a letter as input, and reports the score range for the letter grade. For example, if the grade is 'A', your program prints >= 90
```
>=90 A
>=80 B
>=70 C
>=60 D 
<60 F
``` 
- Exercise 2: check if a string is palindromic (e.g., "1", "121","1221", "ATTA", "AACAA" are palindromic, while "1234", "ATCG" aren't)
- Exercise 3: represent an integer (in base 10) in a different base (e.g., 2, 12, 60). For example, 8 in base 10 is 1000 in base 2 (binary code). How you convert 18 (in base 10) to binary code? 
```
First we figure out how many digits in the binary code (base 2) for number 18 (in base 10). 
For 18, the binary code has 5 digits (if we have four digits, we can encode 16 different 
things so the largest integer we can encode is 15).
* first divide 18 by 16 to get the left most digit (which tells how many 16s)
18 / 16, quotient = 1, remainder = 2, so the left most digit is 1 (quotient)
* now divide the remainder 2 by 8 (which tells how many 8s) 
2 / 8, quotient = 0, remainder = 2, so the second digit is 0 (i.e., 0 8s)
* now divide the remainder 2 by 4 (which tells how many 8s)
2 / 4, quotient = 0, remainder = 2, so the third digit is 0
* now divide the remainder 2 by 2
2 / 2, quotient = 1, remainder = 0, so the fourth digit is 1
* lastly, divide the remainder 0 by 1
0 / 1, quotient = 0, so the fifth digit is 0

The binary code for 18 is 10010 
```
- Homework assignment: USACO problem [Palindromic Squares](http://train.usaco.org/usacoprob2?a=ELta9aRgoMh&S=palsquare). 
If you have completed Exercise 2 & Exercise 3, the Palindromic Squares problem shall be a piece of cake to you!
## Week 26 (Nov 17-Nov 23)
- Homework assignment: USACO problem: Name That Number. 
- Hints: there are many different ways to solve this problem. One approach is to first consider all words of the same length as the input brand number as possible candidates, and then gradually exclude more words that don't meet the requirement. For example, given brand number 4734, only words of 4 letters are possible candidates; because the first digit is 4, words that don't start with G, H or I cannot be the candidates. And then you check the second digit, third digit, and so on. The other trick that might be helpful is to treat the brand number as a string (so 4723 is "4723"). Things to review: working with strings (e.g., string a = "ABC"); using indexing to access individual letters (e.g., a[0], which is 'A'); checking for a string's length using the length() function.
- Can you think of a different approach that may also work? 

## Week 25 (Nov 11 - Nov 17)
- Review: Milking cows
- Review: [Struct](https://github.com/YuzhenYe/WET/blob/master/basics/struct.md).
- Review: Define and use functions [FunctionDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp)
- Quick sort: qsort() in C and sort() in C++; see sample codes [scoreboard](https://github.com/YuzhenYe/WET/blob/master/USACO/scoreboard.cpp); [scoreboard2](https://github.com/YuzhenYe/WET/blob/master/USACO/scoreboard2.cpp)
- AIZU problem: [Linear Search](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A); [Binary Search](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B) 
- How to represent a 2D pattern? 2D array of char, or 1D array of string; working with row and column. E.g., char board[MAXN][MAXN]; string *pattern = new string[n];
- Exercise: write a program that reads a 2D pattern, rotates the pattern clockwise 90 degrees, and outputs the transformed pattern.
```
Sample input:
3
@-@
---
@@-
```
```
Output:
@-@
@--
--@
```
- Homework assignment: USACO problem: Transformation (hints: define functions for 90 rotation, 180 rotation, and etc, and for comparing two patterns) 

## Week 24 (Nov 4 - Nov 10)
- Review Friday the Thirteen problem and the Broken Necklace problem (wrap around -- duplicate).
- New topic: Sorting (quick sort) [read](http://www.cplusplus.com/reference/cstdlib/qsort/); [review of struct](https://github.com/YuzhenYe/WET/blob/master/basics/struct.md); using pointer (e.g., a -> score)
- New topic: Complete search. 1) Complete search exploits the brute force, straight-forward, try-them-all method of finding the answer. 2) Complete search should almost always be the first algorithm/solution you consider. It is great if it works within the time and memory constraints; if not, think about more efficient approach. 3) In the case of a problem with only fewer than a couple million possibilities, iterate through each one of them, and see if the answer works.
- Exercise: scoreboard3: the program takes in a score board in the format as the one you see last week, and outputs the persons and their scores in the order of smallest score to largest score. For the same sample input, your program shall output,
```
Cat 1
Jerry 3
Tom 12
```
- Homework assignment: USACO problem: Milking cows

## Week 23 (Oct 28 - Nov 3)
- New topic: [struct in C++](https://github.com/YuzhenYe/WET/blob/master/basics/struct.md)
- Exercise: implement scoreboard using 1) two arrays (scoreboard1.cpp), and 2) a struct (scoreboard2.cpp)
```
Sample input:
3
Tom
Jerry
Cat
Tom 10
Tom 2
Jerry 3
Cat 1

Output:
Tom
```
- Homework assignment: USACO Task (beads), broken necklace

## Week 22 (Oct 21 - 27)
- Quiz
- Write a program to display all divisors given an integer as the input. E.g., input 6, the program displays 1x6 2x3
- USACO problem: greedy gift givers
```
#the following code may not work for some cases
#how: it didn't stop until it had read the last line of the file (gift1.in) twice. 
#why:  streams/files in C and C++ don't predict when you have reached the end of the file, but the rather indicate if you have tried to read past the end of the file. 
while(!fin.eof()) {
 	fin >> giver >> amount >> howmany; 
	//....
}
#this problem can be fixed as following
while(fin >> giver >> amount >> howmany) {
	//....
}
```
- Homework assignment: USACO problem, Friday the Thirteenth. Hints: use variables to track year, month, date and day; use variable names that are straightforward (e.g., year for "year"); reset month back to 1 when it reachs 13, date back to 1 when it reaches e.g., 31 for the month that only has 30 days; define and use a function that returns true (leap year) or false (otherwise) given a year as input; how to check if a year is century year? (use mod).

## Week 21 (Oct 14 - 20)
- Quiz
- New topic: [dynamic allocation](https://github.com/YuzhenYe/WET/blob/master/basics/pointer.md)
- New topic: [USACO](https://github.com/YuzhenYe/WET/blob/master/basics/usaco.md)
- AIZU problem: [Prime Numbers](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C) -- Try to use pointers
- USACO warmup: hello world 
- Homework assignment 1) USACO problem: Your Ride Is Here. 
- Homework assignment 2) AIZU problem: [Binary Search](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B) How binary search works? Assume you have an array of numbers sorted from the smallest to the largest (e.g., {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, which BTW, are all the primes smaller than 100). Given a query number (e.g., 67), how can you tell if this number is in the array for not? Obviously, you can search the array sequentially, starting at index 0, moving to the next index one at a time, until you find the slot which holds the same number as the query number, or you exhaust the array, reaching to the end of the array with no luck (in this case, the number is not found in the array). This approach is called sequential search, which doesn't seem to be the most efficient way for finding a number in a sorted array of numbers. Fortunately, you can try binary search. The idea is that you first look at the number in the middle of the array, if this number happens to be the same as the query number, you solve the problem! Otherwise, you just continue to look for the number in the left half of the array (when the number in the middle is greater than the query number), or the right half of the array (when the number in the middle is greater than the query number), not the entire array. How you find if the query number is in the left/right half of the array? You apply the same "binary" search idea, until you find the match, or the half becomes empty (no match). 


## Week 20 (Oct 7-Oct 13)
- Quiz 
- [Math operators](http://www.cplusplus.com/reference/cmath/) & [precision](https://github.com/YuzhenYe/WET/blob/master/basics/precision.md) (sqrt, pow functions)
- AIZU problem: distance II
- Recursion (a function that calls the function itself; factorial, fibonacci number)
- Algorithms: instructions to solve a computational problem.
- The maximum profit problem -- naive approach: about n^2 times of comparisons. Can you do better than this? 
- Homework assignments: 1) AIZU maximum profit problem if you haven't completed it; 2) explain to your mom or dad why we say the maximum profit problem can be solved in linear time; 3) complete the AIZU distance II problem if you haven't done it; 4) create an account on USACO and make sure that you can login into it if you haven't done it; 5) [AIZU how many ways](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B); 6) [AIZU greatest common divisor problem](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B) (you may want to review materials from week 9 for recursion).


## Week 19 (Sep 30 - Oct 5)
- Quiz (two problems)
- Factorial calculation (with/without using recursion)
- [Math operators](http://www.cplusplus.com/reference/cmath/) & [precision](https://github.com/YuzhenYe/WET/blob/master/basics/precision.md) ([<cmath>](http://www.cplusplus.com/reference/cmath/) & precision, e.g., cout.precision(17) for double)
- AIZU problems: distance, standard deviation
- Homework assignments: 1) AIZU problem standard deviation (if you haven't completed it); 2) AIZU problem: maximum profit; and 3) AIZU problem bubble sort (the maximum profit & bubble sort problems are in the Intro to Algorithms and Data Structure)

## Week 18 (Sep 23 - Sep 29)
- Quiz (two problems)
- Review: types (int/boolean/double/float/char/string), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md) (continue/break), branching structure (if-else; if-else if-else), inputs (cin, and type conversion) [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)
- More about compiling [[description](https://github.com/YuzhenYe/WET/blob/master/basics/compiler.md)] (C++ vs C++11)
- String & characters [[description](https://github.com/YuzhenYe/WET/blob/master/basics/stringchar.md)]
- AIZU problems: Toggling cases (ITP1_8_A) & Finding a word (ITP1_9_A)
- Sorting problem & algorithms (selection sort for this week)
- Homework assignments: 1) Implement the print range program if you haven't done it (Quiz problem #2); 2) AIZU finding word problem (if you haven't done it); and 3) AIZU problem: ALDS1_2_B (selection sort). From this week, we will start to use the problems from the Intro to Algorithms and Data Structure)

## Week 17 (Sep 16-Sep 22)
- Quiz (three problems) 
- Review: [variables](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt), types (int/boolean/double/float/char/string), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md) (continue/break), branching structure (if-else; if-else if-else), [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) (why we use functions?), and inputs (cin, and type conversion) [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)
- AIZU problems: ITP1_5_B (Print a Frame); ITP1_8_B (Sum of Numbers)
- Homework assignments: complete two AIZU problems of your choice. 

## Week 16 (Sep 9-Sep 15)
- Review: [variables](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt), types (int/boolean/double/float/char/string), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md) (continue/break), branching structure (if-else; if-else if-else), [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) (why we use functions?), and inputs (cin, and type conversion) [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)
- AIZU problem 1: ITP1_3_A:   Print Many Hello World
- AIZU problem 2: ITP1_4_A:   A / B Problem
- AIZU problem 3: ITP1_8_B:   Sum of Numbers
## Week 15 (Aug 19 - Aug 25)
- :sunglasses: From this week, you will be working on a few problems just to review some of the topics that you have learned. 
- Write a program called SumPowerTwo.cpp that computes and displays 1 + 2 + 4 + 8 + ... + n, where n is the 2 to the power of x (x is the parameter that the program needs to get from the user). Your program gets the value of x through the command line. For example, if you give your program an input of 1, your program displays 1 (2^0 = 1); for input of 4, your program displays 31 (since 1 + 2 + 4 + 8 + 16 = 31). Review topic: how to get users' inputs (data): argv, cin, and reading from a file [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)
- [Challenge] You now should know that DNAs are strings in the alphabet of A, T, C, and G. Write a program that displays ALL possible triplets of such letters (a triplet is called a codon in protein-coding regions in DNA sequences). An example of triplet is AAA. Call your program Triplets. 

## Week 14 (July 26-Aug 1, 2018)
- :sunglasses: OddSum.cpp. Given two positive integers a and b (a < b < 1000), your program computes and displays sum of all odd integers from a through b, inclusively.  Your program gets a and b using command line arguments and make sure a < b < 10000. 
- :sunglasses: ReverseComplement.cpp. In DNA strings, symbols 'A' and 'T' are complements of each other, as are 'C' and 'G'.  The reverse complement of a DNA string s is the string sc formed by reversing the symbols of s , then taking the complement of each symbol (e.g., the reverse complement of "GTCA" is "TGAC"). For this problem, your program gets input string from a file, and your program gets the name of the file using command line argument. 
- :sunglasses: EditDist.cpp. You wrote a program to compute Hamming distance between two strings. For this problem, you will work on edit distance: the edit distance between two strings is the minimum number of edits, replacement, insertion, and deletion of a letter that one needs to introduce into one of the strings to convert it into the other string. Obviously, edit distance is a better metric for measuring the similarity between two strings than the Hamming distance (for example, "XABCDEFG" and "ABCDEFGX" are pretty similar, however if you use Hamming distance, the distance will look pretty bad). Edit distance calculation is a well known problem in CS, and the solution is a dynamic programming algorithm, i.e., the solution to larger problems can be computed using solutions of smaller, overlapping problems. For example, given two strings "ABC" and "AB", we know the edit distance is one (we just need to delete the ending "C" from "ABC" to turn it into "AB"). Denote the edit distance between "ABC" and "AB" as d("ABC", "AB"), it can be computed using solutions to smaller problems (edit distance between smaller strings), i.e., d("ABC", "AB") is the minimum of d("AB", "A") + 1 (why add 1, it is because "C" != "B"), d("ABC", "A") + 1 (adding 1 because based on this solution, we just need to insert a "B" into the second string), and d("AB", "AB") + 1 (if we know the edit distance between "AB" and "AB", to get the edit distance between "ABC" and "AB", we just need to add 1 as we just need to delete the extra ending "C" from "ABC"). To generalize, the edit distance between the prefixes of two given strings a (from 1 to position i), and b (from 1 to position j) can be defined as:

```
//a and b are strings, i and j are the prefix positions
int d(a, i, b, j)
   if(i == 0 || j == 0) return i+j; //bases
   else //recursion
       if(a_i == b_j) s1 = d(a, i-1, b, j-1) 
       else s1 = d(a, i-1, b, j-1) + 1
       s2 = d(a, i, b, j-1)+1
       s3 = d(a, i-1, b, j)+1
       return min(s1, s2, s3)
``` 
Use recursion for this implementation (you will work on a different implemention without using recursion later).

## Week 12 (July 11-July 18, 2018)
- :sunglasses: Congratulations if you have already completed the QuickSort. If not, please continue to work on it (and it is ok to get help to finish it).
- :sunglasses: Read this [page](http://rosalind.info/problems/maj/) about Majority Element, and implement a code called MajorityElement. Make sure that you compile and test it before you upload your code to github. 
- :sunglasses: Read this [page](http://rosalind.info/problems/deg/) about graphs and Degree Array. Implement a code called DegreeArray for this problem.
- Some notes about reading and extracting information from a file in C++. C++ is not good for processing files & strings (to extract numbers from a line) (it is possible that a task that can be done in one line in Python may require many lines in C++). Again, here are the few steps that you need to know to work with files: open file (using ifstream to open a file to read, and ofstream to open a file to write), check if a file is open correctly (using is_open() function), get contents from the file (typically line by line), and close the file. Often one needs to process/split the strings (lines) read from file to extract information (e.g., a line representing an edge of a graph as shown in this [file](https://github.com/YuzhenYe/WET/blob/master/basics/graph.txt) includes information about the beginning and ending nodes of this edge. Read this [code](https://github.com/YuzhenYe/WET/blob/master/basics/ReadGraph.cpp) to see how a standard graph file (the first line shows the total number of nodes & edges, and the lines below each represent an edge).

## Week 13 (July 19-July 25, 2018)
- :sunglasses: Merge two sorted arrays. Given two sorted arrays A and B, the goal is to find a sorted array C containing all the elements of A and B. Check [Rosalind](http://rosalind.info/problems/mer/) for sample input & outout. Call your program MergeArray. 
- :sunglasses: Translate DNA into RNA. Check [Rosalind](http://rosalind.info/problems/rna/) for description. Call your program DNA2RNA. 

## Week 10-11 (Jun 27-July 10, 2018)
- :sunglasses: Hope you guys are enjoying the summer break, and the coding!
- :sunglasses: Review: functions [FunctionDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) & recursion (a function that calls itself); get data from users [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)!
- :sunglasses: We know that factorial of n (n is a non-negative integer) is the product of all positive integers less than or equal to n, i.e., n * (n-1) * (n-2) ... * 1. If we specify the function that computes the factorial as F(n), it can be defined using using a recursive formula: F(n) = n * F(n-1) if n > 1, F(1) = 1 and F(0) = 1. Implement a program called FactorialRec which receives n through the command line from users, computes and displays its factorial. You need to implement your program carefully such that if a careless user types in a negative number or a number that's greater than 20, it terminates, alerting the user about what's allowed input. Also for this implementation, make sure that you use recursion (although in practice, one doesn't have to use recursion to compute factorials).
- :sunglasses: You are officially done with the silly sorting algorithms. For this week, you will work out the quicksort algorithm. Read this [page](http://homes.soic.indiana.edu/classes/fall2017/csci/h343-yye/sort.php) for description of quicksort (but you may ignore the time complexity analysis of quicksort algorithm). Call your implemention of the quicksort algorithm as QuickSort, and in your implementation, you need to define two functions, one called qsort and one called partition as mentioned in the description. It is fine if you need to get a lot of help from your mom or dad for this probblem, as it is a challenging one. Good luck! 

## Week 9 (Jun 19-26, 2018)
- :sunglasses: Ok, you now have implemented two of the slowest sorting algorithms, insertion and selection sort. For this week, you are going to implement the bubble sort, yet another not so great (in terms of computational efficiency) algorithm for sorting. Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. The algorithm is named for the way smaller elements "bubble" to the top of the list. Write a program called BubbleSort to implement bubble sort algorithm. Again, write your program such that it gets numbers from a text file (so your program reads strings from the file, convert them into numbers and store the numbers in an array). Make sure that you compile and test your program to make sure that it works correctly, and git it to your github repository.
- :sunglasses: Bubble sort, insertion sort, and selection sort are so-called O(n^2) (here n is the number of elements to be sorted), comparison based sorting algorithms. Check with you mom or dad about what is big O, and what does O(n^2) mean.  
- :sunglasses: "QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD" -- what's this? For this problem, you are going to work out a shift cipher, so that you can figure out the hidden message behind. The shift cipher, also called a Caesar cipher, is one of the simplest encryption techniques (which means you probably don't want to use this technique to encrypt your top secrets). It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence. The hidden message you just saw is "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", encrypted using a shift of 3 to the left. Write a program called CaesarCipher. For simplicity, your program only encrypts normal letters (so a blank space remains to be a blank space). Your program reads a message it needs to encrypt from a text file the user gives, and writes encrypted message to a file whose name is also given by the user. For example, if you run "CaesarCipher message.txt encrypted.txt", it means that the input text file is message.txt, and your program writes encrypted message to encrypted.txt. Have fun with your first cipher!
- :sunglasses: We are going to learn something new for this week: Recursion. Recursion occurs when a thing is defined in terms of itself or of its type. The Fibonacci sequence is a classic example of recursion, in which Fib(0)=0, Fib(1)=1 are the bases, and Fib(n)=Fib(n-1)+Fib(n-2) for n > 1 (the recursive rule). Assume you implement a function called fib in your program, which gets an integer n as its parameter, and returns the nth number in the Fibonacci sequence, this is how fib() looks like:

```
int fib(int n) {
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fib(n-1)+fib(n-2);
}
```

Please note the fib() function is called within the fib() function (it is recursion!). Also please note the two base cases (n == 0 and n == 1), which properly handeling these base cases, the fib() function won't work correctly and xit runs into an infinity loop. To compute Finonacci sequence, you don't have to use recursions (remember that implemented it in week 5 without using any recursions). However, for this assignment, you will write a code and call it FibonacciRec, which uses a recursion. 

## Week 8 (Jun 11-18, 2018)
- Trust that you have implemented the selection sort algorithm & palindrome checker. Before you code up for the two new problems for this week, please take time to review some of the stuff that you have learned so far:  [variables](https://github.com/YuzhenYe/WET/blob/master/basics/variable.txt), types (int, string, char, bool), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), branching structures (if-else) (see [EvenOdd.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/EvenOdd.cpp)), [loops/continue/break](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp), and [getting inputs from cin, command line (argv), and text files](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md) (see [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)).
- :sunglasses: Problem 1. For this week, you are going to implement another sorting algorithm, insertion sort. Imagine that you are playing a card game. You're holding the cards in your hand, and these cards are sorted. The dealer hands you exactly one new card, and you have to put it into the correct place so that the cards you're holding are still sorted! This is the idea behind insertion sort. Loop over positions in the array, starting with index 0 (remember C/C++ starts with index 0 instead of 1). Each new position is like the new card handed to you by the dealer, and you need to insert it into the correct place in the sorted subarray to the left of that position. (see more explanations about insertion sort at [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort)). Again, write your program (called InsertionSort) such that it gets numbers from a text file (so your program reads strings from the file, convert them into numbers and store the numbers in an array).
- :sunglasses: Problem 2. Binary search. Assume you have an array of numbers sorted from the smallest to the largest (e.g., {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, which BTW, are all the primes smaller than 100). Given a query number (e.g., 67), how can you tell if this number is in the array for not? Obviously, you can search the array sequentially, starting at index 0, moving to the next index one at a time, until you find the slot which holds the same number as the query number, or you exhaust the array, reaching to the end of the array with no luck (in this case, the number is not found in the array). This approach is called sequential search, which doesn't seem to be the most efficient way for finding a number in a sorted array of numbers. Fortunately, you can try binary search. The idea is that you first look at the number in the middle of the array, if this number happens to be the same as the query number, you solve the problem! Otherwise, you just continue to look for the number in the left half of the array (when the number in the middle is greater than the query number), or the right half of the array (when the number in the middle is greater than the query number), not the entire array. How you find if the query number is in the left/right half of the array? You apply the same "binary" search idea, until you find the match, or the half becomes empty (no match). Name your program BinarySearch. Make sure your program gets the query number from the command line. For simplicity, you can hard code the sorted array of numbers in your program. (Hints: you may want to use a while loop).

## Week 7 (Jun 3-9, 2018)
- During the summer time :sunglasses:, you will review things that you have learned, or learn something new on your own. And work out two problems for each week. 
- :bulb: Sorting problem & selection sort (algorithm & pseudo code)([see Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/sorting-algorithms/a/selection-sort-pseudocode))
- :muscle: Problem 1: Implement selection sort. Call your program SelectionSort.cpp. (Hint) Use nested loops: the outer loop tracks the leftmost position of the unsorted portion of the array (at the beginning of the iteration, the unsorted portion is the entire array; the unsorted portion shrinks by one in size after each iteration); the inner loop is to find the smallest number in the unsorted portion. For this problem, try to write your program such that it gets numbers from a text file (so your program reads strings from the file, convert them into numbers and store the numbers in an array). 
- :muscle: Problem 2: A string is a palindrome if it reads the same backward as forward. Madam is a palindrome, ATCGCTA is another example of palindromes. Why we care about palindromes? Palindromes can be words, can be found in musical notes, and they can be found in genomes (for some biological reasons). Joseph Haydn's Symphony No. 47 in G is nicknamed "the Palindrome". The third movement, minuet and trio is a musical palindrome; the second half of the piece is the same as the first but backwards. The longest palindromic word in the Oxford English Dictionary is the onomatopoeic tattarrattat, coined by James Joyce in Ulysses (1922) for a knock on the door. Write a program called Palindrome.cpp, which gets a query string through the command line, checkes and reports if the input string is a palindrome or not. For simplicity, assume there are no spaces in the input string. 

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

## Week 5 (May 22, 2018) 
- Review: variables, types (int, string, char), [arrays](https://github.com/YuzhenYe/WET/blob/master/basics/array.md), [loops](https://github.com/YuzhenYe/WET/blob/master/basics/loops.md), and [functions](https://github.com/YuzhenYe/WET/blob/master/firstCodes/FunctionDemo.cpp) (why we use functions?)
- [Quiz](https://github.com/YuzhenYe/WET/blob/master/assessments/quiz.md): 
- Introduce different ways to get user's inputs (data): argv, cin, and reading from a file [description](https://github.com/YuzhenYe/WET/blob/master/basics/inputs.md); [InputsDemo.cpp](https://github.com/YuzhenYe/WET/blob/master/firstCodes/InputsDemo.cpp)!
- Introduce continue, break, boolean, compound conditions (and, or, not); see [DnaChecker.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker.cpp) and [DnaChecker2.cpp](http://github.com/YuzhenYe/WET/blob/master/firstCodes/DnaChecker2.cpp)

:panda_face: Take-home exercises. Write up the code, compile and test!

- LuckyNumber.cpp, this program gets a number from the user through the command line, and tells if it is a lucky number or not. The program has its own array of numbers, and if the user happens to type in one of the numbers, it is a lucky number! For example, if your program has this array of numbers {30, 40, 20, 34, 100, 70, 90}, and the user gives 40, your program needs to display "40 is a lucky number!" (however, if the user gives 55, your program needs to display "sorry please try again"). For this assignment, you must use argc and argv to get the number from the user. In addition, try to use "continue" or "break" in the loop. 
- OddAdd.cpp,  the program receives two integers from the user (again, through the command line), computes and displays the sum of all odd integers from a through b, inclusively. For example, if the user calls the program as, ./OddAdd 100 200, the program shall display 7500. 
- [Challenge] Fibonacci.cpp. The Fibonacci numbers 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... are generated by the following rules: F(n) = F(n-1)+F(n-2) when n > 1, F(0) = 0, and F(1) = 1 (so F(2) = F(1) + F(0) = 1, and so on). Implement a program, which takes a number (<= 25) from the user, computes and displays the n-th Fibonacci number ([see more about Fibonacci number](http://rosalind.info/problems/fibo/)). For example, if the user runs the program as this, ./Fibonacci 6, the program shall display 8. [Hints: your program computes and stores Fibonacci numbers as an array, even though it only needs to display n-th element].

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


