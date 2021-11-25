    #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
char mat [10][10];
/*
void que apresenta as funções básicas do programa
utiliza-se a função para que não seja necessária a escrita toda hora que precisar de tais textos
*/

void menuPrincipal ()
{
    printf ("\n1 - Cria Matriz a partir do teclado \n");
    printf ("2 - Imprime Matriz \n");
    printf ("3 - Solicita uma palavra \n");
    printf ("4 - Pesquisa \n");
    printf ("5 - Executa teste padrão \n");
    printf ("0 - Sair do programa \n");
}
/*
void leia () é utilizada quando o usuário deseja digitar uma matriz pelo teclado
garantindo que os dados fiquem em mat [i][j]
note que não é passado nenhum argumento com a função, isso ocoorre porque ela trabalha
apenas com a leitura da variavel mat, que é uma matriz de char GLOBAL, ou seja,
pode ser chamada em qualquer parte do programa.*/


void leia ()
{
    for (int i=0; i < 10 ; i ++)
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            mat[i][j]=0;
        }
    }
    printf ("Informe os valores para armazenar na matriz\n");
    for (int i=0; i < 10 ; i ++)
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            scanf ("%s", &mat[i][j]);
        }
    }

}
/*
void imprime () é um procedimento que exibe a matriz para o usuário, matriz essa que, por sua vez, pode ser digitada pelo teclado ou que esteja armazenada na memória
atráves da matriz padrão (matTeste()).
*/




void imprima ()
{
    printf ("\n MATRIZ ABAIXO \n");
    for (int i = 0 ; i < 10 ; i ++ )
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            printf (" %c ", mat[i][j]);
        }
        printf ("\n");
    }
}

/*
void leiaCad é uma função que trabalha seu parametro como ponteiro, isso porque, ela é utilizada para inserir o valor na variavel palavra_pesquisada no int main ().
utilizá-la como ponteiro possibilita que nós possamos ter o valor de palavra_pesquisada em qualquer lugar do código sem a necessidade de declará-la como GLOBAL
*/


void leiaCad (char* palavra)
{
    printf ("Informe a palavra que será pesquisada\n");
    scanf ("%s", palavra);

}

/*
void matTeste () é, a principio, uma matriz para realizar o teste padrão na opção 5 do programa, entretanto, ela também é utilizada caso o usuário não digite
uma matriz atráves do teclado, garantindo que assim o programa não tenha falha ao executar, pois ele irá buscar a palavra_pesquisada na matriz padrão e não em
uma matriz vazia.
*/



void matTeste ()
{
mat[0][0]='a'; mat[0][1]='b'; mat[0][2]='a'; mat[0][3]='c'; mat[0][4]='a'; mat[0][5]='x'; mat[0][6]='a'; mat[0][7]='b'; mat[0][8]='a'; mat[0][9]='a';
	mat[1][0]='c'; mat[1][1]='b'; mat[1][2]='y'; mat[1][3]='f'; mat[1][4]='a'; mat[1][5]='z'; mat[1][6]='a'; mat[1][7]='a'; mat[1][8]='a'; mat[1][9]='l';
	mat[2][0]='i'; mat[2][1]='t'; mat[2][2]='a'; mat[2][3]='e'; mat[2][4]='h'; mat[2][5]='p'; mat[2][6]='e'; mat[2][7]='r'; mat[2][8]='o'; mat[2][9]='a';
	mat[3][0]='p'; mat[3][1]='i'; mat[3][2]='r'; mat[3][3]='a'; mat[3][4]='v'; mat[3][5]='e'; mat[3][6]='r'; mat[3][7]='o'; mat[3][8]='f'; mat[3][9]='f';
	mat[4][0]='o'; mat[4][1]='z'; mat[4][2]='t'; mat[4][3]='a'; mat[4][4]='z'; mat[4][5]='m'; mat[4][6]='a'; mat[4][7]='d'; mat[4][8]='i'; mat[4][9]='f';
	mat[5][0]='i'; mat[5][1]='x'; mat[5][2]='q'; mat[5][3]='m'; mat[5][4]='u'; mat[5][5]='a'; mat[5][6]='l'; mat[5][7]='a'; mat[5][8]='l'; mat[5][9]='i';
	mat[6][0]='t'; mat[6][1]='c'; mat[6][2]='w'; mat[6][3]='n'; mat[6][4]='u'; mat[6][5]='s'; mat[6][6]='u'; mat[6][7]='l'; mat[6][8]='g'; mat[6][9]='n';
	mat[7][0]='t'; mat[7][1]='e'; mat[7][2]='s'; mat[7][3]='t'; mat[7][4]='e'; mat[7][5]='d'; mat[7][6]='e'; mat[7][7]='l'; mat[7][8]='i'; mat[7][9]='n';
	mat[8][0]='h'; mat[8][1]='o'; mat[8][2]='m'; mat[8][3]='a'; mat[8][4]='r'; mat[8][5]='o'; mat[8][6]='b'; mat[8][7]='o'; mat[8][8]='b'; mat[8][9]='a';
	mat[9][0]='k'; mat[9][1]='o'; mat[9][2]='a'; mat[9][3]='z'; mat[9][4]='z'; mat[9][5]='z'; mat[9][6]='a'; mat[9][7]='m'; mat[9][8]='a'; mat[9][9]='l';
}



