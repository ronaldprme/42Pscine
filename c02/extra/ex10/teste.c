#include <stdio.h>
#include <stddef.h>

size_t strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = 0;
    size_t copied_len = 0;

    // Primeiro, calculamos o tamanho da string de origem.
    while (src[src_len] != '\0')
        src_len++;

    // O tamanho do buffer disponível é "size - 1" para garantir espaço para o caractere nulo.
    size_t available_space = size - 1;

    // Copiar o máximo de caracteres possíveis, respeitando o espaço disponível.
    while (copied_len < available_space && src[copied_len] != '\0') {
        dest[copied_len] = src[copied_len];
        copied_len++;
    }

    // Certificar-se de terminar a string de destino corretamente.
    dest[copied_len] = '\0';

    // Retornar o tamanho que a string de origem teria se fosse copiada completamente.
    return src_len;
}

int main() {
    char source[] = "Hello, this is a long string!";
    char destination[10];  // Destino com espaço para 20 caracteres (incluindo o caractere nulo).

    // Copiar a string de origem para a string de destino usando strlcpy.
    size_t copied_len = strlcpy(destination, source, sizeof(destination));

    // Imprimir a string de origem e o resultado da cópia.
    printf("Origem: %s\n", source);
    printf("Destino: %s\n", destination);
    printf("Tamanho da string de origem: %zu\n", copied_len);

    return 0;
}
