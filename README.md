<div align="center">
  <img height="150" src="https://media.licdn.com/dms/image/v2/D5622AQFCq1AJnlUwEQ/feedshare-shrink_800/B56ZY0G8rnHoAg-/0/1744630961206?e=1751500800&v=beta&t=2H5n_kPxSjzw9sRj7KOfhVJ1I7I8QCxZHtkNnxfWB0g"  />
</div>

###

<div align="center">
  <a href="https://www.linkedin.com/in/ertu%C4%9Frul-pakdamar/" target="_blank">
    <img src="https://img.shields.io/static/v1?message=LinkedIn&logo=linkedin&label=&color=0077B5&logoColor=white&labelColor=&style=for-the-badge" height="25" alt="linkedin logo"  />
  </a>
  <a href="https://www.hackerrank.com/ertu_pakdamar" target="_blank">
    <img src="https://img.shields.io/static/v1?message=HackerRank&logo=hackerrank&label=&color=2EC866&logoColor=white&labelColor=&style=for-the-badge" height="25" alt="hackerrank logo"  />
  </a>
</div>

###

# 📚 42 Libft – Custom C Standard Library

###

> 🚧 **Status:** Completed

This repository contains my implementation of the **Libft** project, the first assignment in the 42 Türkiye's Common Core curriculum. The objective is to recreate standard C library functions and develop additional utility functions to form a personal C library for use in future projects.

###

<h3 align="left">🛠 Language and tools</h3>

###

<div align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" height="40" alt="c logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/vscode/vscode-original.svg" height="40" alt="vscode logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linux/linux-original.svg" height="40" alt="linux logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/bash/bash-original.svg" height="40" alt="bash logo"  />
</div>

###

## 🚀 Project Overview

The Libft project aims to deepen understanding of C programming by:

- Reimplementing standard C library functions.
- Writing additional utility functions for string manipulation, memory management, and more.
- Creating a static library (`libft.a`) to be reused in subsequent projects.

---

## 🏃 Compile the Project

Run the following Bash commands to create the libft.a archive library file:
```bash
git clone git@github.com:Ertugrul-Pakdamar/42_ring0_libft.git
cd 42_ring0_libft
make
```

---

## 🧩 Implemented Functions

This library is a reimplementation of selected functions from the standard C library, as well as additional utility functions frequently used in C programming. All function names are prefixed with `ft_` as per 42 coding standards.

### 1. 🛠 Standard C Library Functions

These are low-level memory and string manipulation functions commonly used in C:

- `ft_memset` — Fills a block of memory with a specific byte value.
- `ft_bzero` — Sets a block of memory to zero.
- `ft_memcpy` — Copies bytes from one memory area to another (no overlap allowed).
- `ft_memmove` — Like `memcpy`, but safely handles overlapping memory regions.
- `ft_strlcpy` — Copies a string to a buffer, ensuring null-termination.
- `ft_strlcat` — Concatenates strings, ensuring buffer size limits are respected.
- `ft_strlen` — Returns the length of a string.
- `ft_strchr` — Finds the first occurrence of a character in a string.
- `ft_strrchr` — Finds the last occurrence of a character in a string.
- `ft_strncmp` — Compares two strings up to a given number of characters.
- `ft_memchr` — Locates a byte in a block of memory.
- `ft_memcmp` — Compares two blocks of memory byte by byte.
- `ft_strnstr` — Searches for a substring within a string, up to a specified length.
- `ft_atoi` — Converts a string to an integer.
- `ft_isalpha` — Checks if a character is an alphabetic letter.
- `ft_isdigit` — Checks if a character is a decimal digit.
- `ft_isalnum` — Checks if a character is alphanumeric.
- `ft_isascii` — Checks if a character is part of the ASCII set.
- `ft_isprint` — Checks if a character is printable.
- `ft_toupper` — Converts a lowercase letter to uppercase.
- `ft_tolower` — Converts an uppercase letter to lowercase.
- `ft_calloc` — Allocates and zero-initializes memory.
- `ft_strdup` — Duplicates a string by allocating memory.

### 2. 🧰 Additional Utility Functions

Useful for string manipulation, number conversion, and file descriptor output:

- `ft_substr` — Extracts a substring from a given string.
- `ft_strjoin` — Concatenates two strings into a new one.
- `ft_strtrim` — Removes specified characters from the beginning and end of a string.
- `ft_split` — Splits a string into an array of substrings based on a delimiter.
- `ft_itoa` — Converts an integer into a string.
- `ft_strmapi` — Applies a function to each character of a string (with index) to create a new string.
- `ft_striteri` — Similar to `ft_strmapi`, but modifies the original string in-place.
- `ft_putchar_fd` — Writes a character to the given file descriptor.
- `ft_putstr_fd` — Writes a string to the given file descriptor.
- `ft_putendl_fd` — Writes a string followed by a newline to the given file descriptor.
- `ft_putnbr_fd` — Writes an integer to the given file descriptor.

### 3. 🧱 Bonus: Linked List Functions

Provides a simple implementation of singly linked list operations:

- `ft_lstnew` — Creates a new list node.
- `ft_lstadd_front` — Adds a node at the beginning of the list.
- `ft_lstsize` — Returns the number of nodes in the list.
- `ft_lstlast` — Retrieves the last node of the list.
- `ft_lstadd_back` — Adds a node at the end of the list.
- `ft_lstdelone` — Deletes a single node and frees its memory.
- `ft_lstclear` — Deletes and frees all nodes in the list.
- `ft_lstiter` — Applies a function to each node's content.
- `ft_lstmap` — Creates a new list by applying a function to each node of the original list.

---

## 🧠 Project Objectives

- **Deepen Understanding of C:** Gain proficiency in C programming by reimplementing standard functions.
- **Memory Management:** Learn dynamic memory allocation and pointer manipulation.
- **Code Reusability:** Create a personal library for use in subsequent projects.
- **Adherence to Standards:** Follow the 42 coding standards (Norminette) for code quality and consistency.

---

## 📌 Notes

- All functions are prefixed with `ft_` to denote "Forty-Two" and avoid naming conflicts.
- The project adheres to the 42 coding standard, ensuring clean and maintainable code.
- This library will serve as a foundational tool for future projects within the 42 curriculum.

---

## 🧠 Conclusion

The **Libft** project is a fundamental step in the 42 curriculum, fostering a solid understanding of C programming and software development principles. Completing this library will provide a valuable resource for tackling more complex projects ahead.


---
