#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int sero, garo, inventory, i, j, k, max, min;
    int **height;

    scanf("%d %d %d", &sero, &garo, &inventory);

    // int[]을 배열로 갖는 배열
    height = (int **)malloc(sizeof(int *) * sero);
    for (i = 0; i < sero; i++)
    {
        height[i] = (int *)malloc(sizeof(int) * garo);
    }

    max = 0, min = 256;
    for (i = 0; i < sero; i++)
    {
        for (j = 0; j < garo; j++)
        {
            scanf(" %d", &height[i][j]);
            if (height[i][j] < min)
            {
                min = height[i][j];
            }
            else if (height[i][j] > max)
            {
                max = height[i][j];
            }
        }
    }

    int time = 0, min_time = INT_MAX, block_height = 256;

    // 최고높이에서부터 최저높이까지 층층이 탐색
    for (i = max; i >= min; i--)
    {
        int b = inventory;
        time = 0;

        for (j = 0; j < sero; j++)
        {
            for (k = 0; k < garo; k++)
            {
                int diff = height[j][k] - i;

                if (diff < 0)
                {
                    time -= diff;
                    b += diff;
                }
                else if (diff > 0)
                {
                    time += diff * 2;
                    b += diff;
                }
            }
        }
        // b < 0인 경우는 불가능한 경우.
        if (b >= 0)
        {
            if (time < min_time)
            {
                min_time = time;
                block_height = i;
            }
        }
    }

    printf("%d %d\n", min_time, block_height);

    for (i = 0; i < sero; i++)
    {
        free(height[i]);
    }
    free(height);

    return 0;
}