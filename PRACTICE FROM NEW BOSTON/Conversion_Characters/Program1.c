/*
Conversion characters
making printf more powerful
%s is the placeholder for string sun
saving sun inside the %s
substituting %s with string sun
number without decimal places %d
number with decimal places %f
*/
#include<stdio.h>
int main()
{
    /*
    printf("%s is the brightest planet on the this galaxy", "Sun");*/
    //printf("%s is the brightest planet on %s galaxy", "Sun","Milkyway");
    //printf("last night i counted upto %d stars",100);
    printf("PI value is %f\n", 3.141526);
    printf("PI value is %.2f\n", 3.141526);
    printf("PI value is %.4f\n", 3.141526);

    return 0;
}