/*
dirEsq é um procedimento que tem como objetivo identificar as palavras no caça palavras atráves do sentindo DIR-ESQ, para isso foram utilizadas estruturas de
repetição, estruturas condicionais, variaveis auxiliares, dentre outros.
*/
void dirEsq(char palavra[10])
{
    int auxJ, cC_palavra = 0 ;
    int string_tamanho = strlen(palavra) ;
//* São criadas as variaveis auxiliares locais para a função */


// imprime matriz para que se torne mais fácil checar as informações no caça palavras.


    printf ("\n MATRIZ ABAIXO \n");
    for (int i = 0 ; i < 10 ; i ++ )
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            printf ("%c  ", mat[i][j]);
        }
        printf ("\n");
    }
//informa a palavra pesquisada para que o usuário não corra risco de esquecer qual palavra ele digitou

    printf ("Palavra pesquisada: %s \n", palavra);

//uma estrutura de repetição for de i até i < 10 para que ele percorra todas as linhas da matriz
    for ( int i = 0 ; i < 10  ; i++ )
    {
//for de j até j < 10 para que ele percorra toadas as colunas da matriz de forma decremental (j--), para que ele rode da direita para a esquerda e
// não da esquerda para a direita como é o convencional
        for ( int j = 9 ; j > i - string_tamanho   ; j-- )
        {

            auxJ = j ;
            cC_palavra = 0 ;
            while ( cC_palavra < string_tamanho &&  mat[ i ][ auxJ ] == palavra [ cC_palavra ]    )
            {
//caso as condições satisfaçam o while, auxJ decrementa em -1 para que a matriz mat procure na próxima coluna (mat [i] [aux-1], ou seja, mat [0][8]
//cC_palavra é encrementado para +1 para realizar a busca pela letra no próximo indice de palavra (palavra [cC_palavra], ou seja, palavra [1]
                auxJ -- ;
                cC_palavra ++ ;
            }
            if( cC_palavra == string_tamanho )
//caso todas as posições de palavra estejam em algum lugar das linhas da matriz, ele será comparado, para checar se o  resultado da soma de cC_palavra
//corresponde ao tamanho da palavra pesquisada (string_tamanho)

                printf( "achou esq -->dir: lin %d  col: %d\n", i,  j ) ;
//imprime para o usuário as posições onde a palavra está na matriz
        }
    }
    system ("pause");


}
void esqDir(char palavra[10])
{
    int auxJ = 0, cC_palavra = 0 ;
    int string_tamanho = strlen(palavra) ;
    //* São criadas as variaveis auxiliares locais para a função */


    // imprime matriz para que se torne mais fácil checar as informações no caça palavras.
    printf ("\n MATRIZ ABAIXO \n");
    for (int i = 0 ; i < 10 ; i ++ )
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            printf ("%c  ", mat[i][j]);
        }
        printf ("\n");
    }
    //informa a palavra pesquisada
    printf ("Palavra pesquisada: %s \n", palavra);

