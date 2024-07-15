# Modify the line below to `CC = gcc` for use on Windows
CC = clang
CFLAGS = -Werror -Wall
DEBUGFLAGS = -g
TARGET = cli-math
SOURCES = main.c cli-parse.c cli-math.c

all: $(TARGET)

debug: CFLAGS += $(DEBUGFLAGS)
debug: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)
