# Libft

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" />
  <img src="https://img.shields.io/badge/Build-Makefile-brightgreen.svg" />
  <img src="https://img.shields.io/badge/Type-Static%20Library-orange.svg" />
  <img src="https://img.shields.io/badge/42-Libft-black.svg" />
</p>

## Overview

Libft is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate essential functions from the standard C library while gaining a deeper understanding of:

- Memory management
- Pointers
- Strings and arrays
- Data structures
- Low-level programming
- Code reusability

This library serves as the foundation for future C projects.

---

# Features

## Libc Functions

Reimplementation of standard C library functions such as:

- `ft_strlen`
- `ft_strdup`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memset`
- `ft_memcpy`
- `ft_memmove`
- `ft_bzero`
- `ft_memchr`
- `ft_memcmp`

---

## String Manipulation

Functions for handling and transforming strings:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

---

## Character Functions

Character checking and conversion utilities:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

---

## Conversion Functions

Functions for converting data types:

- `ft_atoi`
- `ft_itoa`

---

## Memory Allocation

Dynamic memory handling:

- `ft_calloc`

---

## File Descriptor Output

Output functions using file descriptors:

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## Bonus Part — Linked Lists

Implementation of linked list utilities:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

# Project Structure

```bash
libft/
├── Makefile
├── libft.h
├── ft_*.c
├── ft_*.o
├── bonus/
└── libft.a
