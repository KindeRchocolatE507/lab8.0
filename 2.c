#include <stdio.h>
int fib(int a){
if(a<0) return -1;
if(a==1) return 1;
if(a==0) return 0;
else return fib(a-1)+fib(a-2);
}
int main(){
int a;
scanf("%d",&a);
if(fib(a)>=0) printf("число фибоначчи номер %d равен %d\n", a, fib(a));
else printf("Ошибка: введенное число отрицательно.");
}
