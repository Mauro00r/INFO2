#include <stdio.h>

#define LONGITUD 10

void float2str(float , char * );

int main(void)
{
    float val;
    char cad[LONGITUD];

    printf("Ingrese valor de 00.00 a 99.99: ");
    scanf("%f",&val);
    float2str(val, cad);
    printf("%s\n", cad);

    return 0;
}

void float2str(float val, char *cad)
{
    int a,b,c;
    if(val<10){
    cad[0]='0'+val;
    cad[1]='.';
    b=val*10;
    cad[2]='0'+b%10;
    c=val*100;
    cad[3]='0'+c%10;
    cad[4]='\0';
    }
    else{
    cad[0]='0'+val/10;
    a=val;
    cad[1]='0'+a%10;
    cad[2]='.';
    b=val*10;
    cad[3]='0'+b%10;
    c=val*100;
    cad[4]='0'+c%10;
    }
}

