#include<iostream>
using namespace std;
int max(int num1,int num2);


int main()
{
	int a=50;
	int b=100;
	int rest;
	
	rest= max(a,b);
	cout<<"max value is "<<rest<<endl;
	return 0;
}
int max(int num1,int num2){

	int result;
	if (num1>num2)
	result = num1;
	else
	result = num2;
	return result;
}


             //strcat()
                  //memcpr()


