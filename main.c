#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char ** parse_args(char *line);

int main(int argc, char *argv[]){
	int i;
	int size = 0;
	char *line;
	for (i = argc-1; i>=0; i--){
		size+= strlen(argv[i])+1;
	}
	line = malloc(size);
	for (i = 0; i<argc-1; i++){
		char c[strlen(argv[i])];
		strcpy(c, argv[i]);
		strcat(line, strcat(c, " "));
	}
	strcat(line, argv[i]);
	parse_args(line);
	free(line);
}

char ** parse_args(char *line){
	int i = 0;
	char **p;
	while (line){
		char *c = strsep(&line, " ");
		strcpy(p[i], c);
		i++;
	}
}
