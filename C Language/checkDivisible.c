#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
     if(n%5==0) printf("Yes , Divisible By 5");
     else  printf("No, Not Divisible by 5");
    return 0;
}