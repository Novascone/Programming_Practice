#include <stdio.h>


void update(int *a,int *b) {
    int temp_a = *a;
    *a = *a + *b;
    *b = temp_a - *b;
    if(*b < 0) {
        *b = -*b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}