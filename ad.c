#include<stdio.h>
#include<conio.h>

int main()

{
	int arr[20] = {0} , j ,  n , p , i;
	// size of elements //
	printf("Enter the number of elements you want :-");
	scanf("%d",&n);
	printf("Enter elements :-");
	// Here enter the actual number of elements //
	for(j=0;j<n;j++)
	scanf("%d",&arr[j]);
	// printing the actual numbers along with there addresess //
	printf("Elements are:-\n");
	for(j=0;j<n;j++)
	printf("%d\n" "%u",arr[j],&arr[j]);
	
	
	
}

