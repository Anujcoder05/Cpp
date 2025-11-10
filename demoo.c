#include <stdio.h>
int main()
{
    int a = -1,b = 1, c;
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    for(int x = 1; x <= n; x++) {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0; 
}