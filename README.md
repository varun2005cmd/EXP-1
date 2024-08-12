                                                                         ALL EXPERIMENTS C++ and Data structures 

# EXPERIMENT 1 Downloading VS code ,(hello world and calculator program)

1. Download VS Code Installer:
  
  
      ![image](https://github.com/user-attachments/assets/fa7d3519-f388-4fe4-9795-8fc113e4b883)

Open your web browser and go to the official Visual Studio Code website: code.visualstudio.com.
Click on the "Download for Windows" button. This will download the installer executable (.exe file).
Run the Installer:

Once the download is complete, open the downloaded file (VSCodeSetup-x.y.z.exe where x.y.z is the version number).
If prompted by the User Account Control (UAC) dialog, click "Yes" to allow the installer to make changes to your system.

2. Accept the License Agreement:

Read through the license agreement.
Check the box that says "I accept the agreement" and click "Next".

3. Choose Installation Location:

Choose the destination folder where you want to install VS Code. The default location is usually fine. Click "Next".

4. Install VS Code:

Click the "Install" button to start the installation process.
The installer will copy the necessary files to your system.

5. Launch VS Code:

Once the installation is complete, you’ll see a final screen with an option to launch Visual Studio Code. Ensure this box is checked and click "Finish".



# EXPERIMENT-1a
# Printing “Hello World”

Aim:
1.	Introduction to Output: Uses “using namespace std” to print text to the console, helping beginners understand basic output in C++.

Software: VS Code


CODE:
```
#include<iostream>
// Varun Pendem PRN: 23070123149
using namespace std;
int main()
{
      cout<<"Hello World";
      return 0;
} 
```



# EXPERIMENT 1-b
# Printing Sum and Average of 2 numbers

Software: VS Code

Theory: 

Sum and Average
1.	Basic Arithmetic Operations: Demonstrates how to perform addition and division to calculate the sum and average of numbers.
2.	Input and Output Handling: Teaches how to take input from the user using namespace std and display results.

CODE:
```
#include<iostream>
// Varun Pendem PRN: 23070123149
using namespace std;
int main()
{
      int a,b;
      cout<<"Enter a and b"<<endl;
      cin>>a;
      cin>>b;
      int sum1 = a+b;
      cout<<"The sum of a and b is "<<sum1;
      int avg = (a+b)/2;
      cout<<endl<<"The average of a and b is: "<<avg;
      return 0;
}
```


# EXPERIMENT 1-c
# Finding whether the number is odd or even

Software: VS Code

Theory:

Even or Odd
1.	Conditional Statements: Introduces if-else statements to check whether a number is even or odd.
2.	Modulus Operator: Uses the modulus operator % to determine the remainder when a number is divided by 2, crucial for the even or odd check.
	
CODE:
```
#include<iostream>
// Varun Pendem PRN: 23070123149
using namespace std;
int main()
{
      int n;
      cout<<"Enter n"<<endl;
      cin>>n;

      if(n%2==0){
            cout<<endl<<"even";
      }
      else{
            cout<<endl<<"odd";
      }     
      return 0;
}
```


# EXPERIMENT 1-d
# Determining leap years

Software: VS Code

Theory: A leap year is a year that is evenly divisible by 4 but not by 100, unless it is also divisible by 400. This rule helps to keep our calendar year synchronized with the astronomical year.

The leap year calculation can be summarized as follows:

A year is a leap year if it is evenly divisible by 4.
However, if the year is also evenly divisible by 100, it is not a leap year, unless:
The year is also evenly divisible by 400, in which case it is a leap year.

CODE:
```
#include<iostream>
// Varun Pendem PRN: 23070123149
using namespace std;
int main()
{
      int year;
      cout<<endl<<"Enter the year";
      cin>>year;
      if(year%400==0 and year%100!=0 or year%4==0){
            cout<<"LEAP year";
      }
      else{
            cout<<"Non leap year";
      }
      return 0;
}
```



# EXPERIMENT 2 To study and implement C++ Program Structure (Data types): -

Aim: To understand and implement the different data types in C++ 

Software: VS Code

Theory:

Data Types, I/O Operations
Integer Types
1.	int: Stores standard whole numbers.
2.	short int: Stores smaller whole numbers.
3.	long int: Stores larger whole numbers.
4.	long long int: Stores very large whole numbers.
Floating-Point Types
1.	float: Stores single precision decimal numbers.
2.	double: Stores double precision decimal numbers.
3.	long double: Stores extended precision decimal numbers.
Unsigned Types
•	unsigned int: Stores non-negative whole numbers with an extended range.
•	unsigned types can only represent non-negative numbers

wchar_t
•	Purpose: Designed to represent characters from larger character sets, including international or Unicode characters.
•	Size: Typically 2 or 4 bytes (depends on the system and compiler).

CODE: 
```

#include<iostream>
//Varun Pendem
// PRN: 23070123149
using namespace std;
int main()
{
   int a = 10;
   short int a1 = 15;
   unsigned short  int a2 = 20;
   long long int a3;
   char b = 'B';
   wchar_t b1;
   float c = 3.14;
   double d;
   long double d1;
   unsigned long long int d2;


  static int s_i;
  register int r_i = 100;
  extern float e_f ;
  
   cout<<endl<<sizeof(a);
   cout<<endl<<sizeof(a1);
   cout<<endl<<sizeof(a2);
   cout<<endl<<sizeof(a3);
   cout<<endl<<sizeof(b);
   cout<<endl<<sizeof(b1);
   cout<<endl<<sizeof(c);
   cout<<endl<<sizeof(d);
   cout<<endl<<sizeof(d1);
   cout<<endl<<sizeof(d2);
   cout<<endl<<sizeof(s_i);
   cout<<endl<<sizeof(r_i);
   cout<<endl<<sizeof(e_f);
    return 0;
}
```



Output:

![image](https://github.com/user-attachments/assets/ad9afc64-0531-4dd1-8c8e-59d9d894262b)

Conclusion:
This program demonstrates the use of sizeof operator to help determine the size of various data types in C++. Understanding the sizes of these data types helps us to make better memory management decisions and optimizing our programs.

# EXPERIMENT 3 To study and implement operators in C++ : -


Aim: to understand the different operators such as arithmetic, logical , BITWISE etc

Software: VS Code

Theory:

•	This C++ program demonstrates fundamental operations on integer variables, including arithmetic, comparison, and bitwise operations.

•	Initially, variables a, b, c, d, and e are assigned values, and a series of arithmetic operations are performed on them, such as addition (a += 55), increment (a++), division (b /= 10), multiplication (c *= 15), subtraction (d -= 20), modulus (e %= 24), and decrement (e--). The program then uses comparison operations to check and print if a is greater than b and if d equals zero.

CODE:
```
#include <iostream>
using namespace std;
// Varun Pendem
// PRN: 23070123149

int main()

{   int one = 1; 
    int a1 = 4;
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;

    //Arithmetic 
    a+=55;
    a++;
    b/=10;
    c*=15;
    d-=20;
    e%=24;
    e--;

    //comparision 
    if(a>>b){
        cout<<"a>b"<<endl;
    }
    if(d==0){
        cout<<"d=e"<<endl;
    }

    

    cout<<endl<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}

```

Output:

![image](https://github.com/user-attachments/assets/59f9776c-fb29-45a1-8745-649c4344f975)

Conclusion:
This program provides a overview of how different types of operators are used in C++. Understanding these operators is important for performing various operations and implementing logic in C++ programs. This program serves as a practical guide for beginners to get familiar with operators and their applications in C++.


# EXPERIMENT 4 To study and implement C++ Bitwise Operators: -

Aim: Implementing the BITWISE operators like AND, NAND, XOR on 2 numbers

Software: VS Code

Theory:
•	It demonstrates bitwise operations, including AND, OR, NOT, and XOR, and prints the results. The final values of the variables are also printed. This program highlights basic C++ syntax and operations.¬¬¬
Bitwise operators are used to perform operations on individual bits of integer data types. These operators are fundamental in low-level programming, enabling efficient manipulation of data at the bit level. In C++


CODE:
```
#include<iostream>
using namespace std;

// Varun Pendem
// PRN: 23070123149

int main()
{   int one = 1; 
    int a1 = 4;
    int a = 5;
    int b = 10;
  
    int bit_and = a & a1;
    int bit_or = a || a1;
    int bit_not  = !one;
    int bit_XOR = a^a1;
    cout<< "the and of 4 and 5 is "<<bit_and<<endl;
    cout<< "the or of 4 and 5 is "<<bit_or<<endl;
    cout<< "the not of 1 is "<<bit_not<<endl;
    cout<< "the XOR of 4 and 5 is "<<bit_XOR<<endl;
      return 0;
}

```

Output:

![image](https://github.com/user-attachments/assets/a97a2db3-4388-4ed4-b599-b5267f518507)

Conclusion:
This program helps us understand how bitwise operators can be used in C++. These bitwise operations can be used for performance optimization as they pack multiple values in a single variable making the program more memory efficient.


# Experiment 5: -To study and implement C++ decision making statements

Aim: To learn how to implement decision making statements in C++ programming language

Software: VS Code

Theory:

Decision-making in C++ helps to write decision-driven statements and execute a particular set of code based on certain conditions.

C++ has different types of decision making statements like

if
else if
else
switch
default
if statement

if statement is the most simple decision-making statement. It is used to decide whether a certain statement or block of statements will be executed or not executed based on a certain type of condition.

Syntax: -

if(condition)

{

// will execute the code here depending on if the condition is satisfied

}

else if statement

An if-else statement controls conditional branching. Statements in the if-branch are executed only if the condition evaluates to a nonzero value (or true ). If the value of condition is nonzero, the following statement gets executed, and the statement following the optional else gets skipped.

Syntax: -

if(condition_a)

{

// will execute the code depending whether the condtion_a is satisfied

}

else if(condition_b)

{

// will excecute the code depending whether the condtion-a is not satisfied and condition_b is satsified

}

else

{

// will execute the code if both t e condtions are not satisfied

}

switch and default statements

Switch case is basically an optimised version of multiple else if statements with a difference of approximately 10^-3% faster speed meaning that it does not really matter if a person is using else if or switch and if micro management is required then try using looup or hash table in the codes.

Switch case has better readabilty, can be typed faster, easier to debug and harder to make mistakes compared to multiple else if statements.

default statements are like elese staement where in if the all cases are false then the block of the code will be executed.

syntax:-

switch (expression)

{

case value_1; // statement 1 break;

case value_2: //statement 2 break;

default: //default_statements break;

}


 CODE:
 
    #include <iostream>
    using namespace std;

    int main()
    {
    int a,b,c;
    cout<<"Enter 3 variables: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"a is the largest number: "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is the largest number: "<<endl;
    }
    else if(c>a && c>b)
    {
        cout <<"c is the largest number: "<<endl;
    }
    int month;
    cout<<"Enter a number between 1 to 12"<< endl;
    cin>>month;
    switch (month)
    {
    case 1:
    cout<<"Jan"<<endl;
    break;

    case 2:
    cout<<"February"<<endl;
    break;

    case 3:
    cout<<"march"<<endl;
    break;
    
    case 4:
    cout<<"April"<<endl;
    break;
    
    case 5:
    cout<<"May"<<endl;
    break;

    case 6:
    cout<<"June"<<endl;
    break;

    case 7:
    cout<<"July"<<endl;
    break;

    case 8:
    cout<<"August"<<endl;
    break;
    
    case 9:
    cout<<"September"<<endl;
    break;

    case 10:
    cout<<"October"<<endl;
    break;

    case 11:
    cout<<"November"<<endl;
    break;

    case 12:
    cout<<"December"<<endl;
    break;

    default:
    cout<<"Invalid input"<<endl;

    }
    }

# Output: 

![image](https://github.com/user-attachments/assets/8ce7115a-cdcf-4c1e-9cfe-0be7363267c5)



Conclusion:
This program helps us understand how conditional statements work in C++. These conditional statements can be used to make decisions in your program, specifically it only runs a block of code if a particular situation occurs.


# Experiment 6: - To study and implement C++ decision making statements Loops

Aim:

To learn how to implement decision making statement loops like for, while and do while in C++

Theory:

Decision making loops are useful to execute a block of code repeatedly till a certain number of times ranging from 1 to infinte depening on the condtion or iteraions

In this experiment we learn about 3 decsion making statement loops which are as foolows: -

for() loop
while() loop
do while() loop
1. for() loop
A for loop is a control flow statement that executes a block of code repeatedly for a specified number of iterations. It continues to run the code until a predefined condition is met.

Syntax: -
for(initalization, test condition , counter)

{

// this code will be executed will be iterated depending on the condition

}

2. while() loop
A while loop is a control flow statement that repeatedly executes a block of code as long as a specified condition remains true. It continues to run the code until the condition evaluates to false.

Syntax
while(condition)

{

// code will be executed till the condition is false

}

do while() loop
A do-while loop is a control flow statement that executes a block of code at least once, and then repeatedly executes the code as long as a specified condition remains true. The condition is evaluated after the execution of the code block, ensuring that the code runs at least one time.

Syntax
do

{

\ code will be executed once and then the code will run till while condtion is false

}

while(condition)

CODE: -
     
     #include <iostream>
    
    using namespace std;

    int main() {
    int s[100][100];
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            s[i][j] = i * 100 + j;
        }
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }


    int x = 0;
    cout << "While loop" << endl;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    int y = 0;
    cout << "Do-while loop" << endl;
    do {
        y++;
        cout << y << endl;
    } while (y < 4);


    int a = 0, b = 0;
    cout << "Nested for loop" << endl;
    for (int i = 0; i < 4; i++) {
        a++;
        for (int j = 0; j < 4; j++) {
            b++;
            cout << s[a][b] << " ";
        }
        cout << endl;
    }

    int k=0,l=0;
    while(k<5)
    {
        while(l<5)
        {
            k++;
            l++;
            cout<<k<<endl;
            cout<<l<<endl;
        }
    }

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"testing"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"gnitset"<<endl;
            i++; //prints world hello 5 times 
        }
    }   

    return 0;
    }

