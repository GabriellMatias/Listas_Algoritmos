#include<stdio.h>

int main(void)
{
    float H=0, N;
    

    printf("Informe o Numero N: \n");
    scanf("%f", &N);

while (N>0)
{
    for (int i = 0; i < N; )
    {
       H = H + 1/N;
       N--;
    } 
}
    printf("Valor de H:%.2f \n", H);

    return 0;
}