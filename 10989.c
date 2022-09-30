#include <stdio.h>

int array[10001];

int main(void) {
	
	int N;
	int value;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &value);
		array[value]++;
	}
	
	for(int i = 0; i < 10001; i++){
		for(int j = 0; j < array[i]; j++)
			printf("%d\n", i);
	}

	return 0;
}
