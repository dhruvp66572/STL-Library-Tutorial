#include <stdio.h>

int main()
{
    char a,b;
    char d[5];

    

    printf("Enter D : ");
    scanf("%s",&d);
    getchar();

    printf("Enter A : ");
    scanf("%c",&a);
    getchar();

    printf("Enter B : ");
    scanf("%c",&b);

    printf("A = %c B = %c\n",a,b);

    if (a == 'y' && b == 'y' && d == "yes")
    {
        printf("\nBoth Pass");
        printf(d);
    }
    else if (a == 'y' && b == 'n')
    {
        printf("\na Pass");
    }
    else if (a == 'n' && b == 'y')
    {
        printf("\nb Pass");
    }
    else if (a == 'n' && b == 'n')
    {
        printf("\nFail");
    }
    
    


    return 0;
}
