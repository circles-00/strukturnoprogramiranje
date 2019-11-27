#include <stdio.h>
//programa koja proveruva dali cifrite na prviot broj se sodrzat vo vtoriot broj
int main(){
    int a, b, flag, cifra,cifra2, temp;
    scanf("%d %d", &a, &b);

    while(a){
        cifra=a%10;
        flag=0;
        temp=b;
        while(temp){
            cifra2=temp%10;
            if(cifra==cifra2){
                flag=1;
            }
            temp/=10;
        }
        if(flag==0){
            printf("NE");
            break;
        }
        a/=10;
    }
    if(flag==1){
        printf("DA");
    }
    return 0;
}