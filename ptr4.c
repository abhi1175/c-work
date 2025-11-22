//we cannot multiply or divide address with any scalar values
#include <stdio.h>
int main(){
printf("program start\n");
int n1,n2;
int* ptr1;
int* ptr2;
int* temp;
ptr1=&n1*7;
ptr2=&n2/9
temp=ptr1*ptr2;
printf("value of ptr1 is %d\n",ptr1);
printf("value of ptr2 is %d\n",ptr2);
temp=ptr1+1;
printf("value of temp(+1) is %d\n",temp);
temp=ptr1-1;
printf("value of temp(-1) is %d\n",temp);
printf("program end\n");
    return 0;
}