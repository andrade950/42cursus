# 42 Cursus Projects Repository

[Read in English](README.md)

Bem-vindo ao repositório dos meus projetos desenvolvidos no **42 Cursus**! Aqui você encontrará uma coleção de códigos desenvolvidos ao longo do curso, onde exploro várias bibliotecas e funcionalidades em C. Este repositório será atualizado com novos projetos à medida que avanço no currículo.

## 📜 Projetos

1. **Libft**  
   Uma biblioteca pessoal que reproduz funções da biblioteca padrão do C, permitindo utilizá-las em outros projetos do cursus.

   <details>
     <summary>ℹ️ Detalhes do Projeto Libft</summary>

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


   </details>

---
