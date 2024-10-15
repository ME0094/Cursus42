# pipex
El proyecto `pipex` recrea en C la forma en que dos comandos se canalizan juntos a través de una pipe (`|`) en el shell.

Toma cuatro argumentos: dos comandos y dos archivos. Ejecuta el primer comando, canaliza su salida al segundo comando y escribe la salida final al segundo archivo.

► [Explicación detallada en Notion.](https://www.notion.so/push_swap-88358e73b0244bcb8de473879c5da05a)

## Características

- Ejecuta dos comandos con un pipe entre ellos.
- Maneja la redirección de entrada y salida.
- Manejo de errores para argumentos no válidos y ejecución de comandos.
- Bonus: Funcionalidades adicionales, mayor número de pipes.

## Instalación

Para instalar y compilar el proyecto, sigue estos pasos:

1. Clonar el repositorio:
    ```sh
    git clone https://github.com/ME0094/Cursus42.git
    cd Cursus42/pipex
    ```

2. Compilar el proyecto usando `Makefile`:
    ```sh
    make
    ```

## Uso

Para ejecutar el programa, utiliza el siguiente comando:
```sh
./pipex file1 cmd1 cmd2 file2
```

- `file1`: El archivo de entrada.
- `cmd1`: El primer comando a ejecutar.
- `cmd2`: El segundo comando a ejecutar.
- `file2`: El archivo de salida.
- 
### Ejemplo
```sh
./pipex infile "ls -l" "wc -l" outfile
```

## Estructura de Archivos

```
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
```

## Contribuciones

¡Se agradecen las contribuciones! Sigue estos pasos para contribuir:

1. Bifurca el repositorio.
2. Crea una nueva rama (`git checkout -b feature-branch`).
3. Confirma tus cambios (`git commit -m 'Add some feature'`).
4. Publica en la rama (`git push origin feature-branch`).
5. Crea una solicitud de incorporación de cambios.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT.

# Contacto 

◦ Email: martirod@student.42malaga.com

◦ Linkedin: https://www.linkedin.com/in/martin-eliseo/


Licencia
Este proyecto está bajo licencia MIT.
