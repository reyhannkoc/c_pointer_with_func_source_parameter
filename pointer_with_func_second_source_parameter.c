/*Read how many seconds a plane ride takes and send this value to the f() function.
Convert the second value that comes as a parameter in the f() function to hours, minutes, seconds 
and send these values ​​back as a source parameter.
In the main function, display these values ​​on the screen.*/

#include <stdio.h>
void f(int s, int *h, int *m, int *se);
int main(){
    int s,h,m,se;
    printf("enter the time in second: ");
    scanf("%d",&s);
    f(s, &h, &m, &se);
    printf("\n%d hours %d minutes %d seconds",h,m,se);
    return 0;
}
void f(int s, int *h, int *m, int *se){
    *h = s / 3600;
    s = s % 3600;
    *m = s / 60;
    s = s % 60;
    *se = s;
    
}