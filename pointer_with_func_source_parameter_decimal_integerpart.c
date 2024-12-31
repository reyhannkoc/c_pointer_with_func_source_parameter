/*Write a program that takes real numbers as input and finds the integer and decimal parts of the entered real number. 
Real number entry must be continued until a negative number is entered. Find the integer and decimal parts of a real number in a function. 
This function will take a positive real number as a parameter and return it by finding the integer and decimal part of this real number.*/
#include <stdio.h>
void f(double a, int *x, double *y);
int main(){
    double a,c;
    int b;
    
    while(1){
        printf("\nenter a reel number: ");
        scanf("%lf",&a);
        if(a<0){
            break;
        }
        
        f(a,&b,&c);
        printf("\n%d",b);
        printf("\n%.4lf",c);
    }
    return 0;

}
void f(double a, int *x, double *y){
    *x = (int)a;
    *y = a - *x;


}