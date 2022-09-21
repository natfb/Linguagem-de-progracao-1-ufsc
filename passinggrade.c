#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    float num, num1, num2, med;
    int fal;
        printf("Escreva três notas: \n");
        scanf("%f %f %f", &num, &num1, &num2);
        printf("Escreva o número de ausencias: \n");
        scanf("%d", &fal);

        med = (num + num1 + num2)/3;

        if(med > 6 && fal < 72*0.25 ){
           printf("Aluno aprovado, média: %2.1f, faltas: %d.", med, fal);
            }else if(med < 6 && fal < 72*0.25 ){
                printf("Aluno em recuperação, média %f, faltas: %d.", med, fal);
                    }else{
                        printf("Aluno reprovado. Média %f, faltas: %d.", med, fal);
        }

return 0;
}

