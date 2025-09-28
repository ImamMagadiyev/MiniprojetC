all:
	gcc -o chiffrement_programme main.c chiffrement_programme.c

clean:
	rm -f chiffrement_programme
