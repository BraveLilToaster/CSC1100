LABNUM = 1
CC = g++

all: problem$(LABNUM)_1 problem$(LABNUM)_2 

PART = 1
problem$(LABNUM)_$(PART): problem$(LABNUM)_$(PART)BlakeLevine.o
	$(CC) problem$(LABNUM)_$(PART)BlakeLevine.o -o problem$(LABNUM)_$(PART)
problem$(LABNUM)_$(PART)BlakeLevine.o: problem$(LABNUM)_$(PART)BlakeLevine.cpp
	$(CC) -c problem$(LABNUM)_$(PART)BlakeLevine.cpp

#PART = 2
#problem$(LABNUM)_$(PART): problem$(LABNUM)_$(PART)BlakeLevine.o
#	$(CC) problem$(LABNUM)_$(PART)BlakeLevine.o -o problem$(LABNUM)_$(PART)
#problem$(LABNUM)_$(PART)BlakeLevine.o: problem$(LABNUM)_$(PART)BlakeLevine.cpp
#	$(CC) -c problem$(LABNUM)_$(PART)BlakeLevine.cpp

clean:
	rm -rf *o problem$(LABNUM)_1 problem$(LABNUM)_2 
