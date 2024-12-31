#include <stdio.h>
void f(int a, int *a5, int *a10, int *a20, int *a50, int *a100, int *a200){
    *a200 = a / 200;
    a = a % 200;
    *a100 = a / 100;
    a = a % 100;
    *a50 = a / 50;
    a = a % 50;
    *a20 = a / 20;
    a = a % 20;
    *a10 = a / 10;
    a = a % 10;
    *a5 = a / 5;
    a = a % 5;

}
int main() {
    int a, a10, a5, a20, a50, a100, a200;
    printf("enter amount of money: ");
    scanf("%d",&a);
    
    f(a, &a5, &a10, &a20, &a50, &a100, &a200);

    printf("200--> %d\n",a200);
    printf("100--> %d\n",a100);
    printf("50--> %d\n",a50);
    printf("20--> %d\n",a20);
    printf("10--> %d\n",a10);
    printf("5--> %d\n",a5);

    return 0;
}