#include<iostream>
#include<ctime>
using namespace std;


int main()

{
	time_t now = time(0);
	cout<<"number of seconds since january 1 1970"<<now<<endl;
	tm *ltm = localtime(now);
	
	cout<<"year"<<1970+ltm->tm_year<<endl;
    cout<<"month"<<1970+ltm->tm_mon<<endl;
	cout<<"day"<<1970+ltm->tm_mday<<endl;
	cout<<"time"<<1970+ltm->tm_hour<<endl;
	
	cout<<l+ltm->tm_min<<endl;
	cout<<l+ltm->tm_sec<<endl;
	
	
}



