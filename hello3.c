#include<stdio.h>
int main(){
    //Explicit type conversion
  // implicit type conversion \ (type)expression
double var1=1.7;
int add=(int)var1+3; // var1 is converted to int before addition
printf("Addition=%d\n",add); 
return 0;
}