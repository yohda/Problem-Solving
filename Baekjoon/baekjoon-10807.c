#include <stdio.h>

int main() {
    int n, j;
    unsigned char x[201] = {0,};
    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%d", &j);
        x[j+100]++;
    }
    
    n = 0;
    scanf("%d", &n);
    
    printf("%d\n", x[n+100]);

    return 0;
}
