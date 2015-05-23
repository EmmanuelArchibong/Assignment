/*
* number1.cpp
* Name: [Archibong Emmanuel Orok]
* Department: [Mathematics]
* Matric No: [45015658BF]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include<iostream>
using namespace std;

int main()
    {
    int num1, num2;
 
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
 
    if(num1 % num2==0) 	
    cout<< num1 <<"is a multiple of" <<num2<<endl;
 
    if(num1 % num2!=0)
    cout<< num1 <<"is not a mutiple of" <<num2<<endl;
 
 return 0;
  }
