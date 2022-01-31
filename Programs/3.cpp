#include<iostream>
using namespace std;


class person {                     // here we have made a class by the name person //

	char name[30];                  // these are the objects //
	int age;
	         public:                    // this is access specifier // // there are mainly three:- private , public , protected //
	                void getdata (void);      // this is user defined function ,  we put for those statements which include getting values from user //
                     void display (void);      //  this is user defined function , we are printing statements by using this function //
};

      void person :: getdata(void)    // It is scope resolution operator , which is used to define the function outside the class and to access a class's
                                     // static variables................                                                               //
      {
      	cout<<"Enter your name";
      	cin>>name;
      	cout<<"Enter your age";
      	cin>>age;
	  }
	  void person :: display(void)    // same as above //
	  {                                // same as above //
	  	cout<<"Your name is: "<<name;
	  	cout<<"Your age is: "<<age;
	  }
	  
	  int main()
	  {
	  	person p;
	  	p.getdata();
	  	p.display();
	  	
	  
	  return 0;
}

