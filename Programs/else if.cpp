#include<iostream>
using namespace std;

int main()
{
		int number;
	cout<<"enter a number";
	cin>>number;
	
if(number>0)
{

cout<<"you entered a positive integer"<<number<<endl;
}
else if(number<0){
	cout<<"you entered a negative integer"<<number<<endl;
	
}
else{
cout<<"you entered 0"<<endl;
}
cout<<"this is always executed";
return 0;
}

