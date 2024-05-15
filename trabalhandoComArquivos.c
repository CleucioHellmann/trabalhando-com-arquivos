#include <stdio.h>
#include <stdlib.h>

int main()
{

    char linha[20]; // Declaração de um vetor de char de 20 linhas
    FILE *arquivo; // declaração ed uma variavel tipo FILE  chamada arquivo * sempre antes do nome da variavel

    arquivo = fopen("C:\\Users\\User\\Documents\\worksplace_visual_studio_code\\arquivos\\trabalhandoComArquivos\\linhas.txt", "r");
    // a variavel arquivo vai receber/trabalhar com os dados do arquivo
    // fopen é a função abrir o arquivo
    // "r" é o modo que quero abrir o arquivo neste caso apenas leitura read

    // É preciso criar um if pra verificar se o arquivo foi localizado
    if (arquivo == NULL)
    {
        printf("Erro ao iniciar o arquivo!\n"); // mensagem de erro caso o programa não for localizado
        system("pause");                        // trava a execção do algoritmo
        exit(-1);                               // finaliza a função
    }

    rewind(arquivo); // chamada da função rewind. A função rewind é um comando em programação que permite voltar o ponteiro de leitura ou escrita de um arquivo para o seu início, possibilitando a reutilização dos dados no arquivo.

    // whhile - enquanto eu !não chegar no fim do meu arquivo leia de linha a linha.
    while (!feof(arquivo)) // feof - função que checa quando chega no fim do arquivo
    {
        fgets(linha, 20, arquivo); // fgets obter uma linha e mandar imprimir a linha na tela
        printf("%s", linha);
    }

    fclose(arquivo); // obrigatorio fechar o fgets
}
