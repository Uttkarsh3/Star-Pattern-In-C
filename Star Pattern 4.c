#include <stdio.h>
int main()
{
    int rows,columns,n,k=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++,k=0){
        for(columns=1;columns<=n-rows;columns++){
            printf("  ");
        }
    while(k!=2*rows-1){
            printf("* ");
            k++;
    }
    printf("\n");
    }
    return 0;
}
