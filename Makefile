
TARGETS	= Lab2_ex2

.PHONY: all
all: $(TARGETS)

.PHONY: clean
clean:
	$(RM) $(TARGETS) *.o

Lab2_ex2: Lab2_ex2.o

Lab2_ex2.o: Lab2_ex2.cpp Shop.h DVD.h
