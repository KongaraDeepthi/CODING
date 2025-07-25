#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    
    double root = sqrt((double)num);
    printf("and sqrt of num %d is %.4f\n", num, root);
    
    return 0;
}