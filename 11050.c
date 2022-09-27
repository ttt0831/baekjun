#include <stdio.h>

int main() {
	
	int n, k;
	scanf("%d %d", &n, &k);
	int val = 1;
	
	// n(n-1)(n-2)*..*(n-(r-1));
	for (int a=0; a<k; a++) {
	val *= (n-a);
	}

	// nPr / r(r-1)*..*2*1
	while (k!=0) {
		val /= k;
		k--;
	}
	
	printf("%d", val);
} 
