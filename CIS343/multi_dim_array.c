#include <stdio.h>
int main(){
int a[20][20];
for( int i = 1; i < 21; i++){
	int twentier = i * 20 - 20;
	for(int j = 1; j < 21; j++){
		a[i][j] = j + twentier;
		printf("a[%d][%d] = %d\n", i,j, a[i][j] );
}
}

}
