#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void				*ft_memset(void *b, int c, unsigned int len);
unsigned int		ft_strlen(const char *s);
void				ft_bzero(void *s, unsigned int n);
int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dst, const void *src, int c, unsigned int n);
void				*ft_memchr(const void *s, int c, unsigned int n);
int					ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	            *ft_memcpy(void *dest, const void *src, unsigned int n);
void				*ft_memmove(void *dst, const void *src, unsigned int len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
unsigned int        ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int		ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
int                 ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strnstr(const char *haystack, const char *needle, unsigned int len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_putstr_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
void                *ft_calloc(unsigned int count, unsigned int size);
char				*ft_strdup(const char *src);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));

t_list				*ft_lstnew(void const *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void *));
t_list				*ft_lstmap(t_list *lst,
void *(*f)(void *), void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);

#endif