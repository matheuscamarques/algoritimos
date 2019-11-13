/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct aniversario{
    
    char nome[50]; 
    int mes;
    int dia;
    
    
}Aniversario;


Aniversario registraPessoa()
{
    int i;
    Aniversario pessoa;
    
    printf("Digite o Nome :" );
    scanf("%s",pessoa.nome);
    
    printf("Digite o dia e o mes : ");
    scanf("%d %d",&pessoa.dia,&pessoa.mes);
    
    return pessoa;
    
    
}

void PreencheAniversario(Aniversario *pessoa,int tam){
    
    int i ;
    
    for(i=0; i<tam;i++)
    {
        pessoa[i] = registraPessoa();
        
    }
    
}


void imprimeBase(Aniversario *pessoa,int tam)
{
    int i;
    
    printf("Nome\t|\tDATA\n");
    for(i=0; i<tam;i++)
    {
        printf("\n%s\t|\t%d-%d",pessoa[i].nome,pessoa[i].dia,pessoa[i].mes);
        
    }
    
}

void imprimeAniversarioMes(Aniversario *pessoa,int tam,int mes)
{   
    int i;
    if(mes == 1){
           printf("Janeiro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 1)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
     if(mes == 2){
        printf("Fevereiro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 2)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
     if(mes == 3){
        printf("Março \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 3)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
     if(mes == 4){
        printf("Abril \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 4)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    } if(mes == 5){
        printf("Maio \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 5)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
     if(mes == 6){
        printf("Junho \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 6)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    if(mes == 7){
        printf("Julho \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 7)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    
    if(mes == 8){
        printf("Agosto \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 8)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    
    if(mes == 9){
        printf("Setembro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 9)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    
    if(mes == 10){
        printf("Outurbro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 10)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    
    if(mes == 11){
        printf("Novembro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 11)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }
    
    if(mes == 12){
        printf("Dezembro \n");
           for(i=0;i<tam;i++)
           {
               if(pessoa[i].mes == 12)
               {
                   printf("%s\n",pessoa[i].nome);
               }
           }
        
    }

    
}



int main()
{
    int i = 1 ;
    Aniversario pessoas[2];
    
    PreencheAniversario(pessoas,2);
    //imprimeBase(pessoas,1);
    
    //ano inteiro
    for(i=1;i<=12;i++)
    imprimeAniversarioMes(pessoas,2,i);
    

    return 0;
}
