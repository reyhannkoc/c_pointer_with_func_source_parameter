/*Write a function to find the perimeter and area of ​​a rectangle. 
In the function, take the width and height of the rectangle as value parameters and 
return the perimeter and area as source parameters.*/

#include <stdio.h>
void f(int x, int y, int *perimeter, int *area);
int main(){
    int a,b,perimeter,area;
    printf("enter widht and height: ");
    scanf("%d%d",&a,&b);
    f(a, b, &perimeter, &area);
    printf("\nperimeter: %d",perimeter);
    printf("\narea: %d",area);
    return 0;
}
void f(int x, int y, int *perimeter, int *area){
    *perimeter = 2*(x+y);
    *area = x*y;
}
