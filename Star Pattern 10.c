#include <stdio.h>
int main()
{
    int rows,columns,n,space;
    printf("Enter the number:");
    scanf("%d",&n);
    for(rows=n;rows>=1;rows--)
        {
          for(space=1;space<=(n-rows);space++){
            printf(" ");
          }
        for(columns=1;columns<=2*rows-1;columns++)
        {
            printf("*");
        }
    printf("\n");
        }
}