Output:

![image](https://github.com/user-attachments/assets/8653d7a3-3d6d-437c-b649-d66597a04578)

![image](https://github.com/user-attachments/assets/c8360304-65a1-4eb0-9791-dfed1f2c56a4)

![image](https://github.com/user-attachments/assets/f435b8e1-ad33-4f53-9594-aba43d7c7790)


Conclusion:

In this experiment we learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language




# EXPERIMENT 7-A ARRAYS

 AIM:

To study and implement C++ Arrays 

SOFTWARE USED: VS Code


THEORY:

In computer science, an array is a data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key.
Arrays have continous memory allocation
In C++ language, the array has a fixed size meaning once the size is given to it, it cannot be changed i.e. you can’t shrink it nor can you expand it. The reason was that for expanding if we change the size we can’t be sure ) that we get the next memory location to us for free. The shrinking will not work because the array, when declared, gets memory statically allocated, and thus compiler is the only one that can destroy it. 
For example: -
If an array is of the integer datatype, then: -
1. The array will contain only integer datatype values and variables
2. If the first element memory address is allocated at 1000 then the 2nd element will have the memory address as 1004
3. The array indexing will start at 0, so if u want ot access the first element of lets say array arr, it will have to be called at either the value of arr[0] or via reference(address of the first element)

 Applications of Array Data Structure: -
1. To represent data in matrix form, a vector or a tabular form
2. To store data for processing
3. Implementing data structures such as queues and stacks as well dynamic memeory allocation like linked lists and trees


 Array Operations: -
1. __Traversal__ : Visiting each element of an array in a specific order (e.g., sequential, reverse).
2. __Insertion__ : Adding a new element to an array at a specific index.
3. __Deletion__ : Removing an element from an array at a specific index.
4. __Searching__ : Finding the index of an element in an array.

 Types of arrays: -
1. One dimensional arrays
2. Multi dimensional arrays


# CODE:


# CODE OUTPUT:



Conclusion:

We learnt how to implement arrays and its operations in C++ programming languages



# EXPERIMENT 7-B STRINGS 

 AIM:

To study and implement C++ strings

SOFTWARE USED: VS Code

 THEORY

A string is a datatype having a sequence of characters used to represent text. Strings are commonly used for storing and manipulating textual data in computer programs. They can be manipulated using various operations like concatenation, substring extraction, and comparison.

In most programming languages, strings are treated as a distinct data type. This means that strings have their own set of operations and properties. They can be declared and manipulated using specific string-related functions and methods.

 Application of strings

1. Hashing and encryption of data: - Random strings are generated to secure data or encrypt data
2. Data representation
3. Database operation
4. Web developmenent

 Operations of strings: -
1. Find the length of a string 
2. Accessing Characters	from a string using its indexing value
3. Concating or merging of 2 strings 
4. Appending and Concatenating Strings	
5. comparing 2 strings

# CODE: 

# CODE OUTPUT:

Conclusion:

In this experiment we learnt how to implement string and its operations like sorting, searching, etc.





