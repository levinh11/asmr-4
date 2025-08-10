#include <stdio.h>

int main(){
	int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong co so Fibonacci nao nho hon hoac bang %d", n);
    }else{
    	int f0 = 0, f1 = 1;
    	if(n == 0) {
        printf("So Fibonacci tiep can duoi cua %d la: 0", n);
	}else{
		if(n>0){
			int fn = f0 + f1;
			while (fn <= n) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
    printf("So Fibonacci tiep can duoi cua %d la: %d", n, f1);
		}
	}
}
}