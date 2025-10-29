# Repositório de Projetos do Cursus 42

[Read in English](README.md)

Bem-vindo ao repositório dos meus projetos desenvolvidos no **42 Cursus**! Aqui encontra uma coleção de códigos desenvolvidos ao longo do curso, onde exploro várias bibliotecas e funcionalidades em C. Este repositório será atualizado com novos projetos à medida que avanço no currículo.

## Projetos Rank 00

### 1. 📚 [Libft](Libft)
   Uma biblioteca pessoal que reproduz funções da biblioteca padrão do C, permitindo utilizá-las em outros projetos do cursus.

   <details>
     <summary> 🛈 Detalhes do Projeto Libft</summary>

   - **Objetivo**: Criar uma biblioteca pessoal, `libft.a`, contendo várias funções de uso geral, como manipulação de strings, conversão e manipulação de memória.
   - **Funções Implementadas**:

     | Função          | Arquivo           | Descrição                                                             |
     |-----------------|-------------------|-----------------------------------------------------------------------|
     | `ft_isalpha`    | `ft_isalpha.c`    | Verifica se o caractere é alfabético                                 |
     | `ft_isdigit`    | `ft_isdigit.c`    | Verifica se o caractere é um dígito                                  |
     | `ft_isalnum`    | `ft_isalnum.c`    | Verifica se o caractere é alfanumérico                               |
     | `ft_isascii`    | `ft_isascii.c`    | Verifica se o caractere está na tabela ASCII                         |
     | `ft_isprint`    | `ft_isprint.c`    | Verifica se é um caractere imprimível                                |
     | `ft_strlen`     | `ft_strlen.c`     | Calcula o comprimento de uma string                                  |
     | `ft_memset`     | `ft_memset.c`     | Preenche os bytes de um bloco de memória com um valor constante      |
     | `ft_bzero`      | `ft_bzero.c`      | Preenche os bytes de um bloco de memória com zero                    |
     | `ft_memcpy`     | `ft_memcpy.c`     | Copia um bloco de memória                                            |
     | `ft_memmove`    | `ft_memmove.c`    | Copia um bloco de memória, tratando sobreposições                    |
     | `ft_strlcpy`    | `ft_strlcpy.c`    | Copia uma string                                                     |
     | `ft_strlcat`    | `ft_strlcat.c`    | Concatena duas strings                                               |
     | `ft_toupper`    | `ft_toupper.c`    | Converte um caractere para maiúscula                                 |
     | `ft_tolower`    | `ft_tolower.c`    | Converte um caractere para minúscula                                 |
     | `ft_strchr`     | `ft_strchr.c`     | Busca a primeira ocorrência de um caractere em uma string            |
     | `ft_strrchr`    | `ft_strrchr.c`    | Busca a última ocorrência de um caractere em uma string              |
     | `ft_strncmp`    | `ft_strncmp.c`    | Compara duas strings                                                 |
     | `ft_memchr`     | `ft_memchr.c`     | Busca um byte em um bloco de memória                                 |
     | `ft_memcmp`     | `ft_memcmp.c`     | Compara dois blocos de memória                                       |
     | `ft_strnstr`    | `ft_strnstr.c`    | Busca uma substring dentro de outra string, limitado a um tamanho    |
     | `ft_atoi`       | `ft_atoi.c`       | Converte uma string para inteiro                                     |
     | `ft_calloc`     | `ft_calloc.c`     | Aloca e inicializa memória                                           |
     | `ft_strdup`     | `ft_strdup.c`     | Duplica uma string                                                   |
     | `ft_substr`     | `ft_substr.c`     | Cria uma substring a partir de uma string                            |
     | `ft_strjoin`    | `ft_strjoin.c`    | Concatena duas strings em uma nova string                            |
     | `ft_strtrim`    | `ft_strtrim.c`    | Remove caracteres específicos do início e fim de uma string          |
     | `ft_split`      | `ft_split.c`      | Divide uma string em substrings, usando um delimitador               |
     | `ft_itoa`       | `ft_itoa.c`       | Converte um número inteiro para string                               |
     | `ft_strmapi`    | `ft_strmapi.c`    | Aplica uma função a cada caractere de uma string e cria uma nova     |
     | `ft_striteri`   | `ft_striteri.c`   | Aplica uma função a cada caractere de uma string                     |
     | `ft_putchar_fd` | `ft_putchar_fd.c` | Escreve um caractere em um file descriptor                           |
     | `ft_putstr_fd`  | `ft_putstr_fd.c`  | Escreve uma string em um file descriptor                             |
     | `ft_putendl_fd` | `ft_putendl_fd.c` | Escreve uma string seguida de uma nova linha em um file descriptor   |
     | `ft_putnbr_fd`  | `ft_putnbr_fd.c`  | Escreve um número inteiro em um file descriptor                      |
     
   - **Funções Bônus**:

     | Função          | Arquivo           | Descrição                                                             |
     |-----------------|-------------------|-----------------------------------------------------------------------|
     | `ft_lstnew`     | `ft_lstnew.c`     | Cria um novo elemento de lista                                       |
     | `ft_lstadd_front` | `ft_lstadd_front.c` | Adiciona um elemento no início da lista                        |
     | `ft_lstsize`    | `ft_lstsize.c`    | Calcula o tamanho da lista                                           |
     | `ft_lstlast`    | `ft_lstlast.c`    | Retorna o último elemento da lista                                   |
     | `ft_lstadd_back`| `ft_lstadd_back.c`| Adiciona um elemento no final da lista                               |
     | `ft_lstdelone`  | `ft_lstdelone.c`  | Remove e libera um elemento da lista                                 |
     | `ft_lstclear`   | `ft_lstclear.c`   | Limpa e libera todos os elementos da lista                           |
     | `ft_lstiter`    | `ft_lstiter.c`    | Itera sobre a lista e aplica uma função a cada elemento              |
     | `ft_lstmap`     | `ft_lstmap.c`     | Cria uma nova lista aplicando uma função a cada elemento             |


   - **Normas do Projeto**:
      - Todas as funções são implementadas seguindo a norminette da 42.
      - Memória alocada dinamicamente é liberada corretamente.
      - Inclui um `Makefile` para compilar a biblioteca e um conjunto de regras para limpar, compilar com bônus, etc.
      - O cabeçalho `libft.h` contém as declarações de todas as funções implementadas na biblioteca, facilitando sua utilização e manutenção.

   - **Makefile**:
      - O `Makefile` automatiza o processo de compilação da biblioteca `libft`. Ele inclui várias regras que simplificam a construção e limpeza dos arquivos da biblioteca:
      
         - **Regras**:
           - `make` ou `make all`: Compila todos os arquivos `.c` listados na seção de fontes do `Makefile` e gera a biblioteca estática `libft.a`. Esta biblioteca pode ser vinculada a outros projetos do                   cursus para utilizar as funções implementadas.
           - `make clean`: Exclui todos os arquivos objeto (`.o`) gerados durante a compilação. Esta regra é útil para limpar os arquivos intermediários sem remover a biblioteca `libft.a` final.
           - `make fclean`: Realiza uma limpeza completa, excluindo tanto os arquivos objeto quanto a biblioteca `libft.a`. Esta regra é usada quando se deseja remover todos os arquivos compilados e                         reiniciar o processo de construção do zero.
           - `make re`: Esta regra é um atalho que executa `make fclean` seguido de `make all`, recompilando a biblioteca do zero.

         - **Regra de Bonus**:
           - `make bonus`: Compila as funções bônus adicionais e as inclui na biblioteca `libft.a`. Essas funções bônus fornecem funcionalidades extras, como manipulação de listas encadeadas (funções                     `ft_lst*`), que são frequentemente requisitadas em outros projetos do cursus.

         - **Variáveis**:
           - `CC`: Especifica o compilador, geralmente `gcc`.
           - `CFLAGS`: Contém flags de compilação (por exemplo, `-Wall -Wextra -Werror`), garantindo que o código seja compilado com verificações rigorosas de erro e aviso em conformidade com as normas da                 42.

         - O `Makefile` garante que apenas os arquivos `.c` modificados sejam recompilados, melhorando a eficiência no desenvolvimento e na depuração. Ele segue convenções padrão de `Makefile`, facilitando o             uso para qualquer desenvolvedor familiarizado com `Makefiles`.

        - **Exemplos de Uso**:
           - Execute `make` para compilar a biblioteca.
           - Use `make clean` ou `make fclean` para remover os arquivos intermediários e a biblioteca.
           - Execute `make bonus` para incluir as funções bônus, se necessário.

   - **Arquivo libft.h**:
     - O arquivo `libft.h` é o cabeçalho principal da biblioteca `libft`. Ele contém:
        
         - **Declarações das Funções**: Todas as funções implementadas na `libft` são declaradas aqui. Isso permite que outros arquivos que incluam `libft.h` possam usar essas funções sem precisar                                              redeclará-las.
         
         - **Bibliotecas Necessárias**: Inclui as bibliotecas padrão necessárias, como `<stdlib.h>`, `<unistd.h>`, e `<string.h>`, para garantir que as funções tenham acesso às definições padrão e                            funcionalidades da linguagem C.
         
         - **Definições de Tipos e Estruturas**: Contém definições de estruturas (como `t_list`), usadas para manipulação de listas encadeadas nas funções bônus. A estrutura `t_list`, por exemplo, é                                     usada nas funções `ft_lst*` e é definida com membros como `content` (para o conteúdo do nó) e `next` (para apontar para o próximo nó).

      - **Exemplo da Estrutura t_list**:
        
        ```c
        typedef struct s_list
        {
            void            *content;
            struct s_list   *next;
        } t_list;
        ```

      - **Objetivo**: O `libft.h` serve como um ponto de centralização para todas as declarações e inclusões necessárias para a `libft`. Quando compilado, os outros projetos podem incluir apenas o `libft.h`                      para acessar todas as funções e estruturas oferecidas pela biblioteca.

      - **Utilização**: Qualquer arquivo que queira utilizar funções da `libft` pode incluir `libft.h` com `#include "libft.h"`, facilitando o acesso a toda a biblioteca com uma única linha de inclusão.


   </details>

