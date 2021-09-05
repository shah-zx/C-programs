#include<iostream>
using namespace std;

int main()
{
int num;
cout<<"enter number";
cin>>num;
if(num%2==0){

goto me;
}
else{
	cout<<"odd number";
}
me :
	cout<<"even number";
	return 0;

}

