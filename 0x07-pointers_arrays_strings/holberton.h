#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/* this prototype has to be declared in a header file */
int _putchar(char c);

/* this prototype has to be declared in a header file */
char *_memset(char *s, char b, unsigned int n);

/* this prototype has to be declared in a header file */
char *_memcpy(char *dest, char *src, unsigned int n);

/* this prototype has to be declared in a header file */
char *_strchr(char *s, char c);

/* this prototype has to be declared in a header file */
unsigned int _strspn(char *s, char *accept);

/* this prototype has to be declared in a header file */
char *_strpbrk(char *s, char *accept);

/* this prototype has to be declared in a header file */
char *_strstr(char *haystack, char *needle);

/* this prototype has to be declared in a header file */
void print_chessboard(char (*a)[8]);

/* this prototype has to be declared in a header file */
void print_diagsums(int *a, int size);

#endif /* _SAMPLE_HEADER_H_ */
