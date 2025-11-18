#include<stdio.h>
#include<limits.h>
int myAtoi(char *s){
    int i=0;
    int sign=1;
    long result=0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-'||s[i]=='+'){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }
    while (s[i]>='0'&& s[i]<='9'){
        int digit=s[i]-'0';
        if(result>(LONG_MAX/10)||(result==LONG_MAX/10 &&digit>LONG_MAX%10)){
            return (sign==1)? INT_MAX:INT_MIN;
        }
        result=result*10+digit;
        i++;
    }
    return (int)(result*sign);
}
int main(){
    char str1[]="  -42";
    char str2[]="4193 with word";
    char str3[]="5464386467";
    printf("%d\n",myAtoi(str1));
    printf("%d\n",myAtoi(str2));
     printf("%d\n",myAtoi(str3));
     return 0;
}