#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age;
    printf("Please Enter Your Age\n");
    scanf("%d",&age);
    if(age > 18)
    {
        printf("Age is Greater Than 18 You're In");
    }
    if(age == 18)
    {
        printf("Congrats you're 18");
    }
    if(age < 18)
    {
        printf("Sorry, Come Again!");
    }
    return 0;
}
