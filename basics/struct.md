#How to track a person (by the name) and the money she/he has at the same time (e.g., to solve the greedy gift giver problem)?

##Approach 1: Using two arrays, one for storing the names, and one for storing the money
```
int np = 7;
string names[7] = ["Tom", "Nila", "Jerry", "Hunter", "Luke", "Jon", "Alexis"]
int money[7] = {0, 0, 0, 0, 0, 0, 0};
//Let's consider a case when Jerry gets 10 dollars. How we update the money?
//First find which slot in the names corresponds to "Jerry"
//and then update the corresponding slot in the money
string aname = "Jerry";
int whichslot = -1;
for(int i = 0; i < np; i ++) {
	if(names[i] == aname) { 
		whichslot = i;
		break;
	}
}
//whichslot is the slot index for "Jerry", and money[whichslot] tracks the money that "Jerry" has.
money[whichslot] += 10;
```
For this case, it makes perfect sense to use a function that loops up a person and returns the index
```
int lookup(int np, string *names, string name_to_look_up) 
{
	for(int i = 0; i < np; i ++) {
		if(names[i] == name_to_look_up) return i; //found, at slot #i
	}
	return -1; //not found
}
```
Then we can call the function to loop up a person, e.g., Jerry
```
int whichslot = lookup(np, names, "Jerry");
```

##Approach 2: Using a struct
```
//define a struct called Person which has two attributes, name and money
typedef struct Person
{
        string name;
        int money;
} Person;

//define a function that looks up a person based on its name
int lookup(int total, Person *person, string inpname)
{
        for(int i = 0; i < total; i ++) {
                if(inpname == person[i].name)
                        return i;
        }
        return -1;
}
```
Once a struct is defined, it can be used like any other data types. Use dot notation to refer to individual attributes.
```
fin >> np;
Person *person = new Person[np];
for(i = 0; i < np; i ++)  {
	fin >> person[i].name;
	person[i].money = 0;
}
```
```
//Jerry gets 10 dollars
receiver = lookup(np, person, "Jerry");
person[receiver].money += 10;
```

##See samples codes: [gift1.cpp](https://github.com/YuzhenYe/WET/blob/master/USACO/gift1.cpp) (using two arrays); [gift1-struct.cpp](https://github.com/YuzhenYe/WET/blob/master/USACO/gift1-struct.cpp) (using struct);
