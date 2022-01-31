#include<iostream>
using namespace std;

void change(int data);
int main()
{
	int data =3;
	change(data);
	cout<<"value of data is "<<data<<endl;
	return 0;
}
void change(int data){
	data=5;
}

