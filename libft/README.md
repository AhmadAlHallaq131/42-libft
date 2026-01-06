*This project has been created as part of the 42 curriculum by <Ahmad Al-hallaq>.*

# Libft

## Description
Libft is a custom C library that implements various standard functions to provide essential utilities needed for future 42 projects.

## Functions Overview

1. **ft_isalpha**  
   Checks if a character is an alphabetic letter (a-z, A-Z).
   
2. **ft_isdigit**  
   Checks if a character is a digit (0-9).
   
3. **ft_isalnum**  
   Checks if a character is alphanumeric (a-z, A-Z, 0-9).

4. **ft_isascii**  
   Checks if a character is an ASCII character (0-127).

5. **ft_isprint**  
   Checks if a character is printable (space, symbols, letters, digits).

6. **ft_toupper**  
   Converts a lowercase letter to uppercase.

7. **ft_tolower**  
   Converts an uppercase letter to lowercase.

8. **ft_strlen**  
   Returns the length of a string (excluding null terminator).

9. **ft_memset**  
   Fills the first `n` bytes of memory with a constant byte.

10. **ft_bzero**  
    Sets the first `n` bytes of memory to zero.

11. **ft_memcpy**  
    Copies `n` bytes from one memory area to another.

12. **ft_memmove**  
    Copies `n` bytes from one memory area to another, even if they overlap.

13. **ft_memchr**  
    Searches for the first occurrence of a byte in memory.

14. **ft_memcmp**  
    Compares `n` bytes of two memory areas.

15. **ft_calloc**  
    Allocates memory for an array and initializes it to zero.

16. **ft_strdup**  
    Duplicates a string, allocating memory and copying the content.

17. **ft_strchr**  
    Finds the first occurrence of a character in a string.

18. **ft_strrchr**  
    Finds the last occurrence of a character in a string.

19. **ft_strnstr**  
    Locates the first occurrence of a substring in a string, searching up to `n` characters.

20. **ft_strncmp**  
    Compares two strings up to `n` characters.

21. **ft_strlcpy**  
    Copies a string with a size limit, ensuring it is null-terminated.

22. **ft_strlcat**  
    Appends a string to another with size limits, ensuring null termination.

23. **ft_atoi**  
    Converts a string to an integer, handling leading spaces and signs.

24. **ft_itoa**  
    Converts an integer to a string.

25. **ft_substr**  
    Allocates and returns a substring from a string.

26. **ft_strjoin**  
    Allocates and returns a new string which is the concatenation of two strings.

27. **ft_strtrim**  
    Allocates and returns a trimmed string (removes characters from the start and end).

28. **ft_split**  
    Splits a string into an array of substrings based on a delimiter.

29. **ft_strmapi**  
    Applies a function to each character in a string and returns a new string.

30. **ft_striteri**  
    Applies a function to each character in a string with its index.

31. **ft_putchar_fd**  
    Writes a character to the given file descriptor.

32. **ft_putstr_fd**  
    Writes a string to the given file descriptor.

33. **ft_putendl_fd**  
    Writes a string followed by a newline to the given file descriptor.

34. **ft_putnbr_fd**  
    Writes an integer to the given file descriptor.

### Linked List:

1. **ft_lstnew**  
   Creates a new list element with specified content.

2. **ft_lstadd_front**  
   Adds a new element to the front of the list.

3. **ft_lstadd_back**  
   Adds a new element to the end of the list.

4. **ft_lstsize**  
   Returns the size (number of elements) of the list.

5. **ft_lstlast**  
   Returns the last element of the list.

6. **ft_lstdelone**  
   Deletes a single list element and frees its content.

7. **ft_lstclear**  
   Deletes all elements in the list and frees their content.

8. **ft_lstiter**  
   Applies a function to each element in the list.

9. **ft_lstmap**  
   Applies a function to each element in the list and returns a new list.