---

## Projetos Rank 01

### 1. 🖨️ [ft_printf](ft_printf)
Uma implementação personalizada da versátil função `printf`, aprimorando as habilidades de programação em C ao lidar com funções variádicas e saída formatada.

<details>
  <summary> 🛈 Detalhes do Projeto ft_printf</summary>

- **Objetivo**: Desenvolver uma biblioteca, `libftprintf.a`, contendo uma versão personalizada da função `printf`, chamada `ft_printf()`, para imitar o comportamento da função padrão da biblioteca C `printf`.

- **Funcionalidades Implementadas**:

  | Conversão   | Descrição                                                                                         |
  |-------------|--------------------------------------------------------------------------------------------------|
  | `%c`        | Imprime um único caractere                                                                        |
  | `%s`        | Imprime uma string                                                                                |
  | `%p`        | Imprime um endereço de ponteiro no formato hexadecimal                                            |
  | `%d`        | Imprime um número decimal (base 10)                                                              |
  | `%i`        | Imprime um inteiro na base 10                                                                    |
  | `%u`        | Imprime um número decimal sem sinal (base 10)                                                    |
  | `%x`        | Imprime um número em hexadecimal (base 16) em letras minúsculas                                  |
  | `%X`        | Imprime um número em hexadecimal (base 16) em letras maiúsculas                                  |
  | `%%`        | Imprime um símbolo de porcentagem literal                                                        |

