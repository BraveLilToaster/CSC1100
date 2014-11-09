NAME = main


$(NAME): $(NAME).o
	g++ $(NAME).o -o $(NAME)

$(NAME).o: $(NAME).cpp
	g++ -c $(NAME).cpp

clean:
	rm -rf *o $(NAME)
