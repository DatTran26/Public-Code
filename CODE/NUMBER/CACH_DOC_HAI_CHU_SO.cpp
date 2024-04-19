#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Tiếp tục hoàn thiện mã nguồn
    int n,hang_don_vi,hang_chuc;
    scanf("%d",&n);
    if (n>9 &&n<100)
    {
        hang_don_vi = n%10;
        hang_chuc = n/10;
    	switch(hang_chuc)
        {
        	case(1) : printf("Muoi");break;
        	case(2) : printf("Hai muoi");break;
        	case(3) : printf("Ba muoi");break;
        	case(4) : printf("Bon muoi");break;
        	case(5) : printf("Nam muoi");break;
        	case(6) : printf("Sau muoi");break;
        	case(7) : printf("Bay muoi");break;
        	case(8) : printf("Tam muoi");break;
        	case(9) : printf("Chin muoi");break;
        }
        switch(hang_don_vi)
        {
        	case(1) : printf(" mot");break;
        	case(2) : printf(" hai");break;
        	case(3) : printf(" ba");break;
        	case(4) : printf(" bon");break;
        	case(5) : printf(" nam");break;
        	case(6) : printf(" sau");break;
        	case(7) : printf(" bay");break;
        	case(8) : printf(" tam");break;
        	case(9) : printf(" chin");break;
        }       	
    }
    else 
        printf("Khong hop le");
    return 0;
}