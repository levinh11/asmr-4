#include <stdio.h>
int main(){
	int n;
    int i;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
i =n-1  ;
    while (i >= 0) {
    	
        if (i % 6 == 0) {
            
            break;
        }
        i--;
    }printf("So lon nhat nho hon %d chia het cho ca 2 va 3 la: %d\n", n, i);

}