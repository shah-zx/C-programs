/*local variables
/*global variables

l:- declared inside a fuction
accessible inside the function
ex: - area of circle

g: declared before main  fun
accessible in all funs
formal and actual arg :- \
actual arg: used in fuction call
formal arg: used in function  defn
no. and order of formal args as per actual args

/////////////////// example///////////////////
#include<stdio.h>
#include<conio.h>

float circlearea(float);
int main()
{
	float r;
	float a;
	printf("enter the radius of the circle");
	scanf("%f",&r);
	a = circlearea(r); :- call by value mthd
	printf("\narea of circle is %f", a);
	
	
}
float circlearea (float r) :- frmal argument which is r.

{
float a;
a = 3.14*r*r;
return (a);

}

parameters: -
methods of parameter passingL-
call by value: 
value of variable is passed to the function as a parameter.
value of actual arg is copied into corresponding formal arg.
value of actual par cant be modified
diff memory allocated by both actual and formal parameters.



