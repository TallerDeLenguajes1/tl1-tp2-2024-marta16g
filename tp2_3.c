#include <stdio.h> 
#include <time.h>
#define N 5
#define M 7

int main()
{
   // srand(time(NULL));
    int i, j;
    int mt[N][M], *ptrmt;
    ptrmt = mt;

    for (i = 0; i < N; i++)
    {

        for (j = 0; j < M; j++)
        {
            *(ptrmt) =1 + rand() % 100;
            printf("%3d", *ptrmt);
            ptrmt++;
        }
        printf("\n");
    }


printf("--matriz -- \n");
    

        for (i = 0; i < N; i++)
    {

        for (j = 0; j < M; j++)
        {
            
            printf("%3d", mt[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}