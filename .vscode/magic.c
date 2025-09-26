#include<stdio.h>
int sumOfDigits(int n){
    int sum=0;
    while (n>0){
        sum+= n % 10;
        n /=10;
    }
    return sum;
}
int main(){
    int num, result;
    printf("Enter a number:");
    scanf("%d", &num);
    result = num;
    while (result > 9){
        result = sumOfDigits(result);
    }
    if (result == 1) {
        printf("%d is a magic number.\n",num);
    }
    else {
        printf("%d is NOT a magic number.\n",num);
    }
    return 0;
}