- **Destaques**:
  - Utiliza funções variádicas (`va_start`, `va_arg`, `va_end`) para lidar com um número variável de argumentos.
  - Oferece saída formatada usando gerenciamento de buffer mínimo, conforme as restrições do projeto.
  - Totalmente compatível com `libft`, permitindo sua integração em projetos futuros da 42.
  - A biblioteca é avaliada em comparação com a `printf` padrão para garantir precisão e desempenho.

- **Normas do Projeto**:
  - O código segue estritamente as regras da norminette da 42.
  - A memória alocada dinamicamente é liberada corretamente, garantindo a ausência de vazamentos.
  - Inclui um `Makefile` robusto para compilar a biblioteca com diferentes regras.

- **Makefile**:
  - Automatiza o processo de construção da biblioteca `ft_printf`, garantindo simplicidade e consistência.
  - **Regras**:
    - `make` ou `make all`: Compila a biblioteca `libftprintf.a`.
    - `make clean`: Remove os arquivos objeto (`.o`).
    - `make fclean`: Remove todos os arquivos compilados, incluindo `libftprintf.a`.
    - `make re`: Recompila o projeto do zero.
    - `make bonus`: Compila e inclui funcionalidades bônus, se presentes.

- **Exemplo de Uso**:
  ```c
  #include "ft_printf.h"

  int main() {
      ft_printf("Olá, %s! A resposta é %d.\n", "mundo", 42);
      return 0;
  }

- **Desafios e Aprendizado**:
  - Compreender e implementar funções variádicas em C.
  - Gerenciar a análise e a saída de strings formatadas.
  - Emular o comportamento de uma função amplamente utilizada da biblioteca padrão.

</details>

### 2. 📄 [get_next_line](get_next_line) 
Uma função que retorna linhas lidas de um descritor de arquivo, explorando conceitos como variáveis estáticas em C.

<details>
  <summary> 🛈 Detalhes do Projeto get_next_line</summary>

- **Objetivo**: Desenvolver a função `get_next_line()` que retorna uma linha lida de um descritor de arquivo, incluindo o caractere de nova linha (`\n`) se presente.

- **Requisitos**:
  - Repetidas chamadas a `get_next_line()` devem permitir ler o arquivo linha por linha.
  - Se não houver mais nada para ler ou ocorrer um erro, a função deve retornar `NULL`.
  - Deve funcionar tanto para leitura de arquivos quanto para entrada padrão (`stdin`).
  - O retorno deve incluir o caractere de nova linha, exceto no final do arquivo se não houver `\n`.

- **Nome e Arquivos**:
  - Função: `get_next_line`
  - Arquivos: `get_next_line.c`, `get_next_line_utils.c`, `get_next_line.h`

- **Parâmetros e Valor de Retorno**:
  - Parâmetros:
    - `fd`: o descritor de arquivo para leitura.
  - Retorno:
    - Uma string contendo a linha lida ou `NULL` caso não haja mais nada para ler ou ocorra um erro.

- **Funções Externas Permitidas**:
  - `read`, `malloc`, `free`

- **Normas do Projeto**:
  - Todo o código deve estar em conformidade com a *norminette* da 42.
  - Memória alocada deve ser devidamente liberada, sem vazamentos.

- **Desafios**:
  - Utilizar variáveis estáticas de forma eficiente para armazenar dados não processados entre chamadas.
  - Lidar com tamanhos de buffer diferentes e comportamento imprevisível de descritores de arquivo.

- **Prototipagem**:
  ```c
  char *get_next_line(int fd);

