## Asignatura PRO1 de la FIB - UPC
Estos son algunos de los problemas a resolver durante la asignatura de Programación 1. Estan resueltos usando el lenguage [https://cplusplus.com/](C++)

## Compilación y ejecución de los programas
Para compilar el programa se puede usar con el compilador g++ (parte del compilador [https://gcc.gnu.org/](gcc).
`g++ -o "nombre_jectuable" "nombre_programa.cpp"`

El comando con los flags exactos que se usan en la asignatura son:
`g++ -ansi -O2 -DNDEBUG -D_GLIBCXX_DEBUG -Wall -Wextra -Werror
-Wno-sign-compare -Wshadow`

Para poder testear el ejecutar el programa.
`./nombre_ejecutable`
En caso de tener algun test de entrada escrito se podria hacer mediante el comando.
`./nombre ejecutable < "test_input" > "test_output"`.

Y comparar el fichero generado de salida con el fichero con el resultado esperado.
`diff "test_output" "test_otuput_esperado"`.