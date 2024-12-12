# 42 Cursus Projects Repository

[Leia em Português](README.pt.md)

Welcome to the repository of my projects developed in the **42 Cursus**! Here you'll find a collection of codes created throughout the course, where I explore various libraries and functionalities in C. This repository will be updated with new projects as I progress through the curriculum.

## Projects Rank 00

### 1. Libft
   A personal library that reproduces standard C library functions, enabling their use in other cursus projects.

   <details>
     <summary>ℹ️ Libft Project Details</summary>

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

### 2. ft_printf  
A custom implementation of the versatile `printf` function, enhancing the foundational C programming skills by handling variadic functions and formatted output.

<details>
  <summary>ℹ️ ft_printf Project Details</summary>

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

### 3. **get_next_line**  
A function that returns lines read from a file descriptor, exploring concepts like static variables in C.

<details>
  <summary>ℹ️ get_next_line Project Details</summary>

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

### 4. **Born2beRoot**

A system administration project introducing concepts of virtualization and secure server configuration.

<details>
  <summary>ℹ️ Details of the Born2beRoot Project</summary>

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
