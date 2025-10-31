#include<stdio.h>
struct Address{
    char city[50];
    int pincode;
};
struct student{
    int RollNo;
    char name[50];
    char Address[100];
};
int main(){
    struct Address s1;
    printf("Enter your city: ");
    scanf("%s",s1.city);

    printf("Enter your pincode: ");
    scanf("%d",&s1.pincode);
    //function
    struct student s2[4];
    for (int i=0;i<4;i++){
          printf("Entter your name: ",i+1);
         scanf(" %s",s2[i].name);

         printf("Enter Roll No: ");
         scanf("%d", &s2[i].RollNo);

         printf("Enter Address: ");
        scanf("%s", &s2[i].Address);
    }
    printf("\ncity: %s,pincode: %d\n",s2.city,s2.pincode);
    printf("student information:\n");
    for (int i=0;i<4;i++){
    printf("name: %s,Rollno: %d,Address: "s2[i].name,s2[i].RollNo,s2[i].Address);
}
return 0;
}