#include<iostream>
using namespace std;
int main()
{
	int a = 20;
	int b= 15;
	int c;
	if(a==b){
		cout<<"line 1 a is equal to b" << endl;
            }
    else 
    {
    	cout<<"line 1 a is  not equal to b" <<endl;
	}
	if(a>b){
		cout<<"line 2 a is greater b" << endl;
            }
    else 
    {
    	cout<<"line 2 a is equal to b" <<endl;
	}
	if(a<b){
		cout<<"line 3 a is  less than b" << endl;
            }
    else 
    {
    	cout<<"line 3 a is not less than  b" <<endl;
	}
	
	a=3;
	b=20;
	if(a<=b){
		cout<<"line 4 a either less thn or equal to b"<<endl;
		
	}
	if(b>=a)
	{
		cout<<"line 5 b is either greater than or equal to b"<<endl;
		
	}
	return 0;
}
