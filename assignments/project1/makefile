LABNUM = 1
#OBJS = 
CC = g++

#all: lab$(LABNUM)_1 lab$(LABNUM)_2 

problem$(LABNUM): problem$(LABNUM)_BlakeLevine.o
	$(CC) problem$(LABNUM)_BlakeLevine.o -o problem$(LABNUM)
problem$(LABNUM)_BlakeLevine.o: problem$(LABNUM)_BlakeLevine.cpp
	$(CC) -c problem$(LABNUM)_BlakeLevine.cpp
