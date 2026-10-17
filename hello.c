#include <stdio.h>

int main() {
   int a,is_prime;
   scanf("%d",&a);
   for (int i=2;i<a;i++){
   if (a%i==0){
   is_prime=0;
   break;}
   else 
    is_prime=1;}
if (is_prime==0)
printf("%d is not prime",a);
else 
printf("%d is prime",a);
   return 0;
}