#include <stdio.h>


int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


int max_of_four(int a, int b, int c, int d) {
    
    int max_val = a;
    
    
    if (b > max_val) {
        max_val = b;
    }
    
    // Compare 'c' with the current maximum
    if (c > max_val) {
        max_val = c;
    }
    
    // Compare 'd' with the current maximum
    if (d > max_val) {
        max_val = d;
    }
    
    // Return the final maximum value
    return max_val;
}
