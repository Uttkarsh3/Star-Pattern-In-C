#include <stdio.h>
int main()
{
    int rows,columns,n,space;
    printf("Enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
        {
          for(space=1;space<=(n-rows);space++){
            printf(" ");
          }
        for(columns=1;columns<=rows;columns++)
        {
            printf("* ");
        }
    printf("\n");
        }
}
