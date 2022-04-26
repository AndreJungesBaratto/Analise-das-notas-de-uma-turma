//Nome: André Junges Baratto
//Nº USP: 13731107

#include <stdio.h>  //Usaremos a biblioteca stdio.h para ler e escrever dados

void main(){    //usei o void para não precisar escrever "return 0" ao final do código
    float S=0, N=0, L=0;             //Inicialmente defino as variáveis soma "S", nota "N" e número do loop "L"
    int alta=0, baixa=0;             //Além disso, defino as variáveis nota>=5 "alta" e nota<5 "baixa"
         printf ("Digite as notas das provas(Digite valor negativo para sair): \n");
          while(N>=0){               //O loop continuará repetindo até que um valor negativo seja digitado
              scanf("%f", &N);
               if(N>=0){             //Caso a nota seja maior que 0:
                   S+=N;             //seu valor será somado ao total
                   L++;              //e o número do loop aumentará em 1
               }
                if(N>=5){            //Caso a nota seja maior ou igual que 5:
                    alta++;          //o número de notas altas aumenta em 1
                }
                 if(N<5&&N>=0){      //Caso a nota seja menor que 5:
                     baixa++;        //o número de notas baixas aumenta em 1
                 }
          }
           float M, P;               //Por fim, defino e calculo as variáveis média geral "M" e porcentagem de notas altas "P"
           M=S/L;
            P=alta/L;
                printf("\nA media geral da turma eh: %.2f \nO numero de notas altas da turma eh: %d \nO numero de notas baixas na turma eh: %d \nA porcentagem de alunos que tiraram nota alta eh: %.2f\n\n", M, alta, baixa, P);
                //Esse printf escreve, ao final, todos os dados pedidos no enunciado, após serem calculados pelo código
}
