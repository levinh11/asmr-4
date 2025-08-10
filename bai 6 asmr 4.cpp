#include <stdio.h>

int main(){
	int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if(n<0){
    	printf("ko phai so Fibonacci");
	}else{
		if(n==0){
			printf("la so Fibonacci thu 0 ");
		}else{
			if(n==1){
				printf("la so Fibonacci thu 1");
			}else{
				if(n>=2){
					int i=2;
					int f0 = 0, f1 = 1, fn;
					while (i <= n) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            i++;
        }
        printf("So Fibonacci thu %d la: %d\n", n, fn);
				}
			}
		}
	}
}