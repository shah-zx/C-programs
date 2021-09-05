#include<iostream>
using namespace std;

class box{
public:
double length;
double breadth;
double hiegth;
	
	
};
int main(){



box box1;
box box2;
box box3;
double volume = 0.0;

box1.hiegth= 10.0;
box1.length= 6.0;
box1.breadth= 7.0;

box2.hiegth= 10.0;
box2.length= 13.0;
box2.breadth= 14.0;

box3.hiegth= 8.0;
box3.length= 10.0;
box3.breadth= 12.0;

volume = box1.hiegth*box1.length*box1.breadth;
cout<<"volume of box 1"<<volume<<endl;
volume =box2.breadth*box2.hiegth*box2.length;
cout<<"volume of box 2"<<volume<<endl;
volume = box3.hiegth*box3.breadth*box3.length;
cout<<"volume of box 3"<<volume<<endl;

}



