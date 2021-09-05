#include<iostream>
using namespace std;

int main()
{

float marks[3][2];
int i,j;
for(i=0;i<3;i++)
{
	cout<<"enter marks of students"<<(i+1)<<endl;
	for(j=0;j<2;j++)
	{
		cout<<"subject"<<(j+1)<<endl;
		cin>>marks[i][j];
	}
	for(j=0;j<2;j++)
	{
		cout<<"suject"<<(j+1)<<"i"<<marks[i][j]<<endl;
	}
}
return 0;

}

