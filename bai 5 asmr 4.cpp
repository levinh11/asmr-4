#include <stdio.h>
int main(){
	int n, i=2 ;
	printf("nhap gia tri n:");
	scanf("%d",&n);
    int isprime=1;

    if (n <= 1) {
       isprime = 0;
    } else {
        while (i * i <= n) {
            if (n % i != 0) {
            	isprime=1;
            }
            i++;
        }
    
}
    if (isprime){
    	        printf("%d la so nguyen to.", n);

	}
    else{
	printf("%d khong phai so nguyen to.", n);
}

}