# Define o compilador de C
CC = gcc

# Define as flags de compilação (avisos e padrão C)
CFLAGS = -Wall -Wextra -std=c11

# Nome do arquivo executável final
TARGET = programa

# Arquivos fonte em C
SRCS = main.c pilha.c

# Converte os nomes dos arquivos .c para .o (arquivos objeto)
OBJS = $(SRCS:.c=.o)

# Regra padrão: executada quando você digita apenas 'make'
all: $(TARGET)

# Regra para linkar os arquivos objeto e gerar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra para compilar cada .c em um .o individualmente
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para executar o programa compilado
run: $(TARGET)
	./$(TARGET)

# Regra para limpar os arquivos gerados pela compilação
clean:
	rm -f $(OBJS) $(TARGET)

# Informa ao 'make' que essas palavras não são arquivos físicos
.PHONY: all clean run