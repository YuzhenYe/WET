# Resouces for WET gang

# Main resources
  1) C++ online tutorial: http://www.cplusplus.com/doc/tutorial/
  2) USA Computing Olympiad website: http://www.usaco.org
  3) Rosalind (http://rosalind.info/problems/locations/)
  4) Game Programming in C++ (http://www.jblearning.com/catalog/9781598220322/)

# Weekly topics/assignments
Week 1 (04/25/2018). 
  Topics:
   1) Get to know some basic liux commands (pwd, cd, ls, mkdir, rm) (https://github.com/YuzhenYe/WET/blob/master/basics/linux.txt)
   2) Get to know vim (https://github.com/YuzhenYe/WET/blob/master/basics/vim.txt)
   3) Get to know git (git clone; git add; git commit; git push) ((https://github.com/YuzhenYe/WET/blob/master/basics/git.txt)
   4) Hello World (main function) (http://www.cplusplus.com/doc/tutorial/program_structure/)(https://github.com/YuzhenYe/WET/blob/master/firstCodes)
      #include <iostream>
      int main() 
      { 
          #statements go here
          return(0);
      }
   5) Compiler (g++; source codes vs executables) (http://www.cplusplus.com/doc/tutorial/introduction/)
      Usage: g++ -o executable-file-name source-code
      Example: g++ -o HelloWorld HelloWorld.cpp
   6) Exercises: complete different versions of the helloWorld, push them to your github repository
   7) [Surprise] for loops
      for(int i = 0; i < 10; i ++) 
          cout<<"Hello World"<<endl;

  Take-home exercises:
   For all coding exercises, you need to use vim to write the code, and then compile and test your program before you push it to github
   1) ProudProgrammer.cpp:  this program prints "I am a C++ programmer".
   2) ProudProgrammerX10.cpp: this program prints 10 lines of "I am a C++ programmer".
   3) [Challenge] Numbers.cpp: write a program that display integers from 1 to 100, one number per line.

Week 2 (05/02/2018).
   0) review vim, g++, basic structure of a C++ program, and git
   1) use variables (https://github.com/YuzhenYe/WET/blob/master/basics/variables.txt)
   2) basic data types & strings
   3) more on loops
   4) branching structures (if-else, if-else if-else) (see HelloWorld3.cpp)
   5) coding exercises: 
      NumberPlay.cpp -- in this program, you need to declare two integers and do something with them, and display the result (e.g., num1^2 + num2)
      BitsBytes.cpp -- write a program to find out how many distinct values a 16-bit unsigned integer would be able to represent (use a loop to compute 2^n)! 

  Take-home exercises:

# Goals: 
  1) Learning the basics of C++ (NO class & objects)
  2) Learning some basic data structures & algorithms 
  3) Starting to use http://www.usaco.org 
  4) If kids get bored, we may try to use some arduino projects; great for introducing the concepts of inputs (not just text files, can be inputs from the sensors), hardware/software interaction, and loops.


