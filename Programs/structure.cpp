#include<iostream>
using namespace std;


struct person{
	char name[50];
	int age;
	float salary;
	char city[50];
};

int main()

{
person p1;
cout<<"enter your name";
cin.get(p1.name,50);
cout<<"enter your age";
cin>>p1.age;
cout<<"salary";
cin>>p1.salary;
cout<<"city name";
cin>>p1.city,50;

cout<<"\n Display informations"<<endl;
cout<<"name"<<p1.name<<endl;
cout<<"age"<<p1.age<<endl;
cout<<"salary"<<p1.salary<<endl;
cout<<"city"<<p1.city<<endl;
return 0;
}

//struct person{
//name
//address
//salary
//position
//}

