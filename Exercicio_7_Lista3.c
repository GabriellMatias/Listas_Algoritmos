#include<stdio.h>

int main(int argc, char const *argv[])
{
    int maca=0, abacaxi=0, pera=0, fruta;

    printf("Por favor deseje o codigo da fruta desejada:\n");


    do
    {
        switch (fruta)
        {
        case 1:
            abacaxi++;
        break;
        case 2:
            maca++;
        break;
        case 3: 
            pera++;
        break;
        default: printf("Fruta desejada invalida por favor digite o codigo novamente:\n");
            break;
        }
    } while (fruta < 1 || fruta > 3);
    

    return 0;
}
