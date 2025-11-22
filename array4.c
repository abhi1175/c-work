#include<stdio.h>
int main(){
int count,size;
printf("enter the size");
scanf("%d",&size);
int rollnum[size];
char name[size][20];
for(count=0;count<size;count++)
{
printf("enter the rollnumber:");
scanf("%d",&rollnum[count]);
printf("enter the name:");
scanf("%s",&name[count]);
}
for(count=0;count<size;count++)
{
printf("rollnumber: %d\n,rollnum[count]");
printf("%s\n",name[count]);

}

    return 0;
}
