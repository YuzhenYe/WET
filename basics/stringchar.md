# using strings and characters

## it is possible to convert between strings and char arrays
string s1 = "123";
char c[] = s1.c_str();
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

## ASCII codes for the characters
```
65 -- A
...
90 -- Z
97 -- a
...
122 -- z
```

## sometimes it is more convenient to use char and sometimes it is easier to use strings 

###toggle case (lower to upper case, or visa versa) using char
```
//try the codes below
int c1 = (int) 'c';
int c2 = c1 + 'A' - 'a';
cout<<c1<<" "<<(char) c1<<" "<<c2<<" "<<(char) c2<<endl;
```
