# 42 Cursus Projects Repository

[Leia em Português](README.pt.md)

Welcome to the repository of my projects developed in the **42 Cursus**! Here you'll find a collection of codes created throughout the course, where I explore various libraries and functionalities in C. This repository will be updated with new projects as I progress through the curriculum.

## Projects Rank 00

### 1. 📚 [Libft](https://github.com/andrade950/42Libft)
   A personal library that reproduces standard C library functions, enabling their use in other cursus projects.

   <details>
     <summary> 🛈 Libft Project Details</summary>

   - **Objective**: Create a personal library, `libft.a`, containing various general-use functions, such as string manipulation, conversion, and memory handling.
   - **Implemented Functions**:

     | Function        | File              | Description                                                             |
     |-----------------|-------------------|-------------------------------------------------------------------------|
     | `ft_isalpha`    | `ft_isalpha.c`    | Checks if the character is alphabetic                                   |
     | `ft_isdigit`    | `ft_isdigit.c`    | Checks if the character is a digit                                      |
     | `ft_isalnum`    | `ft_isalnum.c`    | Checks if the character is alphanumeric                                 |
     | `ft_isascii`    | `ft_isascii.c`    | Checks if the character is in the ASCII table                           |
     | `ft_isprint`    | `ft_isprint.c`    | Checks if it's a printable character                                    |
     | `ft_strlen`     | `ft_strlen.c`     | Calculates the length of a string                                       |
     | `ft_memset`     | `ft_memset.c`     | Fills the bytes of a memory block with a constant value                 |
     | `ft_bzero`      | `ft_bzero.c`      | Fills the bytes of a memory block with zero                             |
     | `ft_memcpy`     | `ft_memcpy.c`     | Copies a memory block                                                   |
     | `ft_memmove`    | `ft_memmove.c`    | Copies a memory block, handling overlaps                                |
     | `ft_strlcpy`    | `ft_strlcpy.c`    | Copies a string                                                         |
     | `ft_strlcat`    | `ft_strlcat.c`    | Concatenates two strings                                                |
     | `ft_toupper`    | `ft_toupper.c`    | Converts a character to uppercase                                       |
     | `ft_tolower`    | `ft_tolower.c`    | Converts a character to lowercase                                       |
     | `ft_strchr`     | `ft_strchr.c`     | Searches for the first occurrence of a character in a string            |
     | `ft_strrchr`    | `ft_strrchr.c`    | Searches for the last occurrence of a character in a string             |
     | `ft_strncmp`    | `ft_strncmp.c`    | Compares two strings                                                    |
     | `ft_memchr`     | `ft_memchr.c`     | Searches for a byte in a memory block                                   |
     | `ft_memcmp`     | `ft_memcmp.c`     | Compares two memory blocks                                              |
     | `ft_strnstr`    | `ft_strnstr.c`    | Searches for a substring within another string, limited by length       |
     | `ft_atoi`       | `ft_atoi.c`       | Converts a string to an integer                                         |
     | `ft_calloc`     | `ft_calloc.c`     | Allocates and initializes memory                                        |
     | `ft_strdup`     | `ft_strdup.c`     | Duplicates a string                                                     |    
     | `ft_substr`     | `ft_substr.c`     | Creates a substring from a string                                       |
     | `ft_strjoin`    | `ft_strjoin.c`    | Concatenates two strings into a new string                              |
     | `ft_strtrim`    | `ft_strtrim.c`    | Removes specific characters from the start and end of a string          |
     | `ft_split`      | `ft_split.c`      | Splits a string into substrings using a delimiter                       |
     | `ft_itoa`       | `ft_itoa.c`       | Converts an integer to a string                                         |
     | `ft_strmapi`    | `ft_strmapi.c`    | Applies a function to each character in a string, creating a new string |
     | `ft_striteri`   | `ft_striteri.c`   | Applies a function to each character in a string                        |
     | `ft_putchar_fd` | `ft_putchar_fd.c` | Writes a character to a file descriptor                                 |
     | `ft_putstr_fd`  | `ft_putstr_fd.c`  | Writes a string to a file descriptor                                    |
     | `ft_putendl_fd` | `ft_putendl_fd.c` | Writes a string followed by a newline to a file descriptor              |
     | `ft_putnbr_fd`  | `ft_putnbr_fd.c`  | Writes an integer to a file descriptor                                  |

   - **Bonus Functions**:

     | Function        | File              | Description                                                             |
     |-----------------|-------------------|-------------------------------------------------------------------------|
     | `ft_lstnew`     | `ft_lstnew.c`     | Creates a new list element                                              |
     | `ft_lstadd_front` | `ft_lstadd_front.c` | Adds an element to the beginning of the list                         |
     | `ft_lstsize`    | `ft_lstsize.c`    | Calculates the size of the list                                         |
     | `ft_lstlast`    | `ft_lstlast.c`    | Returns the last element of the list                                    |
     | `ft_lstadd_back`| `ft_lstadd_back.c`| Adds an element to the end of the list                                  |
     | `ft_lstdelone`  | `ft_lstdelone.c`  | Removes and frees a list element                                        |
     | `ft_lstclear`   | `ft_lstclear.c`   | Clears and frees all elements of the list                               |
     | `ft_lstiter`    | `ft_lstiter.c`    | Iterates over the list and applies a function to each element           |
     | `ft_lstmap`     | `ft_lstmap.c`     | Creates a new list by applying a function to each element               |

   - **Project Norms**:
      - All functions are implemented following the 42 norminette.
      - Dynamically allocated memory is freed correctly.
      - Includes a `Makefile` to compile the library with various rules for cleaning, compiling with bonus functions, etc.
      - The `libft.h` header contains declarations for all the functions implemented in the library, making it easier to use and maintain.

   - **Makefile**:
      - The `Makefile` automates the compilation process for the `libft` library. It includes several rules that streamline building and cleaning up the library files:
      
         - **Rules**:
           - `make` or `make all`: Compiles all `.c` files listed in the source files section of the `Makefile` and generates the static library `libft.a`. This library can be linked to other projects in the cursus to utilize the functions implemented.
           - `make clean`: Deletes all object files (`.o` files) generated during compilation. This rule is useful to clear intermediate files without removing the final `libft.a` library.
           - `make fclean`: Performs a full clean, deleting both object files and the `libft.a` library. This rule is typically used when you want to remove all compiled files and start the build process from scratch.
           - `make re`: This rule is a shortcut that runs `make fclean` followed by `make all`, effectively rebuilding the library from scratch.

         - **Bonus Rule**:
           - `make bonus`: Compiles additional bonus functions and includes them in the `libft.a` library. These bonus functions provide additional functionality, such as handling linked lists (`ft_lst*` functions), which are often required in other                   projects of the cursus.

         - **Variables**:
           - `CC`: Specifies the compiler, usually `gcc`.
           - `CFLAGS`: Contains compiler flags (e.g., `-Wall -Wextra -Werror`), ensuring the code is compiled with strict error and warning checks in line with 42's norms.

         - The `Makefile` ensures that only modified `.c` files are recompiled, improving efficiency in development and debugging. It follows standard `Makefile` conventions, making it easy for any developer familiar with `Makefiles` to use.

        - **Example Usage**:
           - Run `make` to compile the library.
           - Use `make clean` or `make fclean` to remove intermediate files and the library.
           - Run `make bonus` to include bonus functions if needed.

   - **libft.h File**:
      - The `libft.h` file is the main header for the `libft` library. It contains:
        
         - **Function Declarations**: All functions implemented in `libft` are declared here. This allows other files that include `libft.h` to use these functions without needing to redeclare them.
         
         - **Required Libraries**: It includes essential standard libraries such as `<stdlib.h>`, `<unistd.h>`, and `<string.h>`, ensuring that the functions have access to standard C definitions and functionalities.
         
         - **Type and Structure Definitions**: Contains type definitions and structures (such as `t_list`), used for linked list manipulation in the bonus functions. The `t_list` structure, for example, is utilized in `ft_lst*` functions and is                      defined with members like `content` (to hold the node’s content) and `next` (to point to the next node).

      - **Example of the t_list Structure**:
        
        ```c
        typedef struct s_list
        {
            void            *content;
            struct s_list   *next;
        } t_list;
        ```

      - **Purpose**: The `libft.h` serves as a central location for all function declarations and necessary includes for the `libft` library. Once compiled, other projects can simply include `libft.h` to access all functions and structures provided by             the library.

      - **Usage**: Any file that wants to use `libft` functions can include `libft.h` with `#include "libft.h"`, making the entire library accessible with a single include line.
        
   </details>

   ---

