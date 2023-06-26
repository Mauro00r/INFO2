#include <stdio.h>

int main(void){

short int a=234;//0000000011101010
char cad[5];

cad[0]='0'+(a>>7);
cad[1]='0'+(a>>8);
cad[2]='0'+(a>>9);
cad[3]='0'+(a>>10);
cad[4]='\0';

for(int i=0;i<5;i++){
printf("%c",cad[i]);
}
return 0;
}


//0000000011101010
//0000000000000001
