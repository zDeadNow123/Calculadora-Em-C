#include <stdio.h>
#include <stdlib.h>

// Variavel global para armazenar o resultado da operação
float result;

// Variavel global que recebe a operação matemática escolhida
int operacao;

// Função que exibe o resultado
void resultado() {
	
	// Exibe a resposta para o usuario
	printf("Resposta: %.2f\n", result);
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

// Função de entrada de dados (inserção dos valores para execução da operação matemática)
void input_valor() {
	
	// Variavel que recebe o primeiro e o segundo valor
	float valor1, valor2;
	
	// Exibe a mensagem de entrada do primeiro valor para o usuario
	printf("Digite o primeiro valor!\n");
	
	// Recebe e armazena o dado na variavel 'valor1'
	scanf("%f", &valor1);
	
	// Exibe a mensagem de entrada do segundo valor para o usuario
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
		
	return;
}

// Função de entrada de dados (escolha de operação matemática)
int input_operacao() {
	
	// Exibe a mensagem inicial para o usuario
	printf("Bem vindo a essa horripilante aplicacao que eu chamo de calculadora!\n");
	printf("Escolha uma opcao!\n1. +\n2. -\n3. *\n4. /\n");
	
	// Recebe e armazena o dado na variavel 'operacao'
	scanf("%d", &operacao);
	
	// Limpa o console (Nota: usar cls igual eu fiz é um crime e da cadeia!)
	system("cls");
	
	return operacao;
}

// É a função principal! (Ela é a primeira a ser executada, portanto todas as outras funções são chamadas dentro dela)
void main() {
	
	// Chama o input de escolha de operação matemática
	input_operacao();
	
	// Chama o input dos valores
	input_valor(); 
	
	// Após a execução do programa, retorna o valor do cálculo
	resultado();
	
	// Impede o encerramento precoce do programa
	system("pause");
	
	return;
}

