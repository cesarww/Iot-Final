CC = gcc
CFLAGS = -g -Wall -Werror
HEADERS = `mysql_config --cflags --libs `  

all: select

select: select.c
	$(CC) $(CFLAGS) select.c -o select `mysql_config --cflags --libs `
clean:
	rm -f select

fresh:
	make clean 
	make all
