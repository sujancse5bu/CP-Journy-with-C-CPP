#include <stdio.h>
int main() {
	
	
	long long int num;
	int array[20];
	scanf("%d", &num);
	
	int i = 0;
	while (num > 0) {
		array[i] = num % 10;
		num /= 10;
		++i;
	}
	
	for (int j = 0; j < i; ++j) printf("%d\n", array[j]);
	
	return 0;
}
