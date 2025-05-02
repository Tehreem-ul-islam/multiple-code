#include<stdio.h>
//Use if-else to check weather a numberis even or odd
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
if (num%2==0) {
    printf("%d is even",num);
} else {
    printf("%d is odd",num);
}

}