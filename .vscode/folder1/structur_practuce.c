// #include<stdio.h>
// struct student{
//     char name[10];
//     int RollNo;
//     float marks;
// };
// int main (){
//     struct student s1[5];
//     for(int i=0;i<5;i++){
//         printf("Entter your name");
//         scanf(" %s",s1[i].name);
//         printf("Enter Roll No: ");
//         scanf("%d", &s1[i].RollNo);
//         printf("Enter Marks: ");
//         scanf("%f", &s1[i].marks);
//     }
//     printf("\nstudent Details:\n");
//     for(int i=0;i<5;i++){
//         printf("Name: %s, Roll No: %d, Marks: %.2f\n", s1[i].name,
//              s1[i].RollNo, s1[i].marks);
//     }
//     }

// #include<stdio.h>
// struct employee{
//     char name[20];
//     int id;
//     int salary;
// };
// int main(){
//     struct employee s1[5];
//     for(int i=0;i<5;i++){
//         printf("Entter your name");
//         scanf(" %s",s1[i].name);
//          printf("Enter id: ");
//         scanf("%d", &s1[i].id);
//          printf("Enter salary: ");
//          scanf("%d", &s1[i].salary);
//     }
//     printf("\nemployee salary: \n");
//     for (int i=0;i<5;i++){
// printf("name:  %s,id: %d,salary: %d",s1[i].name,
//               s1[i].id,s1[i].salary);
// }
// }

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
    printf("\ncity: %s,pincode: %d\n",s1.city,s1.pincode);
    printf("student information:\n");
    for (int i=0;i<4;i++){
    printf("\nname: %s,Rollno: %d,Address:\n ",s2[i].name,s2[i].RollNo,s2[i].Address);
}
return 0;
}

