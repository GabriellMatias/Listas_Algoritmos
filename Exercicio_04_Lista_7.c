#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra[30];
	for(int i=0;i<30;i++){
	printf("digite uma letra: \n");
	setbuf(stdin,0);
	scanf("%c\n",&letra[i]);}
	
	for(int i=29;i>=0;i--){
	printf("%c\n",letra[i]);}
	system("pause");
	return 0;
}