//uma estrutura de repetição for de i até i < 10 para que ele percorra todas as linhas da matriz
    for ( int i = 0 ; i < 10 ; i++ )
    {
//estrutura de repetição for padrão, com j++
        for ( int j = 0 ; j < (10 - string_tamanho + 1) ; j++ )
        {
            auxJ = j ;
            cC_palavra = 0 ;
            while (cC_palavra < string_tamanho && mat[ i ][ auxJ ] == palavra[ cC_palavra ]    )
            {
    //caso as condições satisfaçam o while, auxJ incrementa  em +1 para que procure na próxima coluna (mat [i] [aux+1], ou seja, mat [0][1]
    //cC_palavra é encrementado para +1 para realizar a busca pela letra no próximo indice de palavra (palavra [cC_palavra], ou seja, palavra [1]
                //funciona de maneira similar a DIRESQ, a diferença é que o for de j está sendo j++.
                auxJ ++ ;
                cC_palavra ++ ;
            }
            if( cC_palavra == string_tamanho )
//caso todas as posições de palavra estejam em algum lugar das linhas da matriz, ele será comparado, para checar se o  resultado da soma de cC_palavra
//corresponde ao tamanho da palavra pesquisada (string_tamanho)
                printf( "achou esq -->dir: lin %d  col: %d\n", i,  j ) ;
//imprime para o usuário as posições onde a palavra está na matriz

        }
    }
    system ("pause");


}
void cima_baixo(char palavra[10])
{

    int auxJ = 0, cC_palavra = 0 ;
    int string_tamanho = strlen(palavra) ;
    //funciona da mesma forma nas funções anteriores
    printf ("\n MATRIZ ABAIXO \n");
    for (int i = 0 ; i < 10 ; i ++ )
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            printf ("%c  ", mat[i][j]);
        }
        printf ("\n");
    }
    printf ("Palavra pesquisada: %s \n", palavra);   //mesma forma das funções anteriores


    for ( int i = 0 ; i < 10 ; i++ )
    {
        for ( int j = 0 ; j < (10 - string_tamanho + 1) ; j++ )
        {
            /*na verificação de cima_baixo nós fazemos a mesma forma de verificação de esqDir, entretanto, muda-se a ordem de i e j para a matriz
            mat, fica assim: mat[j][i], para que assim, ele percorra mat de modo que as linhas [j] seja incrementada antes de coluna[i], isso
            ocorre porque o for (de j) é percorrido mais rapidamente que o for (de i), já que o for de i só será percorrido quando o for de j for completamente
            executado */

            auxJ = j ;
            cC_palavra = 0 ;
            while (cC_palavra < string_tamanho && mat[ auxJ ][ i ] == palavra[ cC_palavra ]    )
            {
               /* a mesma lógica utilizada para a verificação de esqDir, mudando apenas as colunas de mat, que nesse caso fica: mat [auxJ][i] */
                auxJ ++ ;
                cC_palavra ++ ;
            }
            if( cC_palavra == string_tamanho )
                printf( "achou cima-->baixo: lin %d  col: %d\n", j,  i ) ;

        }
    }
    system ("pause");

}
void baixo_cima (char palavra[10])
{
    int auxJ = 0, cC_palavra = 0 ;
    int string_tamanho = strlen(palavra) ;
    printf ("\n MATRIZ ABAIXO \n");
    for (int i = 0 ; i < 10 ; i ++ )
    {
        for (int j = 0 ; j < 10 ; j ++ )
        {
            printf ("%c  ", mat[i][j]);
        }
        printf ("\n");
    }
    char c_palavra[10]; // declação do inverso da palavra
    int aux = strlen(palavra);

    // for utilizado para armazenar o inverso de palavra
    for(int i = 0; i < strlen(palavra); i++)
    {
        c_palavra[i] = palavra[aux - 1];
        aux--;
    }
    /* por dificuldades de implementação para verificação na última coluna (posição 9) a partir da lógica de decremento (onde j e i começam em 9 e vão
    perdendo valor a cada j-- ou i--) foi implementada a mesma lógica utilizada para encontrar a palavra de cima_baixo, porém, utilizando o inverso dela.
    Isso porque, se formos analisar, a palavra, tanto em cima_baixo, como em baixo_cima, estarão na mesma direção, ou seja, vai ser percorrida pelas estruturas de repetição,
    assim, para encontramos a posição de baixo_cima a partir do mesmo for de cima_baixo, basata que buscarmos pela palavra inversa, que ela apresentará a posição desejada.
    Por exemplo: o usuário digita a palavra "sapo", o procedimento copiará ela invertida para c_palavra, que terá como dado "opas", tal palavra, por sua vez, será procurada
    em mat pela estutura de repetição utilizada em cima_baixo
    */
    printf ("Palavra pesquisada: %s \n", palavra);
    for ( int i = 0 ; i < 10 ; i++ )
    {
        for ( int j = 0 ; j < (10 - string_tamanho + 1) ; j++ )
        {
            auxJ = j ;
            cC_palavra = 0 ;
            while (cC_palavra < string_tamanho && mat[ auxJ ][ i ] == c_palavra[ cC_palavra ]    )
            {

                auxJ ++ ;
                cC_palavra ++ ;
            }
            if( cC_palavra == string_tamanho )
                printf( "achou cima-->baixo: lin %d  col: %d\n", j,  i ) ;
        }
    }
}

