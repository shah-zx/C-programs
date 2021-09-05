#include<iostream>
using namespace  std;

int main() 
{
	char input , alp = 'A';
	cout<< "enter the upper case you want to print";
	cin>> input;
	for(int i=1;i<=(input-'A'+1);i++)
	{
		for(int j=1;j<=i;j++){
		
		cout<<alp<<"";
	}
	alp++;
	cout<<endl;
	
}
return 0;
}

