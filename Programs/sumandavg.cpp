#include<iostream>      // it is basically a header file that is the part of standard library :- the name stands for input/output stream //
using namespace std;   //  it is a declarative region that provides a scope to the identifiers ( names of functions , variables , etc  //
int main()             // it indicates that the main() can return integer data type , and it is a function   //
{
	int number_1 , number_2 , sum , avg;
	cout<<"Enter the value of number one"<<endl; //it is usedto display the output to the standard output device , it is cout object in C++ is an object
	                                               // of class ostream  //
	cin>>number_1;
	cout<<"Enter the value of number two"<<endl;
	cin>>number_2;                               //it is used to accept the input from the standard input device //
	sum = number_1 + number_2;
	avg= sum/2;
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Average is: "<<avg<<endl;
	
	return 0;                                    //this is optional here , this is only for executing the program and displaying the output // 
	
	
	
}

// comments are given so that user / developer / clients / testing team can uderstand the code one has written //
// used for comments.
