#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The multiplication table : ");
    for (i = 1; i <= 10; ++i) {
        
        printf("%d X %d = %d",n,i,n * i);
    }
    
    return 0;
}
