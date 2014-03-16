all: test_app

test_app: App.o Child.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -o $@ $^ -I.
