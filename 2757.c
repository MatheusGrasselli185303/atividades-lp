Matheus Grasselli dos Santos
RA: 185303
Data: 16/06/2026

#include <stdio.h>

int main() {
int A, B, C;

while (scanf("%d", &A) != EOF) {
    scanf("%d", &B);
    scanf("%d", &C);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
}

return 0;
}