## Projects Rank 01

### 1. 🖨️ [ft_printf](https://github.com/andrade950/42ft_printf) 
A custom implementation of the versatile `printf` function, enhancing the foundational C programming skills by handling variadic functions and formatted output.

<details>
  <summary> 🛈 ft_printf Project Details</summary>

- **Objective**: Develop a library, `libftprintf.a`, containing a custom version of the `printf` function, `ft_printf()`, to mimic the behavior of the standard C library function `printf`.

- **Implemented Features**:

  | Conversion   | Description                                                                                     |
  |--------------|-------------------------------------------------------------------------------------------------|
  | `%c`         | Prints a single character                                                                       |
  | `%s`         | Prints a string                                                                                 |
  | `%p`         | Prints a pointer address in hexadecimal format                                                  |
  | `%d`         | Prints a decimal (base 10) integer                                                              |
  | `%i`         | Prints an integer in base 10                                                                    |
  | `%u`         | Prints an unsigned decimal (base 10) number                                                     |
  | `%x`         | Prints a number in lowercase hexadecimal (base 16)                                              |
  | `%X`         | Prints a number in uppercase hexadecimal (base 16)                                              |
  | `%%`         | Prints a literal percent sign                                                                   |


- **Highlights**:
  - Utilizes variadic functions (`va_start`, `va_arg`, `va_end`) to handle a variable number of arguments.
  - Provides formatted output using minimal buffer management, adhering to the project constraints.
  - Fully compatible with `libft`, enabling its integration into future 42 projects.
  - The library is evaluated against the standard `printf` for accuracy and performance.

- **Project Norms**:
  - Code adheres strictly to the 42 norminette.
  - Memory allocated dynamically is appropriately freed, ensuring no memory leaks.
  - Includes a robust `Makefile` to compile the library with different rules.

- **Makefile**:
  - Automates the build process for the `ft_printf` library, ensuring simplicity and consistency.
  - **Rules**:
    - `make` or `make all`: Compiles the library `libftprintf.a`.
    - `make clean`: Removes object files (`.o`).
    - `make fclean`: Removes all compiled files, including `libftprintf.a`.
    - `make re`: Recompiles the project from scratch.
    - `make bonus`: Compiles and includes bonus functionalities if present.

