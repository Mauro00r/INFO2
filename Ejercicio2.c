#include <stdio.h>
#include <stdlib.h>

int main(void){

int N;

printf("Ingrese tamaño de arreglo: ");
scanf("%d",&N);
int * a=malloc(N*sizeof(int));

for(int i=0;i<N;i++){
printf("Ingrese valor %d: ",i);
scanf("%d",&a[i]);
}
printf("Los valores pares y positivos son: \n");
for(int i=0;i<N;i++){
if(a[i]>0 && a[i]%2==0){
printf("%d\n",a[i]);
}}

return 0;
}
