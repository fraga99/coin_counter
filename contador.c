#include <stdio.h>
#include <stdlib.h>

int c05, c10, c25, c50, rl1; 
float total;

void menu(){
    int n;
    printf ("1- Adicionar os valores\n2- Mostrar valores\n0- Sair");
    printf ("\nDigite a opcao desejada: ");
    scanf ("%d", &n);
    switch(n){
        case 0:
        printf ("Saindo...");
        break;
        case 1:
        entrada();
        break;
        case 2:
        mostrar();
        break;
        default:
        printf ("\nValor invalido. Por favor, digite o numero da operacao desejada.\n\n");
        menu();
        break;
    return 0;
    
    }
}

void mostrar (){

    printf ("\n\n########## TOTAL DE CADA MOEDA ##########\n\n");
    printf("\n05 centavos: %d, moeda/s", c05);
    printf("\n10 centavos: %d, moeda/s", c10);
    printf("\n25 centavos: %d, moeda/s", c25);
    printf("\n50 centavos: %d, moeda/s", c50);
    printf("\n01 real: %d", rl1);
    printf ("\n\n########## DINHEIRO TOTAL ##########\n");
    printf ("\nTotal: R$ %.2f\n", total);

menu();
}

void entrada (){
printf ("\n\n########## CONTADOR DE MOEDAS ##########\n\n");
printf ("Digite a quantidade de moedas de 5 centavos: ");
scanf("%d", &c05);
printf ("Digite a quantidade de moedas de 10 centavos: ");
scanf("%d", &c10);
printf ("Digite a quantidade de moedas de 25 centavos: ");
scanf("%d", &c25);
printf ("Digite a quantidade de moedas de 50 centavos: ");
scanf("%d", &c50);
printf ("Digite a quantidade de moedas de 1 real: ");
scanf("%d", &rl1);

total = (c05*0.05 + c10*0.1 + c25*0.25 + c50*0.5 + rl1*1.0);

menu();
}

int main()  { 
    menu();

}