#include<iostream>
using namespace std;

int main()
{
	
char grade ='d';
switch(grade){
	case 'a':
		cout<<"excellent"<<endl;
    case 'b':
	cout<<"good"<<endl;
	break;
    case 'c': 
     cout<<"well done"<<endl;
     case 'd':
     	cout<<"you passed"<<endl;
break;
default:
	cout<<"not graded"<<endl;
}
cout<<"your grade is:"<<grade<<endl;

return 0;

}

