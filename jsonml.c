#include "lexico.h"
#include "lista.h"
#include "parser.h"
FILE *archivo;
int main(int argc, char* args[]){
	if ((archivo=fopen(args[1],"rt"))){
        lexer(archivo);
	}
	else{
		printf("Error no se pudo abrir el archivo\n");
	}
	fclose(archivo);
    jsonml();
    return 0;
}

