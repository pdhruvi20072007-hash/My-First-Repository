/*
  Even or Odd   
  Even--> 1
  odd-->0
*/  

#include<stdio.h>

int main (){

int x;
printf("enter value for x:\n");
scanf("%d",&x);

int a = x%2==0;
printf("%d",a);

return 0;
}
