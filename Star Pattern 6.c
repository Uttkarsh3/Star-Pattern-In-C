#include <stdio.h>
int main()
{
    int rows,columns,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++){
        for(columns=1;columns<=n;columns++){
                if(rows==1 || columns==1 || rows==n || columns==n || columns==rows || columns==n-rows+1 ){

            printf("* ");
                }
                else{
                printf("  ");
        }
        }
    printf("\n");
    }
    return 0;
}

