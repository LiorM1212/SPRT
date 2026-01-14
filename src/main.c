#include <stdio.h>
#include "engine.h"

int main(){

	struct engine stockfish = {"Stockfish", "file PATH"};
	
	printf("%s is in %s\n", stockfish.name, stockfish.filepath);
}
