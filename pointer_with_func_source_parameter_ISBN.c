#include <stdio.h>
void f(int sum, char *end);
int main(){
    char end;
    int x;
    int sum = 0;
    for(int i=1; i<=9; i++){
    printf("%d-->  ",i);
    scanf("%d",&x);

    sum += i*x;
    }
    f(sum, &end);
    printf("10--> %c",end);

    
    return 0;

}
void f(int sum, char *end){
    int k;
    k = sum % 11;
    if(k<=9 && k>=0){
        *end = k + '0'; // covert integer to character
    }
    else{
        *end = 'X'; 
    }

}