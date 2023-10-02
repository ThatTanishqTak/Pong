CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o globals.o background.o ball. player.o opponent.o
	echo "Linking and Producing the final Application"
	gcc $(CFLAGS) main.o globals.o background.o ball.o player.o opponent.o -o final
	chmod +x final

main.o: main.cpp
	gcc $(CFLAGS) -cpp main.cpp

globals.o: globals.cpp
	gcc $(CFLAGS) -cpp globals.cpp

background.o: background.cpp
	gcc $(CFLAGS) -cpp background.cpp

ball.o: ball.cpp
	gcc $(CFLAGS) -cpp ball.cpp

player.o: player.cpp
	gcc $(CFLAGS) -cpp player.cpp

opponent.o: opponent.cpp
	gcc $(CFLAGS) -cpp opponent.cpp

clean:
	echo "Removing everything but the source file"
	rm main.o globals.o background.o ball.o player.o opponent.o