#include<stdio.h> 
#include<string.h> 
 
int main() 
{ 
    char name[100]; 
    int i=0; 
     
    strncpy(name, "Welcome To Magical World", 100); 
    printf("Actual String: %s\n", name); 
    printf("\n\nWords at Each Line:\n\n"); 
    while(name[i]!='\0'){ 
        if(name[i]==' ') 
            printf("\n"); 
        else 
            printf("%c",name[i]); 
        i++; 
    } 
 
    return 0; 
} 