Different ways to get inputs (data).

- Ask the user to type in something
```
        int score; //declare a variable
        cout << "Please type a score: " << endl; //alert the user to type in a score
        cin >> score; //use cin to assign user's input to the variable
```

- Command line inputs (arguments). The command line inputs will be passed into the main() function. 
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

- Read from a file
```
int data;
ifstream infile("numbers.txt");
infile >> data;
```
