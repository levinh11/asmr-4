#include <stdio.h>
int main(){
	int n, i = 1, sum = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    while(i<n){
    		if (n % i == 0){
			
            sum += i;
        }
            i++;
	}
	if (sum == n) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }

}