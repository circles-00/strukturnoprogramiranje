#include <stdio.h>

int main() {
    int broj, c1, c2, c3, c4, kolega;
    float procent;
    scanf("%d", &broj);
    c1=broj/1000;
    c2=(broj/100)%10;
    c3=(broj/10)%10;
    c4=broj%10;

    if((c1==5&&c2==5) || (c1==5&&c3==5) || (c1==5&&c4==5) || (c2==5&&c3==5) || (c2==5&&c4==5) || (c3==5&&c4==5))
    {
        if (c1==5) c1=6;
        if (c2==5) c2=6;
        if (c3==5) c3=6;
        if (c4==5) c4=6;
        kolega=((c1*1000)+(c2*100)+(c3*10)+c4);
        printf("%d\n", kolega);
        if(kolega<broj) {
            procent=((broj-kolega)/(float)broj)*100;
            printf("Vneseniot broj e za %d% pogolem od negoviot kolega", procent);
        } else if (broj<kolega) {
            procent=((kolega-broj)/(float)kolega)*100;
            printf("Kolegata e za %.2f %% pogolem od vneseniot broj", procent);
        }

    } else printf("Vnesen e nevaliden broj");


return 0;
}
