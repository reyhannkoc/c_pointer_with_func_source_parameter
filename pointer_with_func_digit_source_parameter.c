/*Read a three-digit integer and send it as a parameter to the f() function. 
In the f() function, we separate the integer into its digits and send it back to the main() function as a parameter 
and display it on the screen.*/
#include <stdio.h>
void f(int x, int *a, int *b, int *c);
int main(){
    int x,a,b,c;
    printf("enter a three-digit integer: ");
    scanf("%d",&x);
    f(x, &a, &b, &c);
    printf("\nhundereds place: %d",a);
    printf("\ntens place: %d",b);
    printf("\nones place: %d",c);  
    return 0;
}
void f(int x, int *a, int *b, int *c){
    *c = x % 10;
    x = x / 10;
    *b = x % 10;
    x = x / 10;
    *a = x;
}