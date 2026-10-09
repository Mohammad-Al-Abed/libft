*This activity has been created as part of the 42 curriculum by moal-abe.*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.

The goal of the project is to recreate useful functions from the C standard library and create additional functions for strings, memory, file descriptors, and linked lists.

The library is compiled into a static library called `libft.a`.

### Library Functions

**Character and conversion functions**

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`
* `ft_atoi`
* `ft_itoa`

**String and memory functions**

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

**Additional functions**

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

**Linked-list functions**

The library uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Linked-list functions include:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Instructions

Compile the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

To use the library:

```c
#include "libft.h"
```

Compile a program with Libft:

```bash
cc main.c -L. -lft
```

## Resources

The project was developed using the 42 Libft subject, C `man` pages, and documentation about C, pointers, dynamic memory, structures, linked lists, and Makefiles.

### AI Usage

AI was used as a learning and debugging tool to:

* Explain C and memory concepts.
* Understand pointers, structures, and linked lists.
* Explain Makefiles and compilation.
* Help identify compiler and Norminette errors.
* Review implementations and provide testing examples.

The project was implemented and understood as part of the learning process.

## Technical Choices

* Language: C
* Compiler: `cc`
* Flags: `-Wall -Wextra -Werror`
* Build system: Makefile
* Output: `libft.a`
* Dynamic memory handled with `malloc` and `free`
* No global variables
* Helper functions use `static` when required

