#include <stdlib.h>
#include <stdio.h>

int main() {
    int maxValue = 4000000;
    int preValue = 1;
    int sum = 0;
    for(int i = 2; i < maxValue;) {
        if(i % 2 == 0) 
            sum += i;

        int temp = i;
        i += preValue;
        preValue = temp;
    }
    
    printf("%d",sum);
}