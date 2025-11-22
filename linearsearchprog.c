#include<stdio.h>
void linearsearchP(int LS[],int size,int itemsearch );
void linearsearchP(int LS[],int size,int itemsearch )
{
int i,flag=0;
for (i=0;i<=size-1;i++)
{
    if(LS[i]==itemsearch)
{
flag=1;
printf("item found at index %d\n",i);
}
}
if(flag==0)
{
printf("item not found \n");

}
}
int main()
{
printf("program start\n");
int linearArray[]={1,3,5,7,11,13,17};
linearsearchP(linearArray,5,7);
printf("program end \n");
    return 0;
}













