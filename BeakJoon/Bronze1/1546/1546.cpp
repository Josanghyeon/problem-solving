#include <stdio.h>

int main()
{
    int n, score[1000];
	int max = 0;
	double sum=0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max) max = score[i];
	}
	for (int i = 0; i < n; i++) {
		sum += (double)score[i] / (double)max * 100;
	}
	printf("%.4lf\n", (double)(sum/n));
}