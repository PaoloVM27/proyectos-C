#include <stdio.h>

int main(){
    int mat1 = 0, mat2 = 0, mat3 = 0, mat4 = 0, mat5 = 0, mat6 = 0, pedidos;
    float precio_mat1, precio_mat2, precio_mat3, precio_mat4, precio_mat5, precio_mat6;
    float costo_mat1, costo_mat2, costo_mat3, costo_mat4, costo_mat5, costo_mat6;
    int cantidad[50];
    float CostoTotal;

    printf("        Empresa Manufacturera        \n");
    printf("=====================================\n");

    printf("Ingresa el precio del material N°1: ");
    scanf("%f", &precio_mat1); 
    printf("Ingresa el precio del material N°2: ");
    scanf("%f", &precio_mat2); 
    printf("Ingresa el precio del material N°3: ");
    scanf("%f", &precio_mat3); 
    printf("Ingresa el precio del material N°4: ");
    scanf("%f", &precio_mat4); 
    printf("Ingresa el precio del material N°5: ");
    scanf("%f", &precio_mat5); 
    printf("Ingresa el precio del material N°6: ");
    scanf("%f", &precio_mat6); 
    printf("=====================================\n\n");

    printf("Cantidad de pedidos: ");
    scanf("%d", &pedidos); 

    for(int i = 0; i < pedidos; i++){
        printf("\nPEDIDO N° %d:\n", i+1);
        printf("Cantidad de unidades a comprar: ");
        scanf("%d", &cantidad[i]); 
    }

    for(int i = 0; i < pedidos; i++){
        mat1 = mat1 + 3 * cantidad[i];
        mat2 = mat2 + 4 * cantidad[i];
        mat3 = mat3 + cantidad[i];
        mat4 = mat4 + 2 * cantidad[i];
        mat5 = mat5 + 1 * cantidad[i];
        mat6 = mat6 + 2 * cantidad[i];
    }

    costo_mat1 = precio_mat1 * mat1;
    costo_mat2 = precio_mat2 * mat2;
    costo_mat3 = precio_mat3 * mat3;
    costo_mat4 = precio_mat4 * mat4;
    costo_mat5 = precio_mat5 * mat5;
    costo_mat6 = precio_mat6 * mat6;

    CostoTotal = costo_mat1 + costo_mat2 + costo_mat3 + costo_mat4 + costo_mat5 + costo_mat6;

    printf("\n==============================================\n");
    printf("       LISTADO DE MATERIALES REQUERIDOS       \n");
    printf("==============================================\n");
    printf("Material     Cant. Unidades     Costo Estimado\n");
    printf("   1               %d                 %.2f    \n", mat1, costo_mat1);
    printf("   2               %d                 %.2f    \n", mat2, costo_mat2);
    printf("   3               %d                 %.2f    \n", mat3, costo_mat3);
    printf("   4               %d                 %.2f    \n", mat4, costo_mat4);
    printf("   5               %d                 %.2f    \n", mat5, costo_mat5);
    printf("   6               %d                 %.2f    \n", mat6, costo_mat6);
    printf("----------------------------------------------\n");
    printf("                             Costo Total: %.2f\n", CostoTotal);

    return 0;
}