/*Read 10 integers in a function and return the two largest values 
​​among them as source parameters to the main() function 
and display them on the screen.*/
#include <stdio.h>
void f(int *x, int *y);
int main(){
    int a,b;
    f(&a, &b);
    printf("largest number: %d\nsecond largest number: %d",a,b);
    return 0;

}
void f(int *x, int *y){
    int number, largest=0, slargest=0;
    printf("enter ten integer: ");
    for(int i=1; i<=10; i++){
        printf("number %d: ",i);
        scanf("%d",&number);
        if(number>largest){
           slargest = largest; 
           largest=number;
           
        }else if(number>slargest){
            slargest = number;
            
        }
    }
    *x = largest;
    *y = slargest;

}