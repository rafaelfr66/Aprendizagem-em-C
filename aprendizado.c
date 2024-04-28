#include <stdio.h>
#include <stdlib.h>
int escolha;//variável responsável pela escolha no menu principal
int num;//variável usada nos sub-menus
int ret;//variável criada somente para o return
int operadores;//variável de escolha dos operadores aritméticos
void loop();

int main() {
  loop();
  return 0;
  }

void loop() {
        system("clear");
        printf("PROGRAMA DE APRENDIZADO SOBRE LINGUAGEM   C\n\n\n\n\n");
        printf("bem vindo! selecione a opção a qual deseja\n\n\n");
        printf("(1) Quero aprender sobre variáveis primitivas\n\n");
        printf("(2) Quero aprender sobre estruturas condicionais\n\n");
        printf("(3) Quero aprender sobre estruturas de repetição\n\n");
        printf("(4) Quero aprender sobre operadores\n\n");
        printf("(5) Quero aprender sobre as funções de usuário, como vetor, matriz ou relacionados.\n\n");
        scanf("%d", &escolha);
  
  //comando para menu de variáveis: até a linha 66
  if (escolha == 1){
  system("clear");
  printf("Menu de Variáveis primitivas, tecle o número correspondente a variável que se deseja aprender\n\n");
  printf("digite 1 para variável int\n\n");
  printf("digite 2 para variável float\n\n");
  printf("digite 3 para variável char\n\n");
  printf("digite 4 para variável double\n\n");
  scanf("%d", &num);

         //submenu de escolha para variável int
         if (num == 1) {
         system("clear");
         printf("\n\n\n\n\nINT:\n");
         printf("variável que armazena números inteiros, positivos ou negativos, como 1,2 ou 3\n");
         printf("Se usa a sintaxe <int x;>, com 'x' sendo o nome da variável que se está declarando\n\n\n\n\n\n\n\n");
         }    

         //submenu de escolha para variável float
         if (num == 2) {
         system("clear");
         printf("\n\n\n\n\nFLOAT:\n");
         printf("variável que armazena números decimais, positivos ou negativos, como 1.2 ou 3.4\n");
         printf("Se usa a sintaxe <float x;>, com 'x' sendo o nome da variável que se está declarando\n\n\n\n\n\n\n\n");
         }       

         //submenu de escolha para variável char
         if (num == 3) {
         system("clear");
         printf("\n\n\n\n\nCHAR\n");
         printf("variável que armazena apenas 1 caractere, como 'A' ou 'B' \n");
         printf("Se usa a sintaxe <char x;>, com 'x' sendo o nome da variável que se está declarando\n\n\n\n\n\n\n\n");
         }

        //submenu de escolha para variável double
        if (num == 4) {
        system("clear");  
        printf("\n\n\n\n\nDOUBLE:\n");
        printf("variável que também armazena um ponto flututante, porém com muito mais precisão que o float, por possuir 8 bytes e conseguir representar números em uma faixa muito extensa, como 1.77774 ou 3.75643444\n");
        printf("Se usa a sintaxe <double x;>, com 'x' sendo o nome da variável que se está declarando\n\n\n\n\n\n\n\n");
        }
}//fim menu de variáveis

//comandos para menu de condicionais: Até a linha 97
if (escolha == 2){
    system("clear");
    printf("Menu de estruturas condicionais\n\n\n");
    printf("digite 1 para estrutura IF/ELSE\n\n");
    printf("digite 2 para estrutura SWITCH\n\n");
    scanf("%d", &num);

           //submenu de escolha para condicional IF/ELSE
          if(num == 1){
          system("clear");
          printf("estrutura IF/ELSE \n\n\n");
          printf("*IF é conhecida como instrução de tomada de decisão, pois ela faz a tomada de decisão com base em determinada condição ou expressão. O trecho de código dentro de uma instrução if é executado se a condição for avaliada como verdadeira.\n\n");
          printf("exemplo: if (condição {\n <estrutura de códigos>\n}\n\n\n");
          sleep(1);
      
          printf("*ELSE é a estrutura que será executada caso a condição IF for avaliada como falsa\n\n");
          printf("Else (condição)  {\n <estrutura de comandos>\n}");
          sleep(1);

          printf("\n\n\n*ELSE IF funciona como um 'senão, se' dando uma segunda condição a ser atendida, caso a primeira seja verificada como falsa. É poucamente utilizada pela sua complexidade, mas tem suas aplicações.\n\n exemplo: \n\n if (condição) { \n <estrutura de comandos>\n }\n else if (condição 2) {\n <estrutura de comandos>\n}\n");
          }
  
           //submenu de escolha para condicional Switch
          if(num == 2){
          system("clear");
          printf("estrutura SWITCH\n\n");
          printf("Switch(caso) é usada como um encadeamento de if's, reduzindo o código e o tornando mais simples e leve para ser executado.\n\n Exemplo: switch(variável)\n{\ncase condição1:\n estrutura de comandos;\n break;\n\ncase condição2:\n estrutura de comandos\nbreak;\n\ndefault:\n estrutura de comandos;\n}\n\n\n} ");
          }
}//fim menu de condicionais

//menu de estruturas de repetição: até a linha 130
if (escolha == 3){
system("clear");
printf("Menu de estruturas de repetição\n\n\n");
printf("digite 1 para estrutura for\n\n");
printf("digite 2 para estrutura while\n\n");
printf("digite 3 para estrutura Do-while\n\n");
scanf("%d", &num); 

      //estrutura for
      if(num == 1){
      system("clear");
      printf("estrutura FOR\n\n");
      printf("FOR(ou para) permite criar-se um laço de repetição até que uma condição seja atendida\n\n Exemplo:\n\nint x;\nfor (x = 1; x <= 100; x++){\nprintf (%d - ', x);\n}\n");
      printf("\n   Neste programa, x é inicializado em 1. Desde que x seja menor ou igual a 100, a função printf( )é chamada. Depois que a função printf( ) retorna, x é incrementado em 1 e testado para ver se é menor ou igual a 100. Este processo repete-se até que x seja maior que 100, ponto este em que a repetição termina.");
      }

      //estrutura while
      if(num == 2){
      system("clear");
      printf("estrutura WHILE\n\n");
      printf("WHILE(ou enquanto) permite criar-se um laço de repetição até que uma condição seja atendida, funciona de forma exatamente oposta ao for.\n\n Exemplo: while (condição) {\n <Instrução ou bloco de instruções>\n}\n\n Neste caso, enquanto a condição dentro do while não for atendida, tudo que está dentro da estrutura continuará se repetindo \n\n");
      }

      //estrutura Do-while
      if(num == 3){
      system("clear");
      printf("estrutura DO-WHILE\n\n");
      printf("Diferente do while convencional, essa estrutura garante que o código será executado ao menos uma vez, já que a condição só é testada no final do laço. Como por exemplo:\n\ndo\n{\n<estrutura de código>\n\n} while(condição);\n\nReturn to 0\n\n");
      }

}//fim do menu de estruturas de repetição
//menu de seleção para operadores: até a linha 205
if (escolha == 4){
system("clear");
printf("Menu de operadores\n\n\n");
printf("digite 1 para operadores aritméticos\n\n");
printf("digite 2 para operadores relacionais\n\n");
printf("digite 3 para operadores lógicos\n\n");
printf("digite 4 para operadores de incremento e decremento\n\n");
scanf("%d", &num); 
    
         //operadores aritméticos
         if (num == 1){
         system("clear");
         printf("Operadores aritméticos:\n\n");
         printf("Operadores aritméticos são os operadores matemáticos básicos já conhecidos, mas introduzidos à linguagem C de programação. selecione no menu abaixo o operador a qual se deseja aprender :\n\n");
         printf("Digite 1 para aprender sobre soma\nDigite 2 para aprender sobre subtração\nDigite 3 para aprender sobre multiplicação\nDigite 4 para aprender sobre divisão\n\n\n");
         scanf("%d", &operadores);
         system("clear");

                 //operadores aritméticos/SOMA 
                 if (operadores == 1){
                 printf("SOMA\n\n\n Se trata da soma comum adaptada em linguagem C, somando duas variáveis e atribuindo o valor a uma nova variável\n\n Exemplo:\n\n\nInt valor1\nInt valor2\nInt valorfinal\n\nvalorfinal = valor1 + valor2\n");
                 }

                 //operadores aritméticos/SUBTRAÇÃO
                 if (operadores == 2){
                 printf("SUBTRAÇÃO\n\n\n Se trata da subtração comum adaptada em linguagem C, subtraindo duas variáveis e atribuindo o valor a uma nova variável\n\n Exemplo:\n\n\nInt valor1\nInt valor2\nInt valorfinal\n\nvalorfinal = valor1 - valor2\n");
                 }

                 //operadores aritméticos/MULTIPLICAÇÃO
                 if (operadores == 3){
                 printf("MULTIPLICAÇÃO\n\n\n Se trata da multiplicação comum adaptada em linguagem C, multiplicando duas variáveis e atribuindo o valor a uma nova variável\n\n Exemplo:\n\n\nInt valor1\nInt valor2\nInt valorfinal\n\nvalorfinal = valor1 * valor2\n");
                 }

                 //operadores aritméticos/DIVISÃO
                 if (operadores == 4){
                 printf("DIVISÃO\n\n\n Se trata da divisão comum adaptada em linguagem C, dividindo duas variáveis e atribuindo o valor a uma nova variável\n\n Exemplo:\n\n\nInt valor1\nInt valor2\nInt valorfinal\n\nvalorfinal = valor1 / valor2\n");
                 }
}//fechando operadores aritméticos

        //operadores relacionais
        if(num == 2){
        system("clear");
        printf("Operadores relacionais:\n\n");
        printf("Operadores relacionais são usados para comparar e relacionar resultados, a fim de tomar decisões para executar(ou não) determinada parte do código, como:\n\n");
        printf("igual- ==\n");
        printf("diferente- !=\n");
        printf("maior que- >\n");
        printf("menor que- <\n");
        printf("maior ou igual- >=\n");
        printf("menor ou igual- <=\n\n");
        printf("exemplo:\n if(x > y){\nestrutura de códigos\n}");
        }

        //operadores lógicos
        if(num == 3){
        system("clear");
        printf("Operadores lógicos:\n\n");
        printf("Os operadores lógicos são utilizados quando é necessário usar duas ou mais condições dentro da mesma instrução if para que seja tomada uma única decisão cujo resultado será verdadeiro ou falso.\n\n");
        printf("os operadores são:\n\n");
        printf("&& (E)\n");
        printf("|| (OU)\n");
        printf("! (NÃO)\n\n");
        printf("Exemplo: if(x > y) && (y == z){\nestrutura de códigos\n}");
        }

        //operadores de incremento e decremento
        if(num == 4){
        system("clear");
        printf("Operadores de incremento e decremento:\n\n");
        printf("Quando fazemos a = a+1 ou a = a-1, estamos atribuindo ao 'a' seu antigo valor +1. Fazer isso muitas vezes pode se tornar repetitivo e estender o código, por isso criaram operadores de incremento/decremento que fazem isso de forma mais simples\n\n");
        printf("Exemplo: \nint main(){\n\n A= a++(ou a--)\n}\n");
        printf("Assim, o valor de 'A'estará sempre incrementando +1 ou decrementando -1, como em um loop");
        }
}//fim menu operadores

//menu funções de usuário: até a linha 266
if (escolha == 5){
system("clear");
printf("Funções de usuário\n\n\n");
printf("digite 1 para vetor\n\n");
printf("digite 2 para Matriz\n\n");
printf("digite 3 para subrotina\n\n");
printf("digite 4 para ponteiro\n\n");
scanf("%d", &num); 

     //vetor
     if(num == 1){
     system("clear");
     printf("Vetor:\n\n");
     printf("Vetor é uma forma de declarar várias variáveis de um mesmo tipo, sem a necessidade de declarar uma a uma manualmente.\n\n");
     printf("Exemplo:\n\nVetor[0] = 4; // Coloca 4 na primeira posição de 'Vetor'\n");
     printf("Vetor[4] = 8; // Coloca 8 na última posição de 'Vetor'\n\n");
     printf("Int main(){\n\n");
     printf("int Vetor[5];  // declara um vetor de 5 posições\n");
     printf("Vetor[0] = 9; // coloca 9 na primeira posição do vetor\nVetor[4] = 30 // coloca 30 na última posição do vetor\n\n}");
     }

     //matriz
     if(num == 2){
     system("clear");
     printf("Matriz:\n\n");
     printf("Matriz é a uma estrutura de dados do tipo vetor com duas ou mais dimensões.\nOs itens de uma matriz tem que ser todos do mesmo tipo de dado.Na prática, as matrizes formam tabelas na memória.\n\n");
     printf("Exemplo:\n\nint Matriz[5][3]; // declara uma matriz de 5 linhas e 3 colunas\n\n");
     printf(" Matriz[0][1] = 15; // coloca 15 na célula que está na primeira linha e na segunda coluna da matriz\n\n");
     printf("há também como preencher uma matriz com um dado, como mostrado abaixo:\n");
     printf("Para fazer o preenchimento de uma matriz, devemos percorrer todos os seus elementos e atribuir-lhes um valor.\n");
     printf("Isto pode ser feito tanto gerando valores para cada elemento da matriz, como recebendo os valores pelo teclado\n\n");
     printf("Exemplo:\n\n");
     printf("for ( i=0; i<3; i++ )\n");
     printf("for ( j=0; j<3; j++ )\n{\n");
     printf("scanf ('%d', &matriz[ i ][ j ]);\n}\n\n");
     printf("Neste trecho de código, a variável i representa a linha e j a coluna da matriz.");
     }

     //sub-rotina
     if(num == 3){
     system("clear");
     printf("Sub-rotina:\n\n");
     printf("Sub-rotina é um mini-progama dentro do código, uma estrutura de repetição de parâmetros e variáveis. Pode ser usada para criar loops e blocos de comando em um código.\n\n");
     printf("Exemplo:\n\n");
     printf("Nome_da_rotina()\n{\nestrutura de comandos\nbloco de comandos\n}\n");
     }

     //Ponteiro
     if(num == 4){
     system("clear");
     printf("Ponteiro:\n\n");
     printf("Ponteiros são muito úteis quando uma variável tem que ser acessada em diferentes partes de um programa.\nNeste caso, o código pode ter vários ponteiros espalhados por diversas partes do programa, apontando para a variável que contém o dado desejado.Caso este dado seja alterado, não há problema algum, pois todas as partes do programa tem um ponteiro que aponta para o endereço onde reside o dado atualizado.\n\n");
     printf("Exemplo:\n\n");
     printf("int valor = 27;\n");
     printf("int *ptr;\n\n");
     printf("ptr = &valor;\n\n");
     printf("printf <Conteudo da variável ponteiro> ptr: %x, ptr)\n");
     }
}//fim menu de funções de usuário

     if (escolha > 5){
       system("clear");
       printf("\n\nnúmero inválido, por favor retorne ao início e tente novamente\n\n\n");
     }
          printf("\n\ndigite 0 para retornar ao início \n\n\n");
          scanf("%d", &ret);
          if(ret == 0){
          loop();
          }  
}

    
  
  
