#include <stdio.h>

int main() {
    int a,b;
    printf("enter value for a&b:\n");
    scanf("%d%d",&a,&b);

    if(b!=0){
      
    int C = a+b;
    printf("Addition is: %d\n",C);

    int D = a-b;
    printf("Subtraction is:%d\n",D);

    int E = a*b;
    printf("Multiplication is:%d\n",E);

    int F = a/b;
    printf("Division is:%d\n",F);
    
    int G = a%b;
    printf("Modulo is:%d\n",G);

  }
  else{
     printf("Division and Modulo by zero are not possible\n");
  }
   
    return 0;
}
