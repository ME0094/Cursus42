# pipex
Recrea en C la forma en que dos comandos se canalizan juntos a través de una pipe en el shell.

► [Explicación detallada en Notion.](https://www.notion.so/push_swap-88358e73b0244bcb8de473879c5da05a)

Parte obligatoria
Nombre de pro-
grama
Archivos a entre-
gar
Makefile
Argumentos
Funciones autor-
izadas
pipex
Makefile, *.h, *.c
NAME, all, clean, fclean, re
archivo1 comando1 comando2 archivo2
• open, close, read, write,
malloc, free, perror,
strerror, access, dup, dup2,
execve, exit, fork, pipe,
unlink, wait, waitpid
• ft_printf and any equivalent
YOU coded
Se permite usar
libft
Descripción
Yes
Este proyecto va sobre el manejo de pipes
Tu programa deberá ejecutarse de la siguiente forma:
./pipex archivo1 comando1 comando2 archivo2
Deberá utilizar 4 argumentos:
• archivo1 y archivo2 son nombres de arhivos.
• comando1 y comando2 son comandos de shell con sus respectivos parámetros.
La ejecución del programa pipex deberá hacer lo mismo que el siguiente comando:
$> < archivo1 comando1 | comando2 > archivo2

# Contacto 

◦ Email: martirod@student.42malaga.com

◦ Linkedin: https://www.linkedin.com/in/martin-eliseo/
