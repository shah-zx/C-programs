#include<iostream>
using namespace std;


class person {
	char name[30];
	int age;
	         public: 
	                void getdata (void);
                     void dispay (void);
};

      void person :: getdata(void)
      {
      	cout<<"Enter your name";
      	cin>>name;
      	cout<<"Enter your age";
      	cin>>age;
	  }
	  void person :: display(void)
	  {
	  	cout<<"Your name is: "<<name;
	  	cout<<"Your age is: "<<age;
	  }
	  
	  int main()
	  {
	  	person p;
	  	p.getdata;
	  	p.display;
	  	return 0;
	  }

