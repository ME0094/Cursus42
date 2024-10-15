# pipex
pipex es un proyecto que imita el comportamiento del comando pipe (|) de Unix.

Recrea en C la forma en que dos comandos se canalizan juntos a través de una pipe en el shell.

Toma cuatro argumentos: dos comandos y dos archivos. Ejecuta el primer comando, canaliza su salida al segundo comando y escribe la salida final al segundo archivo.

► [Explicación detallada en Notion.](https://www.notion.so/push_swap-88358e73b0244bcb8de473879c5da05a)

# Contacto 

◦ Email: martirod@student.42malaga.com

◦ Linkedin: https://www.linkedin.com/in/martin-eliseo/
pipex
Introducción


Características
Ejecuta dos comandos con un pipe entre ellos.
Maneja la redirección de entrada y salida.
Manejo de errores para argumentos no válidos y ejecución de comandos.
Bonus: Funcionalidades adicionales (si las hubiera).
Instalación
Para instalar y compilar el proyecto, sigue estos pasos:

Clonar el repositorio:

Bash
git clone https://github.com/ME0094/Cursus42.git
cd Cursus42/pipex
Usa el código con precaución.

Compilar el proyecto:

Bash
make
Usa el código con precaución.

Uso
Para ejecutar el programa, utiliza el siguiente comando:

Bash
./pipex archivo1 comando1 comando2 archivo2
Usa el código con precaución.

archivo1: El archivo de entrada.
comando1: El primer comando a ejecutar.
comando2: El segundo comando a ejecutar.
archivo2: El archivo de salida.
Ejemplo
Bash
./pipex entrada "ls -l" "wc -l" salida
Usa el código con precaución.

Estructura de Archivos
pipex/
├── Makefile
├── include/
│   └── pipex.h
├── libft/
│   ├── Makefile
│   ├── ft_atoi.c
│   ├── ...
│   └── ft_printf/
│       ├── Makefile
│       ├── ft_printf.c
│       └── ...
├── src/
│   ├── bonus/
│   │   ├── child_bonus.c
│   │   ├── ...
│   └── mandatory/
│       ├── child_processes.c
│       ├── ...
│       └── main.c
└── ...
Contribución
¡Se agradecen las contribuciones! Sigue estos pasos para contribuir:

Bifurcar el repositorio (Fork).
Crea una nueva rama (git checkout -b feature-branch).
Confirma tus cambios (git commit -m 'Añadir alguna característica').
Publica en la rama (git push origin feature-branch).
Abre una solicitud de incorporación de cambios (pull request).
Licencia
Este proyecto está bajo licencia MIT.







