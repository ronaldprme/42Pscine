#include <stdio.h>
#include <string.h>

char* my_strstr(const char* haystack, const char* needle) {
    size_t needle_len = strlen(needle);
    size_t haystack_len = strlen(haystack);

    // Percorre a string haystack em busca da substring needle
    size_t i = 0;
    while (i <= haystack_len - needle_len) {
        size_t j = 0;
        // Compara cada caracter da substring needle com a string haystack
        while (j < needle_len && haystack[i + j] == needle[j]) {
            j++;
        }
        // Se a comparação foi bem-sucedida, retorna o ponteiro para a primeira ocorrência
        if (j == needle_len) {
            return (char*)(&haystack[i]);
        }
        i++;
    }

    // Caso a substring não seja encontrada, retorna NULL
    return NULL;
}

int main() {
    char haystack[] = "Hello, world!";
    char needle[] = "world";

    char* result = my_strstr(haystack, needle);

    if (result != NULL) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
