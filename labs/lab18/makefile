LABNUM = 18
#OBJS = 
CC = g++

#all: lab$(LABNUM)_1 lab$(LABNUM)_2 

lab$(LABNUM): lab$(LABNUM)_BlakeLevine.o
	$(CC) lab$(LABNUM)_BlakeLevine.o -o lab$(LABNUM)
lab$(LABNUM)_BlakeLevine.o: lab$(LABNUM)_BlakeLevine.cpp
	$(CC) -c lab$(LABNUM)_BlakeLevine.cpp
