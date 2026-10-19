#include <stdio.h>
int countdown(int n);
int countdown(int n){if (n<0)
    return 1;
    printf("%d\n",n);
    countdown(n-1);
return 0;}
int main(){
    countdown(8);
    return 0;
}