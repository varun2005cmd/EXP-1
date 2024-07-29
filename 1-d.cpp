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