- **Bônus**:
  - Implementação que suporta múltiplos descritores de arquivo simultaneamente.
  - Utilizar apenas uma variável estática.
 
- **Exemplo de Uso**:
  ```c
  #include "get_next_line.h"
  #include <fcntl.h>
  #include <stdio.h>

  int main() {
    int fd = open("arquivo.txt", O_RDONLY);
    char *linha;

    while ((linha = get_next_line(fd)) != NULL) {
        printf("%s", linha);
        free(linha);
    }
    close(fd);
    return 0;
  }

- **Considerações Importantes**:

  - Testar com valores de `BUFFER_SIZE` variados (e.g., 1, 42, 9999).
  - Garantir que a função leia o mínimo necessário para retornar cada linha.
  - Tratar erros como ponteiros nulos e descritores inválidos.

</details>

### 3. 💿 [Born2beroot](Born2beroot) 

Um projeto de administração de sistemas que introduz conceitos de virtualização e configuração de servidores seguros.

<details>
  <summary> 🛈 Detalhes do Projeto Born2beRoot</summary>

- **Objetivo**: Criar e configurar uma máquina virtual segura utilizando o VirtualBox (ou UTM) com as seguintes características:
  - Sistema operacional: última versão estável do Debian ou Rocky.
  - Configuração mínima de serviços, sem interface gráfica.
  - Criação de pelo menos duas partições criptografadas usando LVM.

- **Configurações Obrigatórias**:

  - **Firewall**: Configurar o UFW (ou firewalld no Rocky) para permitir apenas conexões na porta SSH 4242.
  
  - **SSH**:
  
    - Serviço rodando na porta 4242.
    - Proibir conexões SSH como root.
  - **Usuários e Grupos**:
  
    - Criar um usuário com seu login e atribuí-lo aos grupos `user42` e `sudo`.
    - Implementar política de senha forte:
      - Expiração a cada 30 dias.
      - Mínimo de 10 caracteres com uma letra maiúscula, uma minúscula e um número.
      - Aviso 7 dias antes da expiração.
      - Proibir mais de 3 caracteres consecutivos idênticos.
  
  - **Sudo**:
    - Limitar a 3 tentativas de autenticação.
    - Exibir uma mensagem personalizada em caso de erro.
    - Arquivar logs de todas as ações em `/var/log/sudo/`.
    - Habilitar o modo TTY e restringir os caminhos usados pelo sudo.
  
  - **Hostname**: Deve ser definido como `<login>42` e ser alterado durante a avaliação.
  
  - **Script de Monitoramento**:
    - Um script `monitoring.sh` que exibe a cada 10 minutos informações como:
      - Arquitetura do sistema e versão do kernel.
      - Número de processadores físicos e virtuais.
      - Uso de RAM e disco.
      - Taxa de utilização da CPU.
      - Data do último reboot.
      - Status do LVM.
      - Número de conexões ativas e usuários logados.
      - Endereço IPv4 e MAC.
      - Número de comandos executados com sudo.

- **Normas**:
  - É necessário configurar e explicar o funcionamento do script `monitoring.sh` durante a defesa.

</details>


---

## Projetos Rank 02

### 1. 🧮 [push_swap](https://github.com/andrade950/42push_swap)
Um projeto otimizado de algoritmo de ordenação utilizando duas pilhas e um conjunto limitado de operações, aprimorando o pensamento algorítmico e a eficiência na programação em C.

<details>
  <summary> 🛈 Detalhes do Projeto push_swap</summary>

- **Objetivo**: Desenvolver um programa, `push_swap`, que ordene uma pilha de inteiros utilizando o menor número possível de operações predefinidas. O objetivo é implementar um algoritmo de ordenação eficiente, respeitando as restrições do projeto.

- **Funcionalidades Implementadas**:  

  | Operação   | Descrição                                                                                   |
  |------------|---------------------------------------------------------------------------------------------|
  | `sa`       | Troca os dois primeiros elementos da pilha `a`                                              |
  | `sb`       | Troca os dois primeiros elementos da pilha `b`                                              |
  | `ss`       | Executa `sa` e `sb` simultaneamente                                                         |
  | `pa`       | Move o elemento do topo da pilha `b` para `a`                                               |
  | `pb`       | Move o elemento do topo da pilha `a` para `b`                                               |
  | `ra`       | Roda `a` (desloca todos os elementos para cima, o primeiro torna-se o último)               |
  | `rb`       | Roda `b` (desloca todos os elementos para cima, o primeiro torna-se o último)               |
  | `rr`       | Executa `ra` e `rb` simultaneamente                                                         |
  | `rra`      | Roda `a` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrb`      | Roda `b` ao contrário (desloca todos os elementos para baixo, o último torna-se o primeiro) |
  | `rrr`      | Executa `rra` e `rrb` simultaneamente                                                       |

