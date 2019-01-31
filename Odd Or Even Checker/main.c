#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,rem;

    printf("Enter The Number:");
    scanf("%d",&no);

    rem=no%2;
    if(rem==1) {
        printf("odd");
    }
    else
        printf("Even");



    return 0;
}
