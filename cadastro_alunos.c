	#include <stdio.h>
	#include <stdlib.h>

	

	typedef struct aluno{
		
		long int cpf;

		char  nome[60];
		int idade;
	        char email[45];

		
	}Aluno;

	Aluno cadastraAluno()
	{
		Aluno a;
		
		printf("Digite o nome : ");
		scanf("%s",a.nome);

		printf("Digite a idade :  ");
		scanf("%d",&a.idade);

		printf("Digite o e-mail : ");
		scanf("%s",a.email);

		return a;
	
	}

	void printaAlunos(Aluno* aluno ,int tam){
                int i;
         	 printf("\n|NOME|\t  |IDADE|\t  |E-MAIL|\n");
		for(i=0; i<tam; i++){
                       printf("%s\t    %d\t    %s\n",aluno[i].nome,aluno[i].idade,aluno[i].email); 
               }

	}

	
	int main(){
              int i;
	      int tam=2;
               Aluno *aluno;
	       aluno = (Aluno*)malloc(tam*sizeof(Aluno));


	       for(i=0; i<tam; i++)
	       {
		  aluno[i] = cadastraAluno();	
       	       }

	       printaAlunos(aluno,tam);
	       return 0;

	}