- **Destaques**:
  - Implementa algoritmos de ordenação eficientes (ex.: Quick Sort, Radix Sort ou uma variação otimizada).
  - Utiliza duas pilhas (`a` e `b`) e um conjunto limitado de operações para alcançar a ordenação desejada.
  - Garante um número mínimo de operações para cumprir os requisitos do benchmark.
  - Gere memória dinamicamente e evita vazamentos.
  - Tratamento de erros para entradas inválidas (valores não inteiros, duplicados, overflow).

- **Normas do Projeto**:
  - O código segue estritamente a norminette da 42.
  - Não são permitidas variáveis globais.
  - Implementa um `Makefile` robusto para compilação.

- **Makefile**:
  - Automatiza o processo de compilação do `push_swap`, garantindo consistência.
  - **Regras**:
    - `make` ou `make all`: Compila `push_swap`.
    - `make clean`: Remove ficheiros objeto (`.o`).
    - `make fclean`: Remove ficheiros compilados e executáveis.
    - `make re`: Recompila o projeto do zero.
    - `make bonus`: Compila o programa adicional `checker`.

- **Exemplo de Utilização**:
  ```bash
  ./push_swap 2 1 3 6 5 8
  sa
  pb
  pb
  pb
  sa
  pa
  pa
  pa
  ```

