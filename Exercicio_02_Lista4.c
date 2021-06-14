#include<stdio.h>

int main(void)
{
    int dia, mes;
    
    printf("INFORME O DIA: \n");
    scanf("%i", &dia);
    printf("INFORME O MES: \n");
    scanf("%i", &mes);

    if (dia >= 21 && mes == 1 || dia <=19 && mes ==2)
    {
        printf("SIGNO = AQUARIO\n");
    }
        else if (dia >= 20 && mes == 2 || dia <=20 && mes ==3)
        {
            printf("SIGNO = PEIXES\n");
        }
            else if (dia >= 21 && mes == 3 || dia <=20 && mes ==4)
            {
                printf("SIGNO = ARIES\n");
            }
                else if (dia >= 21 && mes == 4 || dia <=20 && mes ==5)
                {
                    printf("SIGNO = TOURO\n");
                }
                    else if (dia >= 21 && mes == 5 || dia <=20 && mes ==6)
                    {
                        printf("SIGNO = GEMEOS\n");
                    }
                        else if (dia >= 21 && mes == 6 || dia <=21 && mes ==7)
                        {
                            printf("SIGNO = CANCER\n");
                        }
                            else if (dia >= 22 && mes == 7 || dia <=22 && mes ==8)
                            {
                                printf("SIGNO = LEAO\n");
                            }
                                else if (dia >= 23 && mes == 8 || dia <=22 && mes ==9)
                                {
                                    printf("SIGNO = VIRGEM\n");
                                }
                                    else if (dia >= 23 && mes == 9 || dia <=22 && mes ==10)
                                    {
                                        printf("SIGNO = LIBRA\n");
                                    }
                                        else if (dia >= 23 && mes == 10 || dia <=21 && mes ==11)
                                        {
                                            printf("SIGNO = ESCORPIAO\n");
                                        }
                                            else if (dia >= 22 && mes == 11 || dia <=21 && mes ==12)
                                            {
                                                printf("SIGNO = SAGITARIO\n");
                                            }
                                                else if (dia >= 22 && mes == 12 || dia <=20 && mes ==1)
                                                {
                                                    printf("SIGNO = CAPRICORNIO\n");
                                                }




    return 0;
}