void op_pesq(char palavra_pesquisada[10], int op)
{
    /*
    op_pesq é uma função que é uma função utilizado no case 4 da função main,
    que tem como função executar um switch case para as opções de menuPesq();

    */
    switch(op)
    {
    case 1:
        esqDir(palavra_pesquisada);
        break;
    case 2:
        dirEsq(palavra_pesquisada);
        break;
    case 3:
        baixo_cima(palavra_pesquisada);
        break;
    case 4:
        cima_baixo(palavra_pesquisada);
        break;
    }
}
void menuPes()
{
    /*

    menu utilizado no submenu da opção 4 do teclado, tem como objetivo diminuir a quantidade de informações que
    aparece ao mesmo tempo para o usuário e também dá a opção de selecionar o tipo
    de varredura desejada

    */

    printf ("1- Esquerda -> Direita\n");
    printf ("2- Direita  -> Esquerda\n");
    printf ("3- Baixa    -> Cima\n");
    printf ("4- Cima     -> Baixo\n\n");
    printf ("Atenção! Deve-se utilizar a função 3 primeiro para realizar a busca pela palavra!\n");

}
void teste_padrao()
{

    /* realiza o teste de todas as formas de pesquisa a partir de palavras pre-definidas pelo desenvolvedor,
    as palavras são passadas a partir da função strcpy para uma variavel, variavel essa que, por sua vez, é passada por parametro para as respectivas funções de
    verificação
    */

    printf ("RODANDO TESTE PADRÃO!\n");

    char palavra1[10],palavra2[10], palavra3[10], palavra4[10];

    strcpy (palavra1, "tray");

    strcpy (palavra2, "yart");

    strcpy (palavra3, "aba");

    strcpy (palavra4, "ama");
    //São chamadas todas as funções para cada uma das palavras:
    esqDir(palavra1);

    cima_baixo(palavra1);

    esqDir(palavra2);

    cima_baixo(palavra2);

    esqDir(palavra3);

    cima_baixo(palavra3);

    esqDir(palavra4);

    cima_baixo(palavra4);

    dirEsq(palavra1);

    baixo_cima(palavra1);

    dirEsq(palavra2);

    baixo_cima(palavra2);

    dirEsq(palavra3);

    baixo_cima(palavra3);

    dirEsq(palavra4);

    baixo_cima(palavra4);



}
int main()
{
    //definindo idioma para portugues - Brasil para que funcione os caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int operacao;

    char palavra_pesquisada[10];

    int op=0;
    //exibe o menu inicial
    menuPrincipal();
    matTeste();
    /*insere dados na mat[10][10], garantindo que sempre haja dados dentro da matriz, evitando que o programa tente
    verificar as informações dentro de uma matriz vazia.
    caso o usuario queira inserir os dados na matriz, ele irá cair no case 1 e na função leia, que altera os valores antes alocados por matTeste() em mat,
    garantindo que usuário consiga pesquisar na matriz digitada até que o programa seja finalizado.
    */


    do
    {

        scanf ("%i", &operacao);
        switch (operacao)
        {
        case 1:

            leia();
            break;

        case 2:
            imprima();

            system ("pause");

            system ("cls");

            break;

        case 3:

            leiaCad(palavra_pesquisada);

            break;

        case 4:

            menuPes();

            scanf ("%i", &op);

            op_pesq(palavra_pesquisada,op);

            break;

        case 5:

            teste_padrao();

            break;

        case 0:

            break;

        }

        menuPrincipal();
    }
    while(operacao!=0);

    return 0;
}

/*
Sistema utilizado para desenvolver o programa:
Windows 10 64 Bits - Versão	10.0.19043 Compilação 19043
IDE: Code::Blocks IDE
Processador	AMD Athlon(tm) II X4 645 Processor, 3100 Mhz, 4 Núcleo(s), 4 Processador(es) Lógico(s)
*/


