#include <stdio.h>

 typedef struct hm{
        int horas;
        int minutos;
    }data;

data horasmin(int x);
int minhoras(data x);

int main(){
    data x;
    data z;
    int a;
    int y = 90;
    scanf("%i %i", &x.horas, &x.minutos );
    printf("%i %i \n y: %i \n", x.horas, x.minutos, y);
    z = horasmin(y);
    printf("\n%i:%i\n", z.horas, z.minutos);
    a = minhoras(x);
    printf("%i\n", a);
}
data horasmin(int x){
    data y;
    y.horas = x/60;
    y.minutos = x%60;
    //printf("%i minutos sao %i:%i\n", x, y.horas, y.minutos);
    return y;
}
int minhoras(data x){
    int y;
    y = x.horas*60 + x.minutos;
    //printf("x horas sao %i minutos", y);
    return y;
}
