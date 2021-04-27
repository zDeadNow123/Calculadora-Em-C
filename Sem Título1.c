#include <stdio.h>
#include <stdlib.h>

// Variavel global para armazenar os resultados
float result = 0;

// Fun��o que exibe o resultado
float resultado(float resultado) {
	// Exibe a resposta para o usuario
	printf("Resposta: %.2f\n", resultado);
	return;
}

// Fun��o que faz a soma dos valores
float adicao(float value1,float value2) {
	result = value1 + value2;
	return result;
}


// Fun��o que faz a subtra��o dos valores
float subtracao(float value1,float value2) {
	result = value1 - value2;
	return result;
}

// Fun��o que faz a multiplica��o dos valores
float multiplicacao(float value1,float value2) {
	result = value1 * value2;
	return result;
}

// Fun��o que faz a divis�o dos valores
float divisao(float value1,float value2) {
	result = value1 / value2;
	return result;
}

// Fun��o de entrada de dados (valor e opera��o)
void input() {
	
	// Variavel designada para a opera��o matem�tica que ir� ser escolhida pelo usu�rio
	int operacao;
	
	// Variavel que recebe o primeiro e o segundo valor
	float valor1, valor2 = 0;
	
	// Exibe mensagem para o usuario
	printf("Bem vindo a essa horripilante aplicacao que eu chamo de calculadora!\n");
	printf("Escolha uma opcao!\n1. +\n2. -\n3. *\n4. /\n");
	
	// Recebe e armazena o dado na variavel 'operacao'
	scanf("%d", &operacao);
	
	// Limpa o console (Nota: usar cls igual eu fiz � um crime e da cadeia!)
	system("cls");
	
	// Exibe mensagem para o usuario
	printf("Digite o primeiro valor!\n");
	
	// Recebe e armazena o dado na variavel 'valor1'
	scanf("%f", &valor1);
	
	// Exibe mensagem para o usuario
	printf("Digite o segundo valor!\n");
	
	// Recebe e armazena o dado na variavel 'valor2'
	scanf("%f", &valor2);

	// Limpa o console (Nota: usar cls igual eu fiz � um crime e da cadeia!)
	system("cls");
	
	// Verifica a opera��o que o usuario escolheu e executa a sua respectiva fun��o
	switch(operacao) {
		case 1:
			
			// Chama a fun��o de adi��o
			adicao(valor1,valor2);
			break;
		
		case 2:
			
			// Chama a fun��o de subtra��o
			subtracao(valor1,valor2);
			break;
		
		case 3:
			
			// Chama a fun��o de multiplica��o
			multiplicacao(valor1,valor2);
			break;
		
		case 4:
			
			// Chama a fun��o de divis�o
			divisao(valor1,valor2);
			break;
	}
}

// � a fun��o principal! (Ela � a primeira a ser executada, portanto todas as outras fun��es s�o chamadas dentro dela)
int main() {
	
	// A principio chama o input
	input(); 
	
	// Ap�s a execu��o do programa, retorna o valor do c�lculo
	resultado(result);
	
	// Impede o encerramento precoce do programa
	system("pause");
	
	 // Indica que o programa executou com sucesso
	return 0;
}

