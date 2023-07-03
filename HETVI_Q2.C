#include<stdio.h>
#include<conio.h>

void main(){
int n,i;
int sum=1;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

 for(i=1;i<=n;i++){
    sum=sum*i;
}
   printf("The factorial is : %d",sum);

getch();
}