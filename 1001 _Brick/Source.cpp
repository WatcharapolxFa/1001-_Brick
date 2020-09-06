#include <stdio.h>
#include <stdlib.h>
int main()

{
    printf(" InPut \n\n");
    struct area
    {
        int N, M, i, j, k;
        char brick[21][21];
        int block[21];

    }Brick;





    scanf("%d %d", &Brick.N, &Brick.M);



    for (Brick.i = 0; Brick.i < Brick.N; Brick.i++)

        scanf("%s", Brick.brick[Brick.i]);

    for (Brick.i = 0; Brick.i < Brick.M; Brick.i++)

        scanf("%d", &Brick.block[Brick.i]);



    for (Brick.j = 0; Brick.j < Brick.M; Brick.j++)

        if (Brick.block[Brick.j] > 0)
        {

            for (Brick.i = 0; Brick.i < Brick.N, Brick.brick[Brick.i][Brick.j] == '.'; Brick.i++);

            for (Brick.k = 0; Brick.k < Brick.block[Brick.j]; Brick.k++)

            {

                Brick.brick[Brick.i - 1][Brick.j] = '#';

                Brick.i--;

                if (Brick.i == 0)

                    break;

            }

        }printf("\n\nOutPut \n\n");



        for (Brick.i = 0; Brick.i < Brick.N; Brick.i++)

            printf("%s\n", Brick.brick[Brick.i]);



        return 0;

}
