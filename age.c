#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

  age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
   
  return 0;
}