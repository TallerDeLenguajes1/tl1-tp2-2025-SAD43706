#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    #define N 5
    #define M 7
    int i,j;
    int mt[N][M];
    srand(time(NULL));
    int *ptr=&mt[0][0];
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
        mt[i][j]=1+rand()%100;
        printf("%d ", *(ptr+i*M+j));
        }
    printf("\n");
    }

    return 0;
}