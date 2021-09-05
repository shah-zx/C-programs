#include<iostream>
using namespace std;
int main()
{
	int res;
	double d=5.0;
	cout<<sizeof(d);
	res= (6<=6) || (5<3);
	cout<<res<<endl;
	res = (6<=6) && (5<3);
	cout<<res<<endl;
	res=! (6<=6);
	cout<<res<<endl;
	
	return 0;
}
//syntax//
//(exp1) ? exp2: exp3//
//if exp1 is true then only exp2 will be executed or if it is false then it will execute to exp 3// 
