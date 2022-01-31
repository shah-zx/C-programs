/* user defined functions */
 /* 1st : declaration of the function */
 /* syntax : <return_type> <function name>(<parameter list>);
 eg:- float carea(float);
 /*  2nd : function definitioon*/
 /* function header
 /* function body
 function definition
 <return_type><function>(<parameter list>)
 {
 //local variable declarations
 //function code
 }
 eg :- float carea (float r)
 {
 float a;
 a = 3.14*r*r;
 return(a);
}
3rd:  function call:-
syntax :- <accept_ret_value> = <function>(<argument list>);
eg:- area = carea(radius);
return(a);
*/
/*

#include<stdio.h>
#include<conio.h>

float circlearea(float);
int main()
{
	float r;
	float a;
	printf("enter the radius of the circle");
	scanf("%f",&r);
	a = circlearea(r);
	printf("\narea of circle is %f", a);
	
	
}
float circlearea (float r)

{
float a;
a = 3.14*r*r;
return (a);

}


 */
