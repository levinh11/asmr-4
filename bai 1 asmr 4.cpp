#include <stdio.h>
int main(){
	int n;
	printf("nhap so n:");
	scanf("%d",&n);
	int i=1;
	while(i<n){
		printf("%d ", i);
		i+=2 ;
	}
}