CC = gcc
CFLAGS = -Iinclude 
SRC = src/main.c src/take_input.c src/get_result.c 
OUT = KaLkUlAcKa


all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
