#include <stdio.h>

int main()
{
    int n = 4;
    float d = 1, B[n][n];
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            printf("B[%i][%i] = ", i, j);
            scanf("%f",&B[i][j]);
            if (i==j || (i+j)==(n-1){d*=B[i][j];}
        }
    }
    printf("%f", d);
    return 0;
}
