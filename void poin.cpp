#include<iostream>
using namespace std;

int main()
{
	void *ptr;
	float f=2.3;
	ptr = &f;
	
	cout<<&f<<endl;
	cout<<ptr;
	
	return 0;
}
