#include <stdio.h>

int main()
{
    int n = 4;
    float d = 1, B[n][n]={
        {1, 0, 1, 3},
        {0, 2, 3, 4},
        {7, 1, 2, 0},
        {1, 1, 1, 1}
    };
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            if (i==j || (i+j)==(n-1)){
                d*=*(*(B+i)+j);
            }
        }
    }
    printf("%f", d);
    return 0;
}
