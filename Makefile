CC = g++

output: main.o scanner.o token.o parser.o
	$(CC) main.o scanner.o token.o parser.o -o frontEnd

main.o: main.cpp
	$(CC) -c main.cpp

scanner.o: scanner.cpp scanner.h
	$(CC) -c scanner.cpp

token.o: token.cpp token.h
	$(CC) -c token.cpp

parser.o: parser.cpp parser.h
	$(CC) -c parser.cpp

clean:
	rm *.o frontEnd
