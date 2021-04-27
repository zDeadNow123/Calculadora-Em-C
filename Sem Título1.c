#include <stdio.h>
#include <stdlib.h>

// Variavel global para armazenar os resultados
float result = 0;

// Função que exibe o resultado
float resultado(float resultado) {
	// Exibe a resposta para o usuario
	printf("Resposta: %.2f\n", resultado);
	return;
}

// Função que faz a soma dos valores
float adicao(float value1,float value2) {
	result = value1 + value2;
	return result;
}


// Função que faz a subtração dos valores
float subtracao(float value1,float value2) {
	result = value1 - value2;
	return result;
}

// Função que faz a multiplicação dos valores
float multiplicacao(float value1,float value2) {
	result = value1 * value2;
	return result;
}

// Função que faz a divisão dos valores
float divisao(float value1,float value2) {
	result = value1 / value2;
	return result;
}

// Função de entrada de dados (valor e operação)
void input() {
	
	// Variavel designada para a operação matemática que irá ser escolhida pelo usuário
	int operacao;
	
	// Variavel que recebe o primeiro e o segundo valor
	float valor1, valor2 = 0;
	
	// Exibe mensagem para o usuario
	printf("Bem vindo a essa horripilante aplicacao que eu chamo de calculadora!\n");
	printf("Escolha uma opcao!\n1. +\n2. -\n3. *\n4. /\n");
	
	// Recebe e armazena o dado na variavel 'operacao'
	scanf("%d", &operacao);
	
	// Limpa o console (Nota: usar cls igual eu fiz é um crime e da cadeia!)
	system("cls");
	
	// Exibe mensagem para o usuario
	printf("Digite o primeiro valor!\n");
	
	// Recebe e armazena o dado na variavel 'valor1'
	scanf("%f", &valor1);
	
	// Exibe mensagem para o usuario
	printf("Digite o segundo valor!\n");
	
	// Recebe e armazena o dado na variavel 'valor2'
	scanf("%f", &valor2);

	// Limpa o console (Nota: usar cls igual eu fiz é um crime e da cadeia!)
	system("cls");
	
	// Verifica a operação que o usuario escolheu e executa a sua respectiva função
	switch(operacao) {
		case 1:
			
			// Chama a função de adição
			adicao(valor1,valor2);
			break;
		
		case 2:
			
			// Chama a função de subtração
			subtracao(valor1,valor2);
			break;
		
		case 3:
			
			// Chama a função de multiplicação
			multiplicacao(valor1,valor2);
			break;
		
		case 4:
			
			// Chama a função de divisão
			divisao(valor1,valor2);
			break;
	}
}

// É a função principal! (Ela é a primeira a ser executada, portanto todas as outras funções são chamadas dentro dela)
int main() {
	
	// A principio chama o input
	input(); 
	
	// Após a execução do programa, retorna o valor do cálculo
	resultado(result);
	
	// Impede o encerramento precoce do programa
	system("pause");
	
	 // Indica que o programa executou com sucesso
	return 0;
}

