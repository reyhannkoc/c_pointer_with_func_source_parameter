/*The function takes a character as a parameter and the number character is 1; 2 if alphabetic character; 
The special character returns 3 function values. Write a program that returns the result of 
this function as a source parameter.*/
#include <stdio.h>
#include<ctype.h>
void f(char *a);
int main(){
    char x;
    printf("enter a chracter: ");
    scanf("%c",&x);
    f(&x);
    return 0;

}
void f(char *a){
    if (isdigit(*a))
       printf("\n 1");
    else if (isalpha(*a))
       printf("\n 2");
    else  
       printf("\n 3");
}