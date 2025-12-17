#include <stdio.h>

int main()
{
    int ip=0, i=0, c=0, c2=0;
    
    while(i!=1){
    printf("Digite o seu ip: ");
    scanf("%i", &ip);
    if(ip<0000||ip>255255255255){
        printf("\nIP invalido, tente denovo.\n\n");
    }
    else{
        i=1;
    }
    }
    int digito=0, numero=ip, digitos[12];
    
    //separacao dos itens do numero em um array
    while(numero>0){
        digito= numero % 10;
        digitos[c]= digito;
        c++;
        printf("\nDigito: %i", digito);
        numero = numero/10;
        printf("\nNumero: %i", numero);
    }
    
    int ip_organizado[c];
    
    //organizacao dos itens em um segundo array na ordem 0, 1, 2...
    
    printf("\n\nO numero tem %i digitos.\nDos quais sao:\n\n", c);
    for(i=c-1; i>=0; i--){
        printf("%i, ", digitos[i]);
        ip_organizado[c2]= digitos[i];
        c2++;
    }
    i=0, c2=0;
    
    
    //verificacao dos itens
    printf("\n\nTeste: ");
    while(i!=c){
        printf("%i, ", ip_organizado[i]);
        i++;
    }
    
    
    return 0;
}

