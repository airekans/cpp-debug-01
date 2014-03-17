all: test_app

test_app: main.o Child.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -o $@ $^ -I.
