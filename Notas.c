//Nome: Andr� Junges Baratto
//N� USP: 13731107

#include <stdio.h>  //Usaremos a biblioteca stdio.h para ler e escrever dados

void main(){    //usei o void para n�o precisar escrever "return 0" ao final do c�digo
    float S=0, N=0, L=0;             //Inicialmente defino as vari�veis soma "S", nota "N" e n�mero do loop "L"
    int alta=0, baixa=0;             //Al�m disso, defino as vari�veis nota>=5 "alta" e nota<5 "baixa"
         printf ("Digite as notas das provas(Digite valor negativo para sair): \n");
          while(N>=0){               //O loop continuar� repetindo at� que um valor negativo seja digitado
              scanf("%f", &N);
               if(N>=0){             //Caso a nota seja maior que 0:
                   S+=N;             //seu valor ser� somado ao total
                   L++;              //e o n�mero do loop aumentar� em 1
               }
                if(N>=5){            //Caso a nota seja maior ou igual que 5:
                    alta++;          //o n�mero de notas altas aumenta em 1
                }
                 if(N<5&&N>=0){      //Caso a nota seja menor que 5:
                     baixa++;        //o n�mero de notas baixas aumenta em 1
                 }
          }
           float M, P;               //Por fim, defino e calculo as vari�veis m�dia geral "M" e porcentagem de notas altas "P"
           M=S/L;
            P=alta/L;
                printf("\nA media geral da turma eh: %.2f \nO numero de notas altas da turma eh: %d \nO numero de notas baixas na turma eh: %d \nA porcentagem de alunos que tiraram nota alta eh: %.2f\n\n", M, alta, baixa, P);
                //Esse printf escreve, ao final, todos os dados pedidos no enunciado, ap�s serem calculados pelo c�digo
}
