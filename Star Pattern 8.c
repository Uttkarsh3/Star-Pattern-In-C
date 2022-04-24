#include <stdio.h>
int main()
{
    int rows,columns,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
        {
        for(columns=1;columns<=n;columns++)
        {
            if(rows<=n-columns)
            {
            printf(" ");
            }
            else
            {
            printf("*");
        }
        }
    printf("\n");
    }
}
