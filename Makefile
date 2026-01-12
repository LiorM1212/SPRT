build:
	gcc -Wall -o SPRT -std=c99 ./src/*.c -lSDL2
	
run:
	./SPRT

clean:
	rm ./SPRT
	clear
