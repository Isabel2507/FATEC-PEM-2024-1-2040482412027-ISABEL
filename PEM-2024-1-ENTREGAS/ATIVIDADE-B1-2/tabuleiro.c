#include <stdio.h>

int main() {
    char matriz[8][8][4] = {{{'P', 'T', '1', '\0'}, {'P', 'C', '1', '\0'}, {'P', 'B', '1', '\0'}, {'P', 'R', ' ', '\0'}, {'P', 'D', ' ', '\0'}, {'P', 'B', '2', '\0'}, {'P', 'C', '2', '\0'}, {'P', 'T', '2', '\0'}}, 
                             {{'P', 'P', '1', '\0'}, {'P', 'P', '2', '\0'}, {'P', 'P', '3', '\0'}, {'P', 'P', '4', '\0'}, {'P', 'P', '5', '\0'}, {'P', 'P', '6', '\0'}, {'P', 'P', '7', '\0'}, {'P', 'P', '8', '\0'}}, 
                             {{' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}}, 
                             {{' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}}, 
                             {{' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}}, 
                             {{' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}, {' ', 'X', ' ', '\0'}}, 
                             {{'B', 'P', '1', '\0'}, {'B', 'P', '2', '\0'}, {'B', 'P', '3', '\0'}, {'B', 'P', '4', '\0'}, {'B', 'P', '5', '\0'}, {'B', 'P', '6', '\0'}, {'B', 'P', '7', '\0'}, {'B', 'P', '8', '\0'}}, 
                             {{'B', 'T', '1', '\0'}, {'B', 'C', '1', '\0'}, {'B', 'B', '1', '\0'}, {'B', 'R', ' ', '\0'}, {'B', 'D', ' ', '\0'}, {'B', 'B', '2', '\0'}, {'B', 'C', '2', '\0'}, {'B', 'T', '2', '\0'}}};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");  
    }
    return 0;  
}