# 📚 Libft

**Libft** is the very first project at [42 School](https://42.fr), where students create their own C standard library.  
The purpose is to rebuild standard C functions from scratch and understand how they work internally.  
The library can then be reused in future 42 projects.

---

## 📦 Overview

- **Language:** C  
- **Output:** `libft.a` (Static library)  
- **Standards:** `-Wall -Wextra -Werror`  
- **Makefile Rules:** `make`, `make clean`, `make fclean`, `make re`, `make bonus`

---

## 🧰 How to Use

### 🔨 Compile the Library

```bash
make            # Compile mandatory part
make bonus      # Compile with bonus (linked list) functions
```

### 🧪 Include in Your Project

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft
```

---

## 📁 File Structure

```
.
├── ft_*.c         # Function implementations
├── libft.h        # Header with function prototypes
├── Makefile       # Build script
└── libft.a        # Compiled library
```

---

## ✅ Implemented Functions

### 🔤 Character Checks (ctype.h)

| Function        | Description                            |
|----------------|----------------------------------------|
| `ft_isalpha`    | Checks if a character is alphabetic    |
| `ft_isdigit`    | Checks if a character is a digit       |
| `ft_isalnum`    | Checks if a character is alphanumeric  |
| `ft_isascii`    | Checks if a character is ASCII         |
| `ft_isprint`    | Checks if a character is printable     |
| `ft_toupper`    | Converts a character to uppercase      |
| `ft_tolower`    | Converts a character to lowercase      |

### 🧠 Memory Functions (string.h)

| Function        | Description                                 |
|----------------|---------------------------------------------|
| `ft_memset`     | Fills memory with a constant byte           |
| `ft_bzero`      | Sets memory to zero                         |
| `ft_memcpy`     | Copies memory (non-overlapping)             |
| `ft_memmove`    | Copies memory (handles overlap)             |
| `ft_memchr`     | Scans memory for a byte                     |
| `ft_memcmp`     | Compares memory areas                       |
| `ft_strlen`     | Returns the length of a string              |
| `ft_strlcpy`    | Safely copies string                        |
| `ft_strlcat`    | Safely concatenates strings                 |
| `ft_strchr`     | Finds first occurrence of a character       |
| `ft_strrchr`    | Finds last occurrence of a character        |
| `ft_strncmp`    | Compares strings up to n characters         |
| `ft_strnstr`    | Locates a substring in a string             |
| `ft_strdup`     | Duplicates a string                         |

### 📈 Conversion & Allocation (stdlib.h)

| Function        | Description                             |
|----------------|-----------------------------------------|
| `ft_atoi`       | Converts string to integer              |
| `ft_calloc`     | Allocates and zeroes memory             |

### ➕ Additional Utilities

| Function          | Description                                          |
|------------------|------------------------------------------------------|
| `ft_substr`       | Extracts a substring from a string                   |
| `ft_strjoin`      | Concatenates two strings                             |
| `ft_strtrim`      | Trims characters from start and end of a string      |
| `ft_split`        | Splits a string by a delimiter                       |
| `ft_itoa`         | Converts integer to string                           |
| `ft_strmapi`      | Applies function to each char of string (returns new)|
| `ft_striteri`     | Applies function to each char of string (in-place)   |
| `ft_putchar_fd`   | Outputs a character to given file descriptor         |
| `ft_putstr_fd`    | Outputs a string to given file descriptor            |
| `ft_putendl_fd`   | Outputs a string + newline to file descriptor        |
| `ft_putnbr_fd`    | Outputs an integer to given file descriptor          |

---

## 🌟 Bonus Part – Linked List Functions

These functions use the following struct:

```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

| Function           | Description                                        |
|-------------------|----------------------------------------------------|
| `ft_lstnew`        | Creates a new list node                           |
| `ft_lstadd_front`  | Adds a node to the beginning of the list          |
| `ft_lstsize`       | Counts the number of nodes in a list              |
| `ft_lstlast`       | Returns the last node of the list                 |
| `ft_lstadd_back`   | Adds a node to the end of the list                |
| `ft_lstdelone`     | Deletes a node and its content using a function   |
| `ft_lstclear`      | Deletes all nodes and clears the list             |
| `ft_lstiter`       | Applies function to each node's content           |
| `ft_lstmap`        | Maps a function to each node and creates a new list|

---

## 👨‍💻 Author

Made at 42 School  
**[Pouriya Pourbahrami]**  
GitHub: [github.com/pourist](https://github.com/pourist)

---

## 📜 License

This project is part of the 42 Curriculum and is distributed for educational purposes.

