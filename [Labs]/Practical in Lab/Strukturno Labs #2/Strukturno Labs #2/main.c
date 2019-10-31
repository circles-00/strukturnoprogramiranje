/* Evaluiranje na izrazi. Nisto posebno, dadeni se izrazi i potrebno e da se analiziraat. Spored napravenite analizi potrebno e da se objasni na kakov nacin se dobieni rezultatite vo outputot.*/

#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    y = ++x && (z+5 || --y);
    printf("%d %d %d", x, y, z);
    z = z-- || (x>y) && (x>z);
    printf("%d %d %d", x, y, z);
    return 0;
}
