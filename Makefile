all:
	mkdir -p bin
	g++ src/main.cpp -o bin/hellow

clean:
	rm -rf bin