- **Example Usage**:
  ```c
  #include "ft_printf.h"

  int main() {
      ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
      return 0;
  }

- **Challenges and Learning**:
  - Understanding and implementing variadic functions in C.
  - Managing formatted string parsing and output.
  - Emulating the behavior of a widely-used standard library function.

</details>

### 2. 📄 [get_next_line](https://github.com/andrade950/42get_next_line)
A function that returns lines read from a file descriptor, exploring concepts like static variables in C.

<details>
  <summary> 🛈 get_next_line Project Details</summary>

- **Objective**: Develop the `get_next_line()` function that returns a line read from a file descriptor, including the newline character (`\n`) if present.

- **Requirements**:
  - Repeated calls to `get_next_line()` should allow reading the file line by line.
  - If there is nothing left to read or an error occurs, the function should return `NULL`.
  - It should work for both file reading and standard input (`stdin`).
  - The returned line should include the newline character unless the end of the file is reached and it doesn't end with `\n`.

- **Function Name and Files**:
  - Function: `get_next_line`
  - Files: `get_next_line.c`, `get_next_line_utils.c`, `get_next_line.h`

- **Parameters and Return Value**:
  - Parameters:
    - `fd`: the file descriptor to read from.
  - Return:
    - A string containing the read line, or `NULL` if there is nothing more to read or if an error occurred.

- **Allowed External Functions**:
  - `read`, `malloc`, `free`

- **Project Guidelines**:
  - The code must comply with the 42 *norminette*.
  - Dynamically allocated memory must be properly freed, with no leaks.

- **Challenges**:
  - Efficiently use static variables to store unprocessed data between calls.
  - Handle different buffer sizes and unpredictable behavior from file descriptors.

- **Prototype**:
  ```c
  char *get_next_line(int fd);

- **Bonus**:
   - Implementation that supports multiple file descriptors simultaneously.
   - Use only one static variable.

