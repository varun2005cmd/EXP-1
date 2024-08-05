                                                                         ALL EXPERIMENTS C++ and Data structures 

# EXPERIMENT 1 Downloading VS code ,(hello world and calculator program)

1. Download VS Code Installer:

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



# EXPERIMENT 2 To study and implement C++ Program Structure (Data types): -
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




# EXPERIMENT 3 To study and implement operators in C++ : -
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




# EXPERIMENT 4 To study and implement C++ Bitwise Operators: -
```
#include<iostream>
using namespace std;

// Varun Pendem
// PRN: 23070123149

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

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        // for inside while

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }    
    return 0;
}

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

Aim: Implementing the BITWISE operators like AND, NAND, XOR on 2 numbers

Theory:
•	It demonstrates bitwise operations, including AND, OR, NOT, and XOR, and prints the results. The final values of the variables are also printed. This program highlights basic C++ syntax and operations.¬¬¬
Bitwise operators are used to perform operations on individual bits of integer data types. These operators are fundamental in low-level programming, enabling efficient manipulation of data at the bit level. In C++


Output:

![image](https://github.com/user-attachments/assets/a97a2db3-4388-4ed4-b599-b5267f518507)


# Experiment 5: -To study and implement C++ decision making statements
Aim

To learn how to implement decision making statements in C++ programming language

Theory

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

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        // for inside while

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }    
    return 0;
}



