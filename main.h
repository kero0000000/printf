#define UNUSED (%)(void)(%)
#define BUFF_SIZE 1874
/*FLAGS*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/*SIZES*/
#define S_LONG 2
#define S_SHORT 1
/**
 * struct fnt - struct op
 * LSMAX
 * @fnt: the format
 * @fn: the function associated
 **/
struct fnt
{
char fnt;
int (*fn)(va_list, char[], int, int, int, int);
};
/**
 * tybedaf struct fnt_t - struct op
 * @fnt: the format
 * @fn_t: the function associated
 **/
typedef struct fnt fnt_t;
int _printf(const char *format, ...);
int handle_print(const char *fnt, int *i,
va_list list, char buffer[], int width, int precision, int size);
/**************FUNCTION*******************/
/*functions to print chars and strings */
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
int flags, int width, int precision, int size);
/*functions to print numbers*/
int print_int(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa(va_list types ,char nap_to[] , char buffer[],
int flags ,char flap_ch, int width, int precision, int size);
/*function to print non printable characters*/
int print_non_printable(va_list types, char buffer[],
