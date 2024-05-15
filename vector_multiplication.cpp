#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	float sum = 0, *vector1, * vector2;

	// input vector size
	printf("Insert vector size: ");
	scanf("%d", &n);

	// allocate memory for vectors
	vector1 = (float*)malloc(n * sizeof(float));
	if (vector1 == NULL) {
		printf("Error! memory not allocated.");
		exit (0);
	}
	vector2 = (float*)malloc(n * sizeof(float));
	if (vector2 == NULL) {
		printf("Error! memory not allocated.");
		exit (0);
	}

	// input vector data
	printf("Insert vector values.\n");
	for (i = 0; i < n; i++) {
		printf("Insert first vector values number %d: ", i + 1);
		scanf("%f", vector1 + i);
		printf("%f\n", *(vector1 + i));
	}

	printf("\n");
	for (i = 0; i < n; i++) {
		printf("Insert second vector values number %d: ", i + 1);
		scanf("%f", vector2 + i);
		printf("%f\n", *(vector2 + i));
	}

	// calculate dot product
	for (i = 0; i < n; i++) {
		sum += *(vector1+i) * *(vector2+i);
		//printf("Sum: %f\n", sum);
		//printf("%f\n", *(vector1+i) * *(vector2+i));
	}

	printf("\n\nSum: %f\n", sum);



	return 0;
}