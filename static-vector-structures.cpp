#include <stdio.h>
#include <conio.h>
#include <windows.h>
 
 
 void programer(){	
    printf("\t\t\tRodolfo Casemiro Ribeiro RA:------- \n\t " );
    printf("\t\tEngenharia da Computacao              \n\t " );
 	printf("\t\tEstruturas Vetorias Estaticas c/ funcoes   \n\t " );
	printf("\t\t===================================\n\n\n"); 
	}
 
int main(void)
{ 
#define tamanho 5
 	
    Beep(737,100);
    system("color 2B");
    int V = 10;
    system("cls");
    int j = 0, i, a = 0, h = 0, k = 0, aux = 0, auxin = 0, temp , vezes, tjk =0;
    int Vetor [ tamanho ], Vetor2 [ tamanho ], Vetor3 [ tamanho ],  Vetor4 [ tamanho ],c;
    for ( i = 0; i < tamanho; i++ ){
    programer();	
    printf("Digite um numero para a posicao " );
    printf("do Vetor A:\n" );
    Beep(1237,150);
    scanf("%d", &Vetor [ i ] );
        fflush(stdin);
        system("cls");
    }
    for ( j = 0; j < tamanho; j++ ){
    programer(); 	
    printf("Digite um numero para a posicao " );
    printf("do Vetor B:\n" );
    Beep(937,150);
    scanf("%d", &Vetor2 [ j ] );
        fflush(stdin);
        system("cls");
    }
    Beep(937,150);
    programer();	
    printf("Digite um numero para a posicao " );
    printf("Vetores\n");
    printf("Vetor A: ");
    for( i = 0; i < tamanho; i++ ){
        printf(" %d ",Vetor [ i ] );
    }
    //getche();
    Beep(937,150);
    printf("\nVetor B :");
    for( j = 0; j < tamanho; j++ ){
        printf(" %d ",Vetor2 [ j ] );
        Vetor4 [ a ] = Vetor2 [ j ] ; //vetor a recebe j e depois incrementa
        a++;
    }
    
    int p=0;
    int p1=0;
    int soma=0;
    int soma2=0;
    Beep(937,100);
    printf("\n\nConcatenacao Vetor A com B :\n\n");
    for( i = 0; i < tamanho; i++ ){
        printf(" %d ",Vetor [ i ] );
        soma = soma + Vetor[i];
        fflush(stdin);
}
fflush(stdin);
 
    for( j = 0; j < tamanho; j++ ){
        printf(" %d ",Vetor2 [ j ] );
        soma2 = soma2 + Vetor2 [ j ];
        fflush(stdin);
}
fflush(stdin);
    int xxx=0;
    int lkx[i];     
    printf("\n\nsoma em A eh %d ",soma );
    printf("\n\nsoma em B eh %d ",soma2 );
    int soma3 = soma-soma2;
    int soma4 = soma2-soma;
    printf(" \n\nSubtraindo Vetor A por B = %d \n",soma3 );
    printf("\n\nSubtraindo Vetor B por A = %d \n",soma4 );
    printf("\n\nSubtraindo vetor de posicao por posicao:\n\n ");
    fflush(stdin);
    Vetor2 [ j ] = Vetor2 [ i ];
    for (i=0; i<5; i++) {
    lkx[i] = Vetor[i] - Vetor2 [ i ] ;	
  }

  printf("\nID   A      B   Resultado\n");
  printf("===================================\n");
  for (i=0; i<5; i++) {
    printf("%d %4d   %4d   %4d\n", i, Vetor[i], Vetor2 [ i ], lkx[i]);
  }
  printf("===================================\n");
    for( i = 0; i < tamanho; i++ ){
        Vetor3 [ i ] = Vetor [ i ];
        Vetor3 [ i+5 ] = Vetor2 [ i ];
    }
    for ( i=0;i<=V;i++ ) {
        vezes= 1;
        j=i+1;
        while (j<=V)
            if (Vetor3 [ j ] != Vetor3 [ i ])
                j++;
            else {
                vezes++;
                V--;
                Vetor3 [ j ] = Vetor3 [ V+1 ];
            }
    }
    for( i=0;i<= V;i++){
        temp=i;
        aux=Vetor3 [ i ];
        for( j= ( i + 1 ); j <= V; j++ )
            if(Vetor3 [ j ] <= aux){
                temp=j;
                aux=Vetor3 [ temp ];
                Vetor3 [ temp ] = Vetor3 [ i ];
                Vetor3[ i ] = aux;
            }
    }
    Beep(937,150);
    printf("\nUniao dos Vetores ja ordenados\n\n");
    for(i=0;i<=V;i++)
        printf(" %d ",Vetor3 [ i ] );
    for(i=0;i<tamanho;i++){
       
    }
    for (a=0;a<tamanho;a++){  
    }
    for (i=0;i<tamanho;i++ ){
        for (j=0;j<tamanho;j++ ){
            if (Vetor[ i ] == Vetor4 [ j ]){
                Vetor3 [ h ] = Vetor4 [ j ];
                h++;
            }
        }
    }
    Beep(1237,150);
    printf("\nInterseccao ou cardinalidade entre os dois Vetores\n\n ");
    k = h;
    if(k==0){
        printf(" Vetores distintos\n");
    }
    for (h=0;h<k;h++)
        printf(" %i ",Vetor3 [ h ] );
        system("\npause\n\n");
        return 0;
}

