/*Read two integer values ​​in a function and return the sum, product, quotient and difference 
of these values ​​as source parameters to the main() function and display them on the screen.*/
#include <stdio.h>
void f(int a, int b, int *sum, int *multiply, double *diivide, int *subtract);
int main(){
    double divide;
    int sum, multiply, subtract;
    int x,y;
    printf("enter two integer: ");
    scanf("%d%d",&x,&y);
    f(x, y, &sum, &multiply, &divide, &subtract);
    printf("\nsum: %d",sum);
    printf("\nproduct: %d",multiply);
    if(y==0){
        printf("\ndivide: undefined (division by zero)");
    }
    else{
        printf("\ndivide: %.2lf",divide);
    }
    printf("\ndifference: %d",subtract);
    return 0;
    
}

void f(int a, int b, int *sum, int *multiply, double *divide, int *subtract){
    *sum = a + b;
    *multiply = a * b;
    if(b!=0)
       *divide = a / b;
    else
        printf("undefined");
    *subtract = a - b;
}