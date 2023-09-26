#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    
    scanf("%lld %lld", &a, &b);
    
    c = labs(a - b);
    
    printf("%lld\n", c);

    return 0;
}
