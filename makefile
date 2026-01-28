
DEPS = test

compile: main.cpp
	g++ main.cpp -o $(DEPS)

run: compile
	echo $(var) | ./$(DEPS)

clean:
	rm -f $(DEPS)
