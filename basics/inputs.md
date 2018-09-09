# Different ways to get inputs (data): cin, argv, and file (what to use on AIZU)

## Ask the user to type in something
```
        int score; //declare a variable
        cout << "Please type a score: " << endl; //alert the user to type in a score, << is an insertion operator
        cin >> score; //use cin to assign user's input to the variable, >> is an extraction operator
```

## Command line inputs (arguments). The command line inputs will be passed into the main() function. 
```
int main(int argc, char *argv[])
{
	//statements here
}
```
C++ divides the command line into items (strings) by breaking it 
at whitespace (e.g. spaces). The items include the command name itself. The number of items, and the actual items 
are passed to main() function as argc, and argv, respectively.
The argv is an array of strings, with argv[0] pointing to the program name, argv[1] pointing to the first argument, and so on.
For example, assume you have an executable called MagicProg, and you run the program as
MagicProg 10, then argc = 2, argv[0] = MagicProg, and argv[1] = 10.

## Read from a file: open file, read/write, close the file
```
//open file to read from
ifstream file1(filename);
//open file to write to
ofstream file2(filename);
```

```
//get one number using >> (the extraction operator), similar to cin >>
int data;
ifstream file("numbers.txt");
file >> data;
```

```
string aline;
getline(file, aline); //get the entire line
```

```
//using while loop to read the entire file, one line at a time
while(getline(file, aline)) {
	cout<<aline<<endl;
}
```

## Some useful functions (for converting strings into numbers): atoi, stoi, stod
```
//stoi -- string to integer, stod -- string to double
string s1 = "123";
string s2 = "123.5";
int a = atoi(s1.c_str()); //c style
int b = stoi(s1); //c++ style
double c = stod(s2);

//distinguish atoi/stoi and int
int c = int(s1[0]); //s1[0] == '1'; c == 49
string s1_0(1, s1[0]);
int d = stoi(s1_0); //s1_0 == "1"; d == 1
```

## AIZU online judge (and other online judges)
Example input 1:
An integer x is given in a line.
```
int a;
cin >> a;
```
Example input 2:
Two integers a and b separated by a single space are given in a line.
```
int a, b;
cin >> a >> b;
```

Example input 3:
In the first line, the number of notices n is given. In the following n lines, a set of four integers b, f, r and v which represents ith notice is given in a line. For example,
```
3
1 1 3 8
3 2 2 7
4 3 8 1
```
Code
```
int n;
cin >> n;
for(int i = 0; i < n; i ++) {
	int b, f, r, v;
	cin >> b >> f >> r >> v;
}
```

Example input 4:
The input has multiple lines, with one numbers in each line. The input ends with a line including single zero. Your program should not process for this terminal symbol. For example,
```
123
55
1000
0
```
Code
```
while(1) {
	cin >> tmp;
	if(tmp == "0") break;
}
```
