 #include<stdio.h>
int main()
{
    int i,j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 1; j <= 17; j++)
        {
            if ((j>=3-i&&j<=6+i)||(j>=12-i&&j<=15+i))
            {
                printf("*");
            }
            else
            printf(" ");
            
        }
        printf("\n");
    }
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 17; j++)
           {
            if (j>=i+1&&j<=17-i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return(0);
    
}