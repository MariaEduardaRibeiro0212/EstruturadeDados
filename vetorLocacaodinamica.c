#include <stdio.h>

int main (void){
	int v[5] = {10, 23, 56, 7, 32};
	int i;
	
	for (i = 0; i < 5; i++){
		printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
	}
	
	return 0;
}
