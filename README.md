                                                                         ALL EXPERIMENTS C++ and Data structures 

# EXPERIMENT 1

EXPERIMENT-1a
Printing “Hello World”
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
Aim:
1.	Introduction to Output: Uses “using namespace std” to print text to the console, helping beginners understand basic output in C++.

EXPERIMENT 1-b
Printing Sum and Average of 2 numbers
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

Theory: 

Sum and Average
1.	Basic Arithmetic Operations: Demonstrates how to perform addition and division to calculate the sum and average of numbers.
2.	Input and Output Handling: Teaches how to take input from the user using namespace std and display results.

EXPERIMENT 1-c
Finding whether the number is odd or even
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

Theory:

Even or Odd
1.	Conditional Statements: Introduces if-else statements to check whether a number is even or odd.
2.	Modulus Operator: Uses the modulus operator % to determine the remainder when a number is divided by 2, crucial for the even or odd check.

EXPERIMENT 1-d
Determining leap years

Theory: A leap year is a year that is evenly divisible by 4 but not by 100, unless it is also divisible by 400. This rule helps to keep our calendar year synchronized with the astronomical year.

The leap year calculation can be summarized as follows:

A year is a leap year if it is evenly divisible by 4.
However, if the year is also evenly divisible by 100, it is not a leap year, unless:
The year is also evenly divisible by 400, in which case it is a leap year.



# EXPERIMENT 2

Data types in C++

Aim: To understand and implement the different data types in C++ 

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

Output:

![image](https://github.com/user-attachments/assets/ad9afc64-0531-4dd1-8c8e-59d9d894262b)




# EXPERIMENT-3

Operators in C++

Aim: to understand the different operators such as arithmetic, logical , BITWISE etc

Theory:

•	This C++ program demonstrates fundamental operations on integer variables, including arithmetic, comparison, and bitwise operations.

•	Initially, variables a, b, c, d, and e are assigned values, and a series of arithmetic operations are performed on them, such as addition (a += 55), increment (a++), division (b /= 10), multiplication (c *= 15), subtraction (d -= 20), modulus (e %= 24), and decrement (e--). The program then uses comparison operations to check and print if a is greater than b and if d equals zero.

Output:

![image](https://github.com/user-attachments/assets/59f9776c-fb29-45a1-8745-649c4344f975)




# EXPERIMENT-4

Bitwise Operators in C++

Aim: Implementing the BITWISE operators like AND, NAND, XOR on 2 numbers

Theory:
•	It demonstrates bitwise operations, including AND, OR, NOT, and XOR, and prints the results. The final values of the variables are also printed. This program highlights basic C++ syntax and operations.¬¬¬
Bitwise operators are used to perform operations on individual bits of integer data types. These operators are fundamental in low-level programming, enabling efficient manipulation of data at the bit level. In C++


Output:

![image](https://github.com/user-attachments/assets/a97a2db3-4388-4ed4-b599-b5267f518507)



