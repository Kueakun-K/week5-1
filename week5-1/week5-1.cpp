#include<stdio.h>
int main() {
	double g[10],c[10],s1,s2=0,s3=0,sum;
	int x;
	printf("Number of subjects : ");
	scanf_s("%d", &x);
	if (x > 0 && x <= 8)
	{
		for (int i = 1; i <= x; i++)
		{
			printf("Grade %d : ", i);
			scanf_s("%lf", &g[i]);
			printf("Credit %d : ", i);
			scanf_s("%lf", &c[i]);
			s1 = g[i] * c[i];
			s2 += s1;
			s3 += c[i];
		}
		sum = s2 / s3;
		if (sum >= 0 && sum <= 4) 
			printf("GPA : %.2lf", sum);	
		else
			printf("ERROR");
	}
	else
		printf("ERROR");
	return 0;
}