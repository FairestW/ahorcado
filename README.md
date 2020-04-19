
# Cash
Determines the number of coins / the type of coins to give to a client. 

## Usage
First, clone this repo
```bash
git clone https://github.com/aa2006/Cash/
```
Then, enter the Cash directory
```bash
cd Cash
```
Compile the program using gcc for C and g++ for C++
```bash
gcc cash.c -o cash
```
```bash
g++ cash.cpp -o cash
```
Run the program
```bash
./cash
```
Enter the amount of change
```bash
Change owed:
```
The program should then output the number of coins.
If you want the program to output the coins specifically, just open the program and go to line 44 in the C program
```c
printf("%d pennies\n%d nickels \n%d dimes \n%d quarters\n", pennies, nickels, dimes, quarters);
```
And uncomment it, and comment the last line
```c
printf("%d\n", sum);
```
For C++, go to line 43 and uncomment it
```c
std::cout << pennies << ""\n" << nickels << "\n" << dimes << "\n" << quarters << "\n";
```
And comment the last line
```c
std::cout << sum << "\n";
```

## Contributions