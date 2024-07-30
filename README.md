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

Theory: A leap year is a year that is evenly divisible by 4 but not by 100, unless it is also divisible by 400. This rule helps to keep our calendar year synchronized with the astronomical year.

The leap year calculation can be summarized as follows:

A year is a leap year if it is evenly divisible by 4.
However, if the year is also evenly divisible by 100, it is not a leap year, unless:
The year is also evenly divisible by 400, in which case it is a leap year.



# EXPERIMENT 2

Data types in C++
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