- **Requisitos de Benchmark**:
  - Ordenar **100 números aleatórios** em **≤ 700 operações**.
  - Ordenar **500 números aleatórios** em **≤ 5500 operações**.

- **Desafios e Aprendizagem**:
  - Dominar algoritmos de ordenação e otimizá-los para um número mínimo de operações.
  - Implementar e gerir um sistema de duas pilhas.
  - Gerir validação de entrada e tratamento de erros em C.
  - Compreender complexidade temporal e eficiência de algoritmos.

</details>

### 2. 📡 [minitalk](https://github.com/andrade950/42minitalk)
Uma implementação de comunicação entre processos utilizando sinais UNIX.

<details>
  <summary> 🛈 Detalhes do Projeto minitalk</summary>

- **Objetivo**: Criar um programa de comunicação entre um cliente e um servidor utilizando sinais UNIX.

- **Funcionamento**:
  - O **servidor** deve ser iniciado primeiro e exibir seu PID ao iniciar.
  - O **cliente** recebe como parâmetro o PID do servidor e a string a ser enviada.
  - O cliente envia a string ao servidor utilizando apenas os sinais `SIGUSR1` e `SIGUSR2`.
  - O servidor recebe a string e a imprime rapidamente na saída padrão.
  - O servidor deve conseguir lidar com múltiplos clientes sem a necessidade de reinicialização.

- **Funções permitidas**:  
  | Função       | Descrição |
  |-------------|-----------|
  | `write`     | Escreve na saída padrão |
  | `ft_printf` | Imprime mensagens formatadas |
  | `signal`    | Define um manipulador de sinal |
  | `sigemptyset` | Inicializa um conjunto de sinais vazio |
  | `sigaddset` | Adiciona um sinal ao conjunto |
  | `sigaction` | Define ações para sinais |
  | `kill` | Envia sinais para processos |
  | `getpid` | Obtém o PID do processo atual |
  | `malloc` | Aloca memória dinamicamente |
  | `free` | Libera memória alocada |
  | `pause` | Pausa o processo até receber um sinal |
  | `sleep` | Suspende a execução por um tempo determinado |
  | `usleep` | Suspende a execução por um tempo em microssegundos |
  | `exit` | Termina o programa |

- **Normas do Projeto**:
  - O código segue estritamente a norminette da 42.
  - Nenhum vazamento de memória será tolerado.
  - O cliente e o servidor devem ser compilados separadamente e nomeados `client` e `server`.
  - Um `Makefile` deve ser fornecido para compilar os arquivos sem relink.

- **Makefile**:
  - Automatiza o processo de compilação do `minitalk`.
  - **Regras**:
    - `make` ou `make all`: Compila `client` e `server`.
    - `make clean`: Remove ficheiros objeto (`.o`).
    - `make fclean`: Remove ficheiros compilados e executáveis.
    - `make re`: Recompila o projeto do zero.

