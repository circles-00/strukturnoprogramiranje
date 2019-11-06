#include <stdio.h>

int main () {
    int datum, denovi, fevruari, mesec, godina;
    scanf("%d", &datum);

    mesec=(datum/10000)%100;
    denovi=(datum/1000000);
    fevruari=(datum/10000);
    godina=(datum%10000);

    //proverka dali mesecot e pomegju 1 i 12
    if (mesec>=1 && mesec<=12)
    {
        // proverka dali e vnese 29.02
       if(fevruari==2902) {
            if((godina%400==0) || (godina%4==0 && godina%100!=0)) {
            printf("DA");
        }

        // proverka dali mesecot ima 31 den
       } else if(mesec%2!=0 || mesec==8) {
        //proverka dali denovite se vo deomenot od 1 do 31
            if(denovi>=1 && denovi<=31){
                printf("DA");
            }  else printf("NE");

        //proverka dali mesecot ima 30 dena
       } else if(mesec%2==0){
            //proverka dali denovite se vo domenot od 1 do 30
                if(denovi>1 && denovi <=30) {
                    printf("DA");
            } else printf("NE");

    }

    return 0;
}  else printf("NE");
}
