/* Od vlez se citaat 3 char karakteri, pa potoa se formiraat 2 binarni sekvenci so dolzina od 3 edinici. Vo prvata binarna sekvenca se pecati 1 za sekoj vnesen specijalen znak, a 0 za sekoj drug znak sto ne e specijalen znak. Vo vtorata binarna sekvenca se pecati 1 za sekoja vnesena bukva, golema ili mala i 0 za se ostanato.*/

#include <stdio.h>

int main() {
    char x, y, z;
    int aprim, bprim, cprim;
    int asec, bsec, csec;
    scanf("%c %c %c", &x, &y, &z);

    //prva sekvenca, proveruvame dali vneseniot char e specijalen karakter preku ASCII tabelata
    aprim=((x<'A' || x>'Z') && (x<'a' || x>'z') && (x<'0' || x >'9'));
    bprim=((y<'A' || y>'Z') && (y<'a' || y>'z') && (y<'0' || y >'9'));
    cprim=((z<'A' || z>'Z') && (z<'a' || z>'z') && (z<'0' || z >'9'));
    printf("%d%d%d\n", aprim, bprim, cprim);

    //vtora sekvenca, proveruvame dali vneseniot char e bukva preku ASCII tabelata
    asec=((x>='A' && x<='Z') ||(x>='a' && x<='z'));
    bsec=((y>='A' && y<='Z') ||(y>='a' && y<='z'));
    csec=((z>='A' && z<='Z') ||(z>='a' && z<='z'));
    printf("%d%d%d", asec, bsec, csec);
    return 0;
}
