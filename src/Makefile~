IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)
OBJDIR=../obj/
OBJFLAG=-o $(OBJDIR)

OBJECTS=insertion_sort.o quick_sort.o analysis.o circus.o hanoi.o triomino.o ladder_climb.o utilities.o quick_insertion.o merge_sort.o merge_insertion.o variant_linear.o main.o

Prosper:$(OBJECTS)
	g++ -o ../Prosper $(OBJDIR)insertion_sort.o $(OBJDIR)quick_sort.o $(OBJDIR)analysis.o $(OBJDIR)circus.o $(OBJDIR)hanoi.o $(OBJDIR)triomino.o $(OBJDIR)ladder_climb.o $(OBJDIR)utilities.o $(OBJDIR)quick_insertion.o $(OBJDIR)merge_sort.o $(OBJDIR)merge_insertion.o $(OBJDIR)variant_linear.o $(OBJDIR)main.o -std=c++11
	
.cpp.o:$*.cpp
	$(CC) $(OBJFLAG)$*.o -c $*.cpp $(CFLAGS) -std=c++11
	
clean:
	rm -f $(OBJDIR)*.o ../Prosper ../dat/*.dat
