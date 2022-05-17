/*************************************************************
Algoritmo tem como objetivo inserir e remover caracteres
em uma pilha, utilizando um vetor de caracteres


**************************************************************/

#include <iostream>
using namespace std;
constexpr  int tam = 5;
struct charPilha
{
	char vet[tam];
	int ini = 0;      //inicio da pilha
	int top = 0;      //fim da pilha

};
charPilha pilha;
void push(char letra);   //insere caracter na pilha
char pop();				 //remove caracter
void mostrar();          //exibe caracteres removidos

int main()
{
	char carac;
	int i = 0;
	while ( i < tam )
	{
		cout << "Ensira um caractere :";
		cin >> carac;
		i++;
		push(carac);
	}
	mostrar();
	return 0;
}
void push(char carac)
{
	if (pilha.top == tam)
	{
		cout << "A pilha esta cheia ";
	}
	else
	{
		pilha.vet[pilha.top] = carac;
		pilha.top++;
	}
}
char pop()
{
	char dado;
	if (pilha.top == pilha.ini)
	{
		cout << "A pilha esta vazia";
	}
	else
	{
		pilha.top--;
		dado = pilha.vet[pilha.top];
		return dado;
	}
}
void mostrar()
{
	int i = 0;
	char carac;
	
	while (i < tam)
	{

		carac = pop();
		cout << "Caracter removido :" << carac << endl;
		i++;
	}
	
}