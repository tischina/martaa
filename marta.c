#include <stdio.h>
#define N 4
#define M 5

int main()
{
    int i = 0, j = 0;
    int A[N][M] = {
        {3,-16,2,12,-5},
        {0,8,-9,2,2},
        {28 - 18,1,1,1},
        {0,17,0,14,0 },
    };
    int k = 0;

    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
        {
            if (A[i][j] == 0) {
                k++;
                break;
            }
        }
    }
    printf("Kolichestvo stolbtsov s 0=%d\n", k);
 
    int r = 0, index;
    i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            int counter = 0, z = 0;
            for ( z = 0; z < N; z++)
                if (A[i][j] == A[i][z])
                    counter++;
            if (counter > r)
            {
                r = counter;
                index = i;
            }
        }
    }
    printf("Index stroki s naibolishim chislom povtoreaiushikhsea elementov=%d", index);
    return 0;
}
