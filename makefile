DEPS = testcompile

$(DEPS): main.cpp
	g++ main.cpp -o $(DEPS)

run: $(DEPS)
	./$(DEPS)

clean:
	rm -f $(DEPS)