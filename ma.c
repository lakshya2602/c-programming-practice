#include <stdio.h>
void getmax();
int square(k);
int checkdiv7(i);
int main(){int a,b;
scanf("%d %d",&a,&b);
printf("Square of %d is %d",a,square(a));
printf("Square of %d is %d",b,square(b));
printf("Larger:%d",getmax());
checkdiv7(a);
checkdiv7(b);
return 0;
}
void getmax(){
    if (a>b)
    int l=a;
    else 
    l=b;
return l;
}
int square(k){
    s=k*k;
    return s;
}
int checkdiv7(i){
    if (i%7==0)
    printf("%d is divisible by 7 ",i);
    else 
    printf("%d is not divisible by 7 ",i");
}