- **Example Usage**:
  ```c
  #include "get_next_line.h"
  #include <fcntl.h>
  #include <stdio.h>

  int main() {
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
  }

- **Important Considerations**:
   - Test with various `BUFFER_SIZE` values (e.g., 1, 42, 9999).
   - Ensure that the function reads only what is necessary to return each line.
   - Handle errors such as null pointers and invalid file descriptors.

</details> 

### 3. 💿 [Born2beroot](https://github.com/andrade950/42Born2beroot)

A system administration project introducing concepts of virtualization and secure server configuration.

<details>
  <summary> 🛈 Details of the Born2beRoot Project</summary>

- **Objective**: Create and configure a secure virtual machine using VirtualBox (or UTM) with the following characteristics:
  - Operating system: the latest stable version of Debian or Rocky.
  - Minimal service configuration, without a graphical interface.
  - Creation of at least two encrypted partitions using LVM.

- **Mandatory Configurations**

  - **Firewall**: Configure UFW (or firewalld for Rocky) to allow only connections on SSH port 4242.
  
  - **SSH**:
    - Service running on port 4242.
    - Prohibit SSH connections as root.
  
  - **Users and Groups**:
    - Create a user with your login and assign them to the `user42` and `sudo` groups.
    - Implement a strong password policy:
      - Expiration every 30 days.
      - Minimum of 10 characters, including an uppercase letter, a lowercase letter, and a number.
      - Warning 7 days before expiration.
      - Prohibit more than 3 identical consecutive characters.
  
  - **Sudo**:
    - Limit authentication attempts to 3.
    - Display a custom message in case of error.
    - Archive logs of all actions in `/var/log/sudo/`.
    - Enable TTY mode and restrict paths used by sudo.
  
  - **Hostname**: Must be set as `<login>42` and be modified during the evaluation.
  
  - **Monitoring Script**:
    - A `monitoring.sh` script that displays every 10 minutes information such as:
      - System architecture and kernel version.
      - Number of physical and virtual processors.
      - RAM and disk usage.
      - CPU utilization rate.
      - Last reboot date.
      - LVM status.
      - Number of active connections and logged users.
      - IPv4 and MAC addresses.
      - Number of commands executed with sudo.

- **Rules**:
  - It is necessary to configure and explain the `monitoring.sh` script during the defense.

</details>


---

## Projects Rank 02

### 1. 🧮 [push_swap](https://github.com/andrade950/42push_swap)
An optimized sorting algorithm project using two stacks and a limited set of operations, enhancing algorithmic thinking and efficiency in C programming.

<details>
  <summary> 🛈 push_swap Project Details</summary>

- **Objective**: Develop a program, `push_swap`, that sorts a stack of integers using the smallest number of predefined operations. The goal is to implement an efficient sorting algorithm while adhering to the project constraints.

- **Implemented Features**:  

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

- **Highlights**:
  - Implements efficient sorting algorithms (e.g., Quick Sort, Radix Sort, or an optimized variation).
  - Utilizes two stacks (`a` and `b`) and a limited set of operations to achieve the desired sorting.
  - Ensures minimal operation count to meet benchmark requirements.
  - Manages memory dynamically and prevents leaks.
  - Error handling for invalid inputs (non-integer values, duplicates, overflow).

- **Project Norms**:
  - Code adheres strictly to the 42 norminette.
  - No global variables are used.
  - Implements a robust `Makefile` for compilation.

- **Makefile**:
  - Automates the build process for `push_swap`, ensuring consistency.
  - **Rules**:
    - `make` or `make all`: Compiles `push_swap`.
    - `make clean`: Removes object files (`.o`).
    - `make fclean`: Removes compiled files and executable.
    - `make re`: Recompiles the project from scratch.
    - `make bonus`: Compiles additional `checker` program.

- **Example Usage**:
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

- **Benchmark Requirements**:
  - Sorting **100 random numbers** in **≤ 700 operations**.
  - Sorting **500 random numbers** in **≤ 5500 operations**.

- **Challenges and Learning**:
  - Mastering sorting algorithms and optimizing them for minimal operations.
  - Implementing and managing a dual-stack system.
  - Handling input validation and error management in C.
  - Understanding time complexity and algorithm efficiency.

</details>

### 2. 📡 [minitalk](https://github.com/andrade950/42minitalk)
An implementation of interprocess communication using UNIX signals.

<details>
  <summary> 🛈 Minitalk Project Details</summary>

- **Objective**: Create a communication program between a client and a server using UNIX signals.

- **Functionality**:
  - The **server** must be started first and display its PID upon initialization.
  - The **client** receives the server's PID and the string to be sent as parameters.
  - The client sends the string to the server using only the `SIGUSR1` and `SIGUSR2` signals.
  - The server receives the string and quickly prints it to the standard output.
  - The server must be able to handle multiple clients without needing to restart.

- **Allowed Functions**:  
  | Function       | Description |
  |--------------|-------------|
  | `write`      | Writes to the standard output |
  | `ft_printf`  | Prints formatted messages |
  | `signal`     | Defines a signal handler |
  | `sigemptyset` | Initializes an empty signal set |
  | `sigaddset`  | Adds a signal to the set |
  | `sigaction`  | Defines actions for signals |
  | `kill`       | Sends signals to processes |
  | `getpid`     | Retrieves the current process PID |
  | `malloc`     | Allocates memory dynamically |
  | `free`       | Frees allocated memory |
  | `pause`      | Pauses the process until a signal is received |
  | `sleep`      | Suspends execution for a specified time |
  | `usleep`     | Suspends execution for a specified time in microseconds |
  | `exit`       | Terminates the program |

- **Project Guidelines**:
  - The code strictly follows the 42 **norminette** standard.
  - No memory leaks are allowed.
  - The client and server must be compiled separately and named `client` and `server`.
  - A `Makefile` must be provided to compile the files without relinking.

- **Makefile**:
  - Automates the compilation process for `minitalk`.
  - **Rules**:
    - `make` or `make all`: Compiles `client` and `server`.
    - `make clean`: Removes object files (`.o`).
    - `make fclean`: Removes compiled files and executables.
    - `make re`: Recompiles the project from scratch.

- **Usage Example**:
  ```bash
  # Start the server
  ./server
  # The server will display its PID, for example: 12345

  # Run the client to send a message to the server
  ./client 12345 "Hello, Minitalk!"
  ```

- **Challenges and Learning Outcomes**:
  - Understanding UNIX signals and IPC (Inter-Process Communication).
  - Implementing a robust and reliable communication protocol.
  - Ensuring data integrity during transmission without losses.
  - Efficiently handling processes and signals in C.

</details>

### 3. 🕹️ [so_long](https://github.com/andrade950/42so_long)
A small 2D game using the MiniLibX library.

<details>
  <summary> 🛈 So_Long Project Details</summary>

- **Objective**: Create a basic 2D game where a player collects items and reaches an exit while navigating a map.

- **Functionality**:
  - The game loads a map from a `.ber` file and renders it using MiniLibX.
  - The player must collect all collectibles before reaching the exit.
  - The player moves using **W, A, S, D** or arrow keys.
  - The game keeps track of the movement count and displays it in the terminal.
  - The map must follow specific formatting rules (walls, collectibles, exit, and player position).
  - The game window must close cleanly when pressing **ESC** or clicking the close button.

- **Allowed Functions**:  
  | Function       | Description |
  |--------------|-------------|
  | `open`, `close`, `read`, `write` | File handling and input/output |
  | `malloc`, `free` | Memory allocation |
  | `perror`, `strerror` | Error handling |
  | `exit` | Program termination |
  | Math library functions (`-lm`) | Mathematical calculations |
  | MiniLibX functions | Graphics rendering and event handling |
  | `ft_printf` (or custom equivalent) | Formatted output |

- **Project Guidelines**:
  - The code must follow the **42 Norm**.
  - No memory leaks are allowed.
  - A `Makefile` must be provided with the standard rules: `all`, `clean`, `fclean`, `re`, `bonus`.
  - The game must take as input a valid `.ber` map file.

- **Makefile**:
  - Automates the compilation process for `so_long`.
  - **Rules**:
    - `make` or `make all`: Compiles the project.
    - `make clean`: Removes object files (`.o`).
    - `make fclean`: Removes compiled files and executables.
    - `make re`: Recompiles the project from scratch.

- **Usage Example**:
  ```bash
  # Compile the game
  make
  
  # Run the game with a map file
  ./so_long maps/level1.ber
  ```

- **Map Format**:
  - The map must be composed of the following characters:
    - `0` → Empty space
    - `1` → Wall
    - `C` → Collectible
    - `E` → Exit
    - `P` → Player's starting position
  - Example of a valid `.ber` map:
    ```
    111111
    1P0C01
    100001
    1C0E01
    111111
    ```
  - The map must be **rectangular**, enclosed by walls, and contain **at least one exit, one collectible, and one player position**.

- **Bonus Features (if implemented)**:
  - Enemies that move and cause the player to lose when touched.
  - Animated sprites for better visuals.
  - Displaying the movement count directly in the game window.

- **Challenges and Learning Outcomes**:
  - Working with MiniLibX for graphics rendering.
  - Handling user inputs and event-driven programming.
  - Implementing a simple game loop and collision detection.
  - Managing memory efficiently and ensuring error-free execution.

</details>

---

## Projects Rank 03

### 1. 🐚 [Minishell](https://github.com/andrade950/42minishell)
A simplified shell inspired by **Bash**, developed to deepen the understanding of processes, signals, and file descriptors in Unix systems.

<details>
  <summary> 🛈 Minishell Project Details</summary>

- **Objective**:  
  Develop a minimalist command-line shell that mimics **Bash** behavior. The project explores process management, redirections, pipes, signals, and environment variables.

- **Program Name**: `minishell`

- **Authorized Functions**:  
  Includes but is not limited to:
  - `readline`, `add_history`, `printf`, `malloc`, `free`, `write`
  - `fork`, `execve`, `wait`, `waitpid`, `pipe`, `dup`, `dup2`
  - `signal`, `sigaction`, `kill`, `getcwd`, `chdir`, `stat`
  - `open`, `close`, `read`, `access`, `unlink`, `opendir`, `readdir`
  - `tcsetattr`, `tcgetattr`, `tgetent`, `tputs`, `getenv`
  - and more — covering the main Unix system calls used in shell development.

- **Description**:  
  The shell:
  - Displays a **prompt** and waits for user input.  
  - Maintains a **working history** of commands.  
  - Searches for executables using **PATH** or absolute/relative paths.  
  - Handles **environment variable expansion** (`$VAR`, `$?`).  
  - Implements **pipes (`|`)** to connect command outputs and inputs.  
  - Supports **redirections**:
    - `<` input redirection  
    - `>` output redirection  
    - `>>` append output redirection  
    - `<<` heredoc (reads until a specified delimiter)
  - Manages **signals** like Bash:
    - `Ctrl-C` → Displays a new prompt  
    - `Ctrl-D` → Exits the shell  
    - `Ctrl-\` → Ignored  
  - Handles **quotes** properly:
    - `'` (single quotes) prevent interpretation  
    - `"` (double quotes) allow `$` expansions but not other special characters  

