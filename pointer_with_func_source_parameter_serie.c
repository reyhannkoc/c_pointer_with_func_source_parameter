/* problems book   chapter 7   question 19*/ 

#include <stdio.h>
void f(int a, double *s);
int main(){
    int x;
    double s;
    printf("enter a positive integer: ");
    scanf("%d",&x);
    f(x,&s);
    printf("\nserie: %.4lf",s);
    return 0;

}
void f(int a, double *s){
    *s = 0;
    
    for(int i=1; i<=a; i++){

        int top=0;
        double m=1;

        for(int j=1; j<=i; j++){
            top += j;
        }
        for(int k=1; k<=i; k++){
            m *= k;
        } 
        *s += (double)top / m;
    }


}