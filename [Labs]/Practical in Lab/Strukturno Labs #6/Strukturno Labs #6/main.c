#include <stdio.h>

int main() {
    int telbroj, c1, c2, c3, c4, c5, c6, c7;
    scanf("%d", &telbroj);


    c1=(telbroj/1000000)%10;
    c2=(telbroj/100000)%10;
    c3=(telbroj/10000)%10;
    c4=(telbroj/1000)%10;
    c5=(telbroj/100)%10;
    c6=(telbroj/10)%10;
    c7=telbroj%10;
    printf("07%d/%d%d%d/%d%d%d - ", c1, c2, c3, c4, c5, c6, c7);
    if ((c1==0)|| (c1==1) || (c1==2)) {
        printf("T-Mobile");
    } else if ((c1==5)|| (c1==6) || (c1==7) || (c1==8)) {
        printf("A1");
    } else if (c1==9) {
        printf("Lycamobile");
    }
    return 0;
}