- **Built-in Commands**:
  | Command | Description |
  |----------|-------------|
  | `echo [-n]` | Prints text to standard output |
  | `cd [path]` | Changes the current directory |
  | `pwd` | Prints the current working directory |
  | `export` | Adds or updates environment variables |
  | `unset` | Removes environment variables |
  | `env` | Displays all environment variables |
  | `exit` | Exits the shell |

- **Global Variable Policy**:
  - Only one global variable is allowed, used **exclusively** to store signal values.
  - No global structures or additional data may be stored globally.

- **Makefile**:
  - Must include standard rules: `NAME`, `all`, `clean`, `fclean`, `re`.
  - Compiles with `-Wall -Wextra -Werror`.
  - Uses the `libft` library for utility functions.

- **Example Usage**:
  ```bash
  $ ./minishell
  minishell$ echo "Hello, world!"
  Hello, world!
  minishell$ ls -l | grep minishell > output.txt
  minishell$ cat output.txt

- **Challenges and Learning Outcomes**:
  - Deep understanding of **process creation, signal handling**, and **file descriptor management**.
  - Parsing and tokenizing command input with correct syntax handling.
  - Implementing robust **error handling** and **memory management**.
  - Emulating Bash-like behavior within strict C and 42 norm constraints.

</details> 

### 2. 🍝 [Philosophers](https://github.com/andrade950/42philosophers)

An exploration of multithreading and synchronization in C, simulating the famous Dining Philosophers problem using threads and mutexes.

<details> <summary> 🛈 Philosophers Project Details</summary>

- **Objective**:  
  Implement a simulation where several philosophers alternate between eating, sleeping, and thinking — ensuring that none starve, and managing access to shared resources (forks) using **threads** and **mutexes**.

- **Program Name**: `philo`

- **Allowed Functions**:  
  `memset`, `printf`, `malloc`, `free`, `write`,  
  `usleep`, `gettimeofday`,  
  `pthread_create`, `pthread_detach`, `pthread_join`,  
  `pthread_mutex_init`, `pthread_mutex_destroy`, `pthread_mutex_lock`, `pthread_mutex_unlock`

- **Arguments**:  
  ```bash
  ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
  number_of_philosophers → Number of philosophers (and forks).
  ```
  
    - **time_to_die (ms)** → Time a philosopher can live without eating.
    - **time_to_eat (ms)** → Duration a philosopher spends eating (holding both forks).
    - **time_to_sleep (ms)** → Duration a philosopher sleeps after eating.
    - **number_of_times_each_philosopher_must_eat (optional)** → If all philosophers eat this many times, the simulation ends.
 
- **Behavior**:

   - Each philosopher is represented by a **thread**.
   - Each fork is protected by a **mutex**.
   - Philosophers perform the cycle: **thinking → taking forks → eating → sleeping**.
   - The simulation stops when:
      - A philosopher dies (hasn’t eaten within `time_to_die`), or all have eaten at least the required number of times (if provided).
    
- **Output Format**:
  ```bash
  timestamp_in_ms [X] has taken a fork
  timestamp_in_ms [X] is eating
  timestamp_in_ms [X] is sleeping
  timestamp_in_ms [X] is thinking
  timestamp_in_ms [X] died
   ```
  
   - `timestamp_in_ms`: time since simulation start.
   - `X`: philosopher number.
   - Death must be logged within 10 ms of occurring.
   - Logs must not overlap or interleave.

- **Global Rules**:

   - **No global variables**.
   - **No data races** — all shared data protected by mutexes.
   - The program must free all dynamically allocated memory and avoid leaks.
 
- **Makefile**:

   - Rules: `NAME`, `all`, `clean`, `fclean`, `re`
   - Compiles with `-Wall -Wextra -Werror -pthread`
   - Output: `philo`
 
- **Example Usage**:
  ```bash
  ./philo 5 800 200 200
   0 [1] has taken a fork
   0 [1] has taken a fork
   0 [1] is eating
   0 [5] has taken a fork
   0 [3] has taken a fork
   0 [3] has taken a fork
   0 [3] is eating
   200 [1] is sleeping
   200 [3] is sleeping
   200 [5] has taken a fork
   200 [5] is eating
   300 [2] has taken a fork
   300 [2] has taken a fork
   300 [2] is eating
   400 [3] is thinking
   400 [1] is thinking
   400 [5] is sleeping
   400 [4] has taken a fork
   400 [4] has taken a fork
   400 [4] is eating
   500 [1] has taken a fork
   500 [2] is sleeping
   500 [1] has taken a fork
   500 [1] is eating
   500 [3] has taken a fork
   600 [4] is sleeping
   ...
   ```

- **Learning Outcomes**:

   - Understand **multithreading** and **race condition prevention**.
   - Learn **synchronization** using **mutexes**.
   - Manage timing and concurrency safely in C.
   - Design deterministic behavior in concurrent environments.

</details>

---

## Projects Rank 04

### 1. 🎮 [cub3D](https://github.com/andrade950/42cub3d)
My first RayCaster with miniLibX - A 3D maze exploration game inspired by Wolfenstein 3D.

<details>
  <summary> 🛈 cub3D Project Details</summary>

- **Objective**: Create a "realistic" 3D graphical representation of the inside of a maze from a first-person perspective using ray-casting principles.

- **Program Name**: `cub3D`

- **Allowed Functions**:  
  | Function | Description |
  |----------|-------------|
  | `open`, `close`, `read`, `write` | File operations |
  | `printf`, `malloc`, `free` | Standard I/O and memory management |
  | `perror`, `strerror`, `exit` | Error handling |
  | `gettimeofday` | Time management |
  | Math library functions (`-lm`) | Mathematical calculations |
  | All MinilibX functions | Graphics rendering |

- **Arguments**:  
  ```bash
  ./cub3D maps/map.cub
  ```

- **Scene File Format (.cub)**:
  - **Textures**:
    - `NO ./path_to_north_texture` - North wall texture
    - `SO ./path_to_south_texture` - South wall texture  
    - `WE ./path_to_west_texture` - West wall texture
    - `EA ./path_to_east_texture` - East wall texture
  
  - **Colors**:
    - `F R,G,B` - Floor color (RGB values 0-255)
    - `C R,G,B` - Ceiling color (RGB values 0-255)
  
  - **Map**:
    - `0` - Empty space
    - `1` - Wall
    - `N`, `S`, `E`, `W` - Player starting position and orientation

- **Example .cub File**:
  ```
  NO ./textures/north.xpm
  SO ./textures/south.xpm
  WE ./textures/west.xpm
  EA ./textures/east.xpm
  
  F 220,100,0
  C 225,30,0
  
  1111111111111111111111111
  1000000000110000000000001
  1011000001110000000000001
  100100000000000000000000111111111
  111111111011000001110000000000001
  100000000011000001110111111111111
  11110111111111011100000010001
  11110111111111011101010010001
  11000000110101011100000010001
  10000000000000001100000010001
  10000000000000001101010010001
  11000001110101011111011110N0111
  11110111 1110101 101111010001
  11111111 1111111 111111111111
  ```

- **Controls**:
  | Key | Action |
  |-----|--------|
  | `W` | Move forward |
  | `A` | Move left |
  | `S` | Move backward |
  | `D` | Move right |
  | `←` | Rotate camera left |
  | `→` | Rotate camera right |
  | `ESC` | Exit game |

- **Features**:
  - First-person 3D perspective using ray-casting
  - Different wall textures based on orientation (N/S/E/W)
  - Customizable floor and ceiling colors
  - Smooth window management
  - Real-time camera rotation and movement
  - Proper error handling for invalid maps

- **Map Requirements**:
  - Must be surrounded by walls (closed map)
  - Can only contain characters: `0`, `1`, `N`, `S`, `E`, `W`
  - Must have exactly one player starting position
  - Spaces are valid and must be handled correctly
  - Map must be the last element in the .cub file

- **Project Guidelines**:
  - Code must follow the **42 Norm**
  - No memory leaks allowed
  - Must use MiniLibX library
  - Smooth window management required
  - Proper error messages for invalid configurations

- **Makefile**:
  - Rules: `NAME`, `all`, `clean`, `fclean`, `re`, `bonus`
  - Compiles with `-Wall -Wextra -Werror`
  - Links with math library (`-lm`) and MiniLibX

- **Bonus Features** (if implemented):
  - Wall collisions
  - Minimap system
  - Interactive doors (open/close)
  - Animated sprites
  - Mouse camera rotation
  - Floor and ceiling textures
  - HUD elements
  - Weapons and shooting mechanics

- **Example Usage**:
  ```bash
  # Compile the project
  make
  
  # Run with a map file
  ./cub3D maps/example.cub
  
  # Compile with bonuses
  make bonus
  ./cub3D maps/bonus_map.cub
  ```

- **Error Handling**:
  - Invalid file extension
  - Missing or duplicate configuration elements
  - Invalid RGB values (outside 0-255 range)
  - Invalid map characters
  - Map not closed by walls
  - Missing textures or invalid paths
  - Multiple player positions or no player
  
  All errors output: `Error\n` followed by a descriptive message.

- **Challenges and Learning Outcomes**:
  - Understanding **ray-casting algorithms** and 3D projection
  - Working with **MiniLibX** for graphics rendering
  - Implementing **efficient rendering** and game loops
  - Parsing complex configuration files
  - Managing **player physics** and collision detection
  - Creating immersive game experiences with limited resources
  - Applying **trigonometry** and **vector mathematics** in practice

</details>

### 2. 🔷 [CPP's](https://github.com/andrade950/42CPP-s)
> **A journey through C++ modules, covering from 00 to 04.**

- ### 2.1. 🏫 [CPP00](https://github.com/andrade950/42CPP-s/tree/main/CPP00)
Introduction to C++ — Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and other basic concepts.
 
<details>
   
  <summary> 🛈 CPP00 Details</summary>
   
- **Objective**: Get acquainted with the basic features of C++, transitioning from C. All code follows the **C++98 standard**.
   
- **Key Concepts**:
  - Namespaces
  - Classes and member functions
  - stdio streams (`std::cout`, `std::cin`)
  - Initialization lists
  - `static` and `const` keywords
  - Orthodox Canonical Class Form (preview)
   
- **Exercises**:
   
  **Exercise 00 — Megaphone**
  - A simple program that takes command-line arguments and outputs them in uppercase.
  - If no arguments are provided, outputs `* LOUD AND UNBEARABLE FEEDBACK NOISE *`.
  - Files: `Makefile`, `megaphone.cpp`
   
  **Exercise 01 — My Awesome PhoneBook**
  - A phonebook program implementing two classes: `PhoneBook` and `Contact`.
  - Stores up to 8 contacts (oldest is replaced when full). No dynamic allocation allowed.
  - Supports three commands: `ADD`, `SEARCH`, and `EXIT`.
  - The `SEARCH` display uses 10-character-wide columns, right-aligned, with truncation indicated by a `.`.
  - Files: `Makefile`, `*.cpp`, `*.{h,hpp}`
   
- **General Rules**:
  - Compile with `c++ -Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, no `friend`, no STL containers or algorithms.
  - No `*printf()`, `*alloc()`, or `free()`.
  - No function implementations in header files (except templates).
  - All headers must have include guards.
   
