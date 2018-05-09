Different ways to get inputs (data).

- ask the user to type in something
```
        int score; //declare a variable
        cout << "Please type a score: " << endl; //alert the user to type in a score
        cin >> score; //use cin to assign user's input to the variable
```

- command line inputs 
The input argc is the number of items on the command line. C++ divides the command line into items by breaking it 
at whitespace (e.g. spaces). The items include the command name itself.
For example, assume you have a program MagicProg, and you run the program as
MagicProg 10, argc is 2, argv[0] is MagicProg, argv[1] is 10
MagicProg 10 20, argc is 3, argv[0] is MagicProg, argv[1] is 10, and argv[2] is 20

- read from a file
ifstream infile("numbers.txt");
infile >> data;
