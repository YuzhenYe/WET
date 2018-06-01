# Different ways to get inputs (data): cin, argv, and file

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

Some useful functions (for converting strings into numbers): atoi, stoi, stod
```
//assume nums.txt has two lines, the first line is 20, and the second line is 10.3
string aline;
getline(file, aline);
int a = atoi(aline.c_str());
int b = stoi(aline);
getline(file, aline);
double c = stod(aline);
```
