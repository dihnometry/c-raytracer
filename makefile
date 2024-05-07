all: rays

rays: main.c vec3.c
	gcc -o rays main.c vec3.c

clean:
	rm main.o rays
