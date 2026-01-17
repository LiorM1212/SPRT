build:
	gcc -Wall -o SPRT -std=c99 ./src/*.c
	
run:
	./SPRT

clean:
	rm ./SPRT
	clear
