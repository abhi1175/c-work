//join 2 addresses
#include <stdio.h>
int main(){
printf("program start\n");
int n1,n2;
int* ptr1;
int* ptr2;
int* temp;
ptr1=&n1;
ptr2=&n2;
temp=ptr1+ptr2;
printf("value of add is %d\n",temp);
printf("program end\n");
    return 0;
}