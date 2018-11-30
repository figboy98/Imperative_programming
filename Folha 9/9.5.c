#include <stdio.h>

int magico(int a[20][20], int n)
{
		//ciclo para percorrer  as linhas
		//verifica se a soma das colunas é igual em todas
	
	int soma_linha=0, vec_linha[n],  k=0, aux=0;
	

	for(int i=0; i<n; i++)        
	{
		for(int j=0; j<n; j++)
		{
			aux+=a[i][j];   //guarda o valor da soma de cada linha numa posição do vetor
		}
		vec_linha[k]=aux;
		aux=0;  //reinicia o valor de aux
		k+=1;    //passa para a próxima posição do vetor
	}
	
	soma_linha=vec_linha[0];
	
	for(int i=0; i<n; i++)  // verifica se os valores da soma são todos iguais
	{
		if(vec_linha[i] != soma_linha)
		{
			return 0;
		}
	}
	
	//ciclo para percorrer colunas
	//Verifica se a soma das colunas é igual em todas as colunas
	
	int soma_coluna, vec_colunas[n];
	aux=0;
	k=0;
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{
			aux+=a[i][j];
		}
		vec_colunas[k]=aux;
		aux=0;
		k++;
	}
	soma_coluna=vec_colunas[0];
	
	for(int i=0; i<n; i++)
	{
		if(vec_colunas[i] != soma_coluna)
		{
			return 0;
		}
	}
	
	if(soma_linha != soma_coluna) // Se a soma das colunas e a soma das linhas for diferente o quadrado não é magico
	{
		return 0;
	}
	
	//ciclo para percorrer a diagonal principal
	//verifica se a soma da diagonal é igual à soma das colunas e das linhas
	int soma_diagonal=0;
	
	aux=0;
	for(int i=0; i<n; i++)
	{
		aux+=a[i][i];
	}
	soma_diagonal=aux;
	
	if(soma_diagonal != soma_coluna)
	{
		return 0;
	}
	
	//ciclo para percorrer a diagonal secundária
	//verifica se a soma da diagonal secundaria é igual à diagonal principal
	int i=(n-1), j=0, soma_diagonalSecundaria=0;
	while(i>=0)
	{
		soma_diagonalSecundaria+=a[i][j];
		i--;
		j++;
	}
	
	if( soma_diagonalSecundaria != soma_diagonal)
	{
		return 0;
	}
	return 1;

}
			 

int main()
{
	int a[20][20]={{2,7,6},
				   {9,5,1},
				   {4,3,8}};
				   
	magico(a, 3);
	
	return 0;
}
	
	
		
			
