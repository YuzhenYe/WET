# g++ (Gnu C++ compiler)

## Usage 
```
g++ -o executable_file_name source-code
E.g., g++ -o SumOfNumbers SumOfNumbers.cpp
```

## C++, C++11, C++14, C++17
These are different standards for C++ published in different years.
C++11 is the standard library published in 2011, and so on. 
Some functions are availale only in more recent libraries. Example, string functions stoi and stol are available C++11 and after, not C++.

## On AIZU, you can specify which C++ to use. If you use g++ in a command line, you can use -std= to sepcify the library when needed. 
```
g++ -std=c++11 -o SumOfNumbers SumOfNumbers.cpp
```
