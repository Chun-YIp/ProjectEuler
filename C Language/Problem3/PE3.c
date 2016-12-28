#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    double num = 600851475143;
    int curr;
    for (curr = 2; curr < num; curr++) {
        if(fmod(num, curr) == 0) {
            num /= curr;
        }
    }
    
    printf("%d", curr);
}