- **Challenges and Learning Outcomes**:
  - Transitioning from C to C++ mindset.
  - Understanding class design, encapsulation, and stream-based I/O.
  - Formatting output with `<iomanip>`.
     
</details>
 
- ### 2.2. 🧠 [CPP01](https://github.com/andrade950/42CPP-s/tree/main/CPP01)
Memory allocation, pointers to members, references, and switch statements.
 
<details>
   
  <summary> 🛈 CPP01 Details</summary>
   
- **Objective**: Explore memory management in C++, understand the difference between stack and heap allocation, and learn references and pointers to member functions.
   
- **Key Concepts**:
  - `new` and `delete` (heap allocation)
  - Stack vs heap allocation decisions
  - References vs pointers
  - Pointers to member functions
  - File streams (`std::ifstream`, `std::ofstream`)
  - `switch` statements
   
- **Exercises**:
   
  **Exercise 00 — BraiiiiiiinnnzzzZ**
  - Implement a `Zombie` class with a `name` attribute and an `announce()` member function.
  - Two functions: `newZombie()` (heap) and `randomChump()` (stack).
  - Teaches when to prefer heap vs stack allocation.
   
  **Exercise 01 — Moar brainz!**
  - `zombieHorde()` function allocates N zombies in a **single** `new[]` call.
  - Reinforces array allocation and proper `delete[]` usage.
   
  **Exercise 02 — HI THIS IS BRAIN**
  - Demonstrates that a reference and a pointer to the same variable hold the same address and value.
  - Demystifies references as an alternate syntax for address manipulation.
   
  **Exercise 03 — Unnecessary Violence**
  - `Weapon`, `HumanA`, and `HumanB` classes.
  - `HumanA` always has a weapon (use a reference); `HumanB` may not (use a pointer).
  - Teaches the practical difference between references and pointers.
   
  **Exercise 04 — Sed is for Losers**
  - Program that opens a file and writes a copy replacing every occurrence of `s1` with `s2`.
  - `std::string::replace` is forbidden — must use `find` and manual substitution.
   
  **Exercise 05 — Harl 2.0**
  - `Harl` class with four complaint levels: `DEBUG`, `INFO`, `WARNING`, `ERROR`.
  - Must use **pointers to member functions** — no if/else chains allowed.
   
  **Exercise 06 — Harl Filter** *(optional)*
  - Filters Harl's output from a given level upwards.
  - Must use a **switch statement** with fall-through behaviour.
   