- **Exemplo de Utilização**:
  ```bash
  # Iniciar o servidor
  ./server
  # O servidor exibirá seu PID, por exemplo: 12345
  
  # Executar o cliente para enviar uma mensagem ao servidor
  ./client 12345 "Hello, Minitalk!"
  ```

- **Desafios e Aprendizagem**:
  - Compreender sinais UNIX e IPC (Inter-Process Communication).
  - Implementar um protocolo de comunicação robusto e confiável.
  - Garantir a integridade dos dados transmitidos sem perdas.
  - Manipular processos e sinais com eficiência em C.

</details>

### 3. 🕹️ [so_long](https://github.com/andrade950/42so_long)
Um pequeno jogo 2D utilizando a biblioteca MiniLibX.

<details>
  <summary> 🛈 Detalhes do Projeto So_Long</summary>

- **Objetivo**: Criar um jogo 2D básico onde o jogador recolhe itens e alcança a saída enquanto navega por um mapa.

- **Funcionalidade**:
  - O jogo carrega um mapa a partir de um ficheiro `.ber` e renderiza-o usando a MiniLibX.
  - O jogador deve recolher todos os colecionáveis antes de alcançar a saída.
  - O jogador movimenta-se usando as teclas **W, A, S, D** ou as setas do teclado.
  - O jogo acompanha o número de movimentos e exibe-os no terminal.
  - O mapa deve seguir regras de formatação específicas (paredes, colecionáveis, saída e posição inicial do jogador).
  - A janela do jogo deve fechar corretamente ao pressionar **ESC** ou ao clicar no botão de fechar.

- **Funções Permitidas**:  
  | Função       | Descrição |
  |--------------|-------------|
  | `open`, `close`, `read`, `write` | Manipulação de ficheiros e entrada/saída |
  | `malloc`, `free` | Alocação de memória |
  | `perror`, `strerror` | Tratamento de erros |
  | `exit` | Terminação do programa |
  | Funções da biblioteca matemática (`-lm`) | Cálculos matemáticos |
  | Funções da MiniLibX | Renderização gráfica e gestão de eventos |
  | `ft_printf` (ou equivalente criado por ti) | Saída formatada |

- **Regras do Projeto**:
  - O código deve seguir a **Norma 42**.
  - Não são permitidos vazamentos de memória.
  - Deve ser fornecido um `Makefile` com as regras padrão: `all`, `clean`, `fclean`, `re`, `bonus`.
  - O jogo deve aceitar como entrada um ficheiro `.ber` válido.

- **Makefile**:
  - Automatiza o processo de compilação do `so_long`.
  - **Regras**:
    - `make` ou `make all`: Compila o projeto.
    - `make clean`: Remove ficheiros objeto (`.o`).
    - `make fclean`: Remove ficheiros compilados e executáveis.
    - `make re`: Recompila o projeto do zero.

- **Exemplo de Utilização**:
  ```bash
  # Compilar o jogo
  make
  
  # Executar o jogo com um ficheiro de mapa
  ./so_long maps/level1.ber
  ```

- **Formato do Mapa**:
  - O mapa deve ser composto pelos seguintes caracteres:
    - `0` → Espaço vazio
    - `1` → Parede
    - `C` → Colecionável
    - `E` → Saída
    - `P` → Posição inicial do jogador
  - Exemplo de um mapa `.ber` válido:
    ```
    111111
    1P0C01
    100001
    1C0E01
    111111
    ```
  - O mapa deve ser **retangular**, rodeado por paredes e conter **pelo menos uma saída, um colecionável e uma posição inicial do jogador**.

- **Funcionalidades Bónus (se implementadas)**:
  - Inimigos que se movem e fazem o jogador perder ao ser tocado.
  - Animação de sprites para melhorar os visuais.
  - Exibir o número de movimentos diretamente na janela do jogo.

- **Desafios e Aprendizagens**:
  - Trabalhar com a MiniLibX para renderização gráfica.
  - Gerir entradas do utilizador e programação baseada em eventos.
  - Implementar um loop de jogo simples e deteção de colisões.
  - Gerir memória eficientemente e garantir uma execução sem erros.

