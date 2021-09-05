#include<iostream>
using namespace std;

int main()
{
	int num,i=1,fact=1;
	cout<<"enter a positive integer";
	cin>>num;
	while(i<=num){
		fact *=1;
		++i;
	}
	
	cout<<"factorial of"<<num<<"="<<fact;
    return 0;
    
}


