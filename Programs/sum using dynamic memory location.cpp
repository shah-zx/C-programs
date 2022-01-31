#include<iostream>
using namespace std;

int main()
{
	int length,sum =0;
	cout<<"enter the number of students"<<endl;
	cin>>length;
int *marks = new int [length];
cout<<"enter the marks of the students"<<endl;

for(int i=0;i<length;i++){
	cin>>*(marks+1);
}
for(int i=0;i<length; i++){
	sum+=*(marks+1);
}
cout<<"sum is"<<sum<<endl;
return 0;
}

