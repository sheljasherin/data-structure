
#include <stdio.h>

void sparse(int a[20][20], int r, int c, int s[20][3]);

int main() {   
    int r, c, i, j, s[20][3], a[20][20];
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix elements are:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    sparse(a, r, c, s);
    return 0;
}

void sparse(int a[20][20], int r, int c, int s[20][3]) {
    int i, j, k = 1;
    s[0][0] = r;
    s[0][1] = c;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != 0) {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
        }
    }
    s[0][2] = k-1;
    printf("The sparse matrix is:\n");
    c = s[0][2];
    for(i = 0; i <= c; i++) {
        printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
    }
}
