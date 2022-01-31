#include<iostream>
main()
void fun(struct node* start)
{
	if(start == NULL)
	return;
	printf("%d ", start->data);
if(start->next != NULL)
fun(start->next->next);
printf("%d ", start->data);
}

