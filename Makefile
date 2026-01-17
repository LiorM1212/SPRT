build:
	gcc -Wall -o SPRT -std=c99 ./src/*.c -lm
	
run:
	./SPRT

clean:
	rm ./SPRT
	clear