- **Challenges and Learning Outcomes**:
  - Mastering heap allocation and avoiding memory leaks.
  - Understanding the semantic difference between references and pointers.
  - Using pointers to member functions for cleaner dispatch logic.
   
</details>
 
- ### 2.3. ⚖️ [CPP02](https://github.com/andrade950/42CPP-s/tree/main/CPP02)
Ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form.
 
<details>
   
  <summary> 🛈 CPP02 Details</summary>
   
- **Objective**: Learn operator overloading and enforce the Orthodox Canonical Class Form (OCF) on all classes from this module onwards.
   
- **Key Concepts**:
  - Orthodox Canonical Form: default constructor, copy constructor, copy assignment operator, destructor
  - Fixed-point numbers
  - Operator overloading (arithmetic, comparison, increment/decrement, insertion)
  - Static member functions
  - Ad-hoc polymorphism
   
- **Orthodox Canonical Form (required from Module 02 onward)**:
  Every class must implement:
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
   
- **Exercises**:
   
  **Exercise 00 — My First Class in Orthodox Canonical Form**
  - `Fixed` class representing a fixed-point number with 8 fractional bits.
  - Private: raw integer value + static constant `fractionalBits = 8`.
  - Public: OCF methods + `getRawBits()` / `setRawBits()`.
   
  **Exercise 01 — Towards a More Useful Fixed-Point Number Class**
  - Adds constructors from `int` and `float`, converting to fixed-point representation.
  - Adds `toFloat()`, `toInt()`, and overloads the `<<` insertion operator.
  - Authorized: `roundf` from `<cmath>`.
     
  **Exercise 02 — Now We're Talking**
  - Overloads all 6 comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`).
  - Overloads 4 arithmetic operators (`+`, `-`, `*`, `/`).
  - Overloads pre/post increment and decrement by the smallest representable ε.
  - Adds static `min()` and `max()` functions for both mutable and const references.
     
- **Challenges and Learning Outcomes**:
  - Deeply understanding fixed-point arithmetic.
  - Writing clean, reusable operator overloads.
  - Applying the OCF consistently across all classes.
     
</details>
 
- ### 2.4. 🧬 [CPP03](https://github.com/andrade950/42CPP-s/tree/main/CPP03)
Inheritance.
 
<details>
   
  <summary> 🛈 CPP03 Details</summary>
   
- **Objective**: Understand class inheritance in C++, including single and multiple inheritance, construction/destruction chaining, and the diamond problem.
   
- **Key Concepts**:
  - Single inheritance
  - Multiple inheritance
  - Construction and destruction chaining
  - Virtual inheritance (diamond problem)
  - Attribute and method overriding
   
- **Exercises**:
   
  **Exercise 00 — Aaaaand... OPEN!**
  - Base class `ClapTrap` with private attributes: `name`, `hitPoints` (10), `energyPoints` (10), `attackDamage` (0).
  - Public methods: `attack()`, `takeDamage()`, `beRepaired()` — each costs 1 energy point and prints a descriptive message.
  - Constructors and destructor must print messages.
   
  **Exercise 01 — Serena, My Love!**
  - `ScavTrap` inherits from `ClapTrap`, overriding stats: HP=100, EP=50, AD=20.
  - Overrides `attack()` with a different message.
  - Adds `guardGate()` special ability.
  - Demonstrates proper construction/destruction chaining.
   
  **Exercise 02 — Repetitive Work**
  - `FragTrap` inherits from `ClapTrap`, stats: HP=100, EP=100, AD=30.
  - Adds `highFivesGuys()` special ability.
  - Further practice with inheritance chaining.
   
- **Challenges and Learning Outcomes**:
  - Understanding how constructors and destructors chain across inheritance levels.
  - Resolving the diamond problem with virtual inheritance.
  - Designing class hierarchies cleanly and correctly.
   
</details>
 
- ### 2.5. 🐾 [CPP04](https://github.com/andrade950/42CPP-s/tree/main/CPP04)
Subtype polymorphism, abstract classes, and interfaces.
 
<details>
   
  <summary> 🛈 CPP04 Details</summary>
   
- **Objective**: Master subtype polymorphism through virtual functions, abstract classes, and interface-like pure abstract classes. Understand deep copying and virtual destructors.
  
- **Key Concepts**:
  - Virtual functions and subtype polymorphism
  - Abstract classes (pure virtual functions)
  - Interfaces (pure abstract classes)
  - Virtual destructors
  - Deep copies
   
- **Exercises**:
   
  **Exercise 00 — Polymorphism**
  - `Animal` base class with a `std::string type` protected attribute and a virtual `makeSound()`.
  - `Dog` and `Cat` inherit from `Animal`, each overriding `makeSound()` with appropriate output.
  - `WrongAnimal` / `WrongCat` demonstrate what happens **without** virtual functions.
  - Calling `makeSound()` through a base pointer must invoke the derived class version.
   
  **Exercise 01 — I Don't Want to Set the World on Fire**
  - Adds a `Brain` class containing an array of 100 `std::string ideas`.
  - `Dog` and `Cat` each own a `Brain*` (created in constructor, deleted in destructor).
  - Copies of `Dog`/`Cat` must be **deep copies** — a new `Brain` is allocated and its content duplicated.
  - Array of `Animal*` (half dogs, half cats) must be fully deleted without leaks.
   
  **Exercise 02 — Abstract Class**
  - Makes `Animal` (or `AAnimal`) abstract by declaring `makeSound()` as pure virtual (`= 0`).
  - Prevents direct instantiation of the base class.
  - Everything else continues to work as before.
   
   
- **Challenges and Learning Outcomes**:
  - Understanding why virtual destructors are essential.
  - Implementing deep copies correctly to avoid shared state bugs.
  - Designing flexible systems through abstract classes and interfaces.
  - Managing memory carefully when unequipping Materias without deleting them.
   
</details>

---
