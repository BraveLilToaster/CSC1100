LABNUM = 20
#OBJS = 
CC = g++

#all: lab$(LABNUM)_1 lab$(LABNUM)_2 

lab$(LABNUM)_1: lab$(LABNUM)_1BlakeLevine.o
	$(CC) lab$(LABNUM)_1BlakeLevine.o -o lab$(LABNUM)_1
lab$(LABNUM)_1BlakeLevine.o: lab$(LABNUM)_1BlakeLevine.cpp
	$(CC) -c lab$(LABNUM)_1BlakeLevine.cpp

lab$(LABNUM)_2: lab$(LABNUM)_2BlakeLevine.o
	$(CC) lab$(LABNUM)_2BlakeLevine.o -o lab$(LABNUM)_2
lab$(LABNUM)_2BlakeLevine.o: lab$(LABNUM)_2BlakeLevine.cpp
	$(CC) -c lab$(LABNUM)_2BlakeLevine.cpp
