/*print all the odd nos from 1 to 'n' using differnt loops. accept value of 'n' from  user*/

#include<stdio.h>

void printodd_for(int n)
{
int i;
printf("Odd numbers upto %d are : ",n);
for(i=1;i<=n;i++)
{
	if(i%2==1)
	printf("\t%d" ,i);
}
}
void printodd_while(int n)
{
	int i = 1;
	printf("using while loop odd numbers upto %d are:" ,n);
	while(i<=n)
	{
		if (i%2==1)
		printf("\t%d",i);
		i++;
	}
	
}



	

int main()
{
	int no;
	printf("enter a no.");
	scanf("%d",&no);
	printodd_for(no);
		printodd_while(no);
	
}

