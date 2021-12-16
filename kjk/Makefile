PROGS = ht

CXX = g++
# CXX = clang
SRC = $(HOME)/kjk

ht: ht.o
	$(CXX) -o $@ $^

ht.o: $(SRC)/ht.cpp
	$(CXX) -c -I$(SRC) -o $@ $<

sync:
	aws s3 sync ~/kjk s3://apa-s3-bucket/kjk/

.PHONY:
clean:
	rm -f $(PROGS) *.o