</details>

---

## Projetos Rank 03

### 1. 🐚 [Minishell](https://github.com/andrade950/42minishell)
Uma shell simplificada inspirada no **Bash**, desenvolvida para aprofundar o entendimento sobre processos, sinais e descritores de arquivo em sistemas Unix.

<details>
  <summary> 🛈 Detalhes do Projeto Minishell</summary>

- **Objetivo**:  
  Desenvolver uma shell minimalista de linha de comando que imita o comportamento do **Bash**. O projeto explora a gestão de processos, redirecionamentos, pipes, sinais e variáveis de ambiente.

- **Nome do Programa**: `minishell`

- **Funções Autorizadas**:  
  Inclui, mas não se limita a:
  - `readline`, `add_history`, `printf`, `malloc`, `free`, `write`
  - `fork`, `execve`, `wait`, `waitpid`, `pipe`, `dup`, `dup2`
  - `signal`, `sigaction`, `kill`, `getcwd`, `chdir`, `stat`
  - `open`, `close`, `read`, `access`, `unlink`, `opendir`, `readdir`
  - `tcsetattr`, `tcgetattr`, `tgetent`, `tputs`, `getenv`
  - e outras — cobrindo as principais chamadas de sistema Unix usadas em desenvolvimento de shells.

- **Descrição**:  
  A shell:
  - Exibe um **prompt** e aguarda por novos comandos.  
  - Mantém um **histórico** funcional de comandos.  
  - Procura executáveis com base na variável **PATH** ou em caminhos absolutos/relativos.  
  - Expande **variáveis de ambiente** (`$VAR`, `$?`).  
  - Implementa **pipes (`|`)**, conectando a saída de um comando à entrada de outro.  
  - Suporta **redirecionamentos**:
    - `<` redireciona a entrada  
    - `>` redireciona a saída  
    - `>>` redireciona a saída em modo de anexação  
    - `<<` (heredoc) lê até encontrar um delimitador especificado
  - Gerencia **sinais** como o Bash:
    - `Ctrl-C` → Mostra um novo prompt em uma nova linha  
    - `Ctrl-D` → Encerra a shell  
    - `Ctrl-\` → Não faz nada  
  - Trata **aspas** corretamente:
    - `'` (aspas simples) impedem a interpretação de metacaracteres  
    - `"` (aspas duplas) permitem expansão de `$`, mas não de outros caracteres especiais  

- **Comandos Internos (Built-ins)**:
  | Comando | Descrição |
  |----------|-------------|
  | `echo [-n]` | Exibe texto no terminal |
  | `cd [caminho]` | Altera o diretório atual |
  | `pwd` | Mostra o diretório de trabalho atual |
  | `export` | Define ou atualiza variáveis de ambiente |
  | `unset` | Remove variáveis de ambiente |
  | `env` | Mostra todas as variáveis de ambiente |
  | `exit` | Encerra a shell |

- **Política de Variáveis Globais**:
  - Apenas **uma variável global** é permitida, usada **exclusivamente** para armazenar o valor de um sinal recebido.  
  - É proibido armazenar qualquer outra estrutura ou dado globalmente.

- **Makefile**:
  - Deve conter as regras padrão: `NAME`, `all`, `clean`, `fclean`, `re`.  
  - Compilado com as flags `-Wall -Wextra -Werror`.  
  - Utiliza a biblioteca `libft` para funções auxiliares.

- **Exemplo de Uso**:
  ```bash
  $ ./minishell
  minishell$ echo "Olá, mundo!"
  Olá, mundo!
  minishell$ ls -l | grep minishell > saida.txt
  minishell$ cat saida.txt

- **Desafios e Aprendizados:**:
  - Compreensão profunda de **criação de processos, tratamento de sinais** e **gerenciamento de descritores de arquivo**.
  - Parsing e tokenização de comandos com tratamento correto de sintaxe.
  - Implementação de **tratamento robusto de erros** e **gerenciamento de memória**.
  - Reprodução de comportamentos semelhantes ao Bash, dentro das restrições da norma da 42.
