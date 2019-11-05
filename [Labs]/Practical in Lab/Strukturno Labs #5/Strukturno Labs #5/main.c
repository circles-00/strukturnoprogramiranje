#include <stdio.h>

int main() {
        int broj, c1, c2, c3, c4, c5;
        scanf("%d", &broj);
        c1=broj/10000;
        c2=(broj/1000)%10;
        c3=(broj/100)%10;
        c4=(broj/10)%10;
        c5=broj%10;
        if(broj < 10000 || broj > 99999) {
            printf("Nevaliden vlez");
        } else if ((c1==c5) && (c2==c4)) {
            printf("Palindrom");
        } else printf("Ne e palindrom");
        return 0;
}
