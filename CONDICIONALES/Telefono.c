#include <stdio.h>

char aMayuscula(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - 32;
    }
    return letra;
}

char convertirLetraADigito(char letra) {
    letra = aMayuscula(letra);
    
    switch(letra) {
        case 'A': case 'B': case 'C':
            return '2';
        case 'D': case 'E': case 'F':
            return '3';
        case 'G': case 'H': case 'I':
            return '4';
        case 'J': case 'K': case 'L':
            return '5';
        case 'M': case 'N': case 'O':
            return '6';
        case 'P': case 'Q': case 'R': case 'S':
            return '7';
        case 'T': case 'U': case 'V':
            return '8';
        case 'W': case 'X': case 'Y': case 'Z':
            return '9';
        case 'Ñ': 
            return '6';
        default:
            return '0'; 
    }
}

int esLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == 'Ñ' || c == 'ñ';
}

int main() {
    char apellido[100];
    char inicialNombre;
    char codigoTelefonico[100];
    int i, j = 0;
    
    printf("=== SISTEMA DE CODIFICACION ===\n\n");
    
    printf("Ingrese el apellido: ");
    int c;
    i = 0;
    while ((c = getchar()) != '\n' && c != EOF && i < 99) {
        apellido[i++] = c;
    }
    apellido[i] = '\0';
    
    printf("Ingrese la inicial del primer nombre: ");
    scanf(" %c", &inicialNombre);
    
    for(i = 0; apellido[i] != '\0'; i++) {
        if(esLetra(apellido[i])) {
            codigoTelefonico[j++] = convertirLetraADigito(apellido[i]);
        }
    }
    
    codigoTelefonico[j++] = '*';
    
    if(esLetra(inicialNombre)) {
        codigoTelefonico[j++] = convertirLetraADigito(inicialNombre);
    }
    
    codigoTelefonico[j++] = '*';
    codigoTelefonico[j] = '\0';
    
    printf("\n=== RESULTADO ===\n");
    printf("Apellido: %s\n", apellido);
    printf("Inicial del nombre: %c\n", inicialNombre);
    printf("\nPara llamar, marque: %s\n", codigoTelefonico);
    
    return 0;
}