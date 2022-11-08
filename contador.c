#include <stdio.h>
#include <stdlib.h>

 // Variaveis Globais 
float total;
int c05, c10, c25, c50, rl1;

void entrada();


main(){   
    entrada();
    
}

void entrada(){
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

printf ("\n\n########## TOTAL DE CADA MOEDA ##########\n\n");
printf("\n05 centavos: R$ %.2f", c05*0.05);
printf("\n10 centavos: R$ %.2f", c10*0.1);
printf("\n25 centavos: R$ %.2f", c25*0.25);
printf("\n50 centavos: R$ %.2f", c50*0.5);
printf("\n01 real: R$ %.2f", rl1*1.0);

total = (c05*0.05 + c10*0.1 + c25*0.25 + c50*0.5 + rl1*1.0);


printf ("\n\n########## DINHEIRO TOTAL ##########\n");
printf ("\nTotal: R$ %.2f\n", total);



return;
}
