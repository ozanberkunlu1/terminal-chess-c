#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int siyahPiyon(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case '.':
            
                if(kaynakY == hedefY && (hedefX - kaynakX == 1 || (hedefX - kaynakX == 2 && hedefX == 4))){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;    
                }
            
            
            
                else if(kaynakY == hedefY && hedefX - kaynakX == 1){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;                    
                }
                else{
                    
                    printf("hatali oynama!\n");
                    return 0;
                                    
                }
                
            break;

        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            if((hedefX - kaynakX == 1 && kaynakY - hedefY == 1) || (hedefX - kaynakX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;

                    
                }
            else{
                printf("hatali oynama!\n");
                return 0;
                                        
            }
            break;
       
        case 'K':
            if((hedefX - kaynakX == 1 && kaynakY - hedefY == 1) || (hedefX - kaynakX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    printf("siyah kazandi!\n");
                    exit(0);

                    
                }
            else{
                printf("hatali oynama!\n");
                return 0;
                                        
            }
            break;
        default:
            printf("hatali oynama!\n");
            return 0;
    }
}

int botsiyahPiyon(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case '.':
            
                if(kaynakY == hedefY && (hedefX - kaynakX == 1 || (hedefX - kaynakX == 2 && hedefX == 4))){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;                    
                }
            
            
            
                else if(kaynakY == hedefY && hedefX - kaynakX == 1){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;                    
                }
                else{                    
                    return 0;                    
                }
                        
            break;

        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            if((hedefX - kaynakX == 1 && kaynakY - hedefY == 1) || (hedefX - kaynakX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;                   
                }
            else{
                    
                return 0;
                                        
            }
            break;
        case 'K':
            if((hedefX - kaynakX == 1 && kaynakY - hedefY == 1) || (hedefX - kaynakX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'p';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    
                    printf("siyah kazandi!\n");
                    exit(0);
                    
                }
            else{
                    
                return 0;
                                        
            }
            break;
        default:
            return 0;
    }
}

int beyazAt(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
        case '.':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'N';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;
               }
               else{
                    
                    printf("hatalı oynama!\n");
                    return 0;
                        
                }
                break;
        case 'k':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'N';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    printf("beyaz kazandi!\n");
                    exit(0);
               }
               else{
                    
                    printf("hatalı oynama!\n");
                    return 0;                        
                }
                break;
            default:
                printf("hatalı oynama!\n");
                    return 0;
            
    }
}

int siyahAt(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case '.':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'n';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;
               }
               else{
                    printf("hatali oynama!\n");
                    return 0;
                        
                }
                break;
            case 'K':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'n';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    printf("siyah kazandi!\n");
                    exit(0);

               }
               else{
                    printf("hatali oynama!\n");
                    return 0;
                        
                }
                break;
            default:
                    printf("hatali oynama!\n");
                    return 0;

    }
}

int botsiyahAt(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case '.':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'n';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;
               }
               else{
                    
                    return 0;
                        
                }
                break;
             case 'K':
            if((kaynakX - hedefX == 2 && hedefY - kaynakY == 1) || 
               (kaynakX - hedefX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 1 && hedefY - kaynakY == 2) || 
               (hedefX - kaynakX == 2 && hedefY - kaynakY == 1) || 
               (hedefX - kaynakX == 2 && kaynakY - hedefY == 1) || 
               (hedefX - kaynakX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 1 && kaynakY - hedefY == 2) || 
               (kaynakX - hedefX == 2 && kaynakY - hedefY == 1)){

                    tahta[hedefX - 1][hedefY - 1] = 'n';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    printf("siyah kazandi!\n");
                    exit(0);

               }
               else{
                    
                    return 0;
                        
                }
                break;
            default:
                    return 0;
            
    }
}

int beyazPiyon(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){
        case '.':
            
                if(kaynakY == hedefY && (kaynakX - hedefX == 1 || (kaynakX - hedefX == 2 && hedefX == 5))){
                    tahta[hedefX - 1][hedefY - 1] = 'P';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;                    
                }
                        
                else if(kaynakY == hedefY && kaynakX - hedefX == 1){
                    tahta[hedefX - 1][hedefY - 1] = 'P';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;
                   
                }
                else{                    
                    printf("hatalı oynama!\n");
                    return 0;                                        
                }            
            break;

        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
            if((kaynakX - hedefX == 1 && kaynakY - hedefY == 1) || (kaynakX - hedefX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'P';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    return 1;
                    
                }
            else{
                    
                printf("hatalı oynama!\n");
                return 0;
                                        
            }
        case 'k':
            if((kaynakX - hedefX == 1 && kaynakY - hedefY == 1) || (kaynakX - hedefX == 1 && hedefY - kaynakY == 1)){
                    tahta[hedefX - 1][hedefY - 1] = 'P';
                    tahta[kaynakX - 1][kaynakY - 1] = '.';
                    printf("beyaz kazandi!\n");
                    exit(0);

                    
                }
            else{
                    
                printf("hatalı oynama!\n");
                return 0;
                                        
            }
        default:
            printf("hatalı oynama!\n");
            return 0;
    }
}

int siyahKale(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else return 0;
            break;
        case 'K':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }
            else return 0;
            break;
        default:
            printf("hatali oynama!\n");
            return 0;
    }
}

int botsiyahKale(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else return 0;
            break;
        case 'K':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'r';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }
            else return 0;
            break;
        default:
            return 0;
    }
}

int beyazKale(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else{
                printf("hatalı oynama!\n");
                return 0;
            }
            break;
        case 'k':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'R';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }
            else{
                printf("hatalı oynama!\n");
                return 0;
            }
            break;
            
        default:
            printf("hatalı oynama!\n");
            return 0;
    }
}

int beyazSah(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
        case 'k':
            if(kaynakX == hedefX && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX == hedefX && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && kaynakY - hedefY  == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'K';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            

            else {
            printf("hatalı oynama!\n");
            return 0;
            }
        default:
            printf("hatalı oynama!\n");
            return 0;
    }
}

int botsiyahSah(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case 'K':
            if(kaynakX == hedefX && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX == hedefX && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && kaynakY - hedefY  == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else {
            return 0;
            }
        default:
            return 0;
    }
}

int siyahSah(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case 'K':
            if(kaynakX == hedefX && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX == hedefX && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY == kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(hedefX - kaynakX == 1 && kaynakY - hedefY  == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && hedefY - kaynakY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else if(kaynakX - hedefX == 1 && kaynakY - hedefY == 1){
                tahta[hedefX - 1][hedefY - 1] = 'k';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;
            }

            else {
                printf("hatali oynama!\n");
                return 0;
            }
        default:
            printf("hatali oynama!\n");
            return 0;
    }
}

int beyazVezir(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatalı oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'Q';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
            printf("hatalı oynama!\n");
            return 0;
            }
        case 'k':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
            exit(0);

            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
            exit(0);

            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
            exit(0);

            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatalı oynama! Yolun üstünde taş var.\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
            exit(0);

            }
            else if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatalı oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'Q';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                printf("beyaz kazandi!\n");
                exit(0);



            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'Q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);

            }

            else {
            printf("hatalı oynama!\n");
            return 0;
            }
        default:
            printf("hatalı oynama!\n");
            return 0;
    }
}

int siyahVezir(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatali oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'q';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
                printf("hatali oynama!\n");
                return 0;
            }
        case 'K':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }
            else if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatali oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'q';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                printf("siyah kazandi!\n");
                    exit(0);



            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);

            }

            else {
                printf("hatali oynama!\n");
                return 0;
            }
        default:
            printf("hatali oynama!\n");
            return 0;
    }
}

int botsiyahVezir(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case 'K':
            if(kaynakX > hedefX && hedefY == kaynakY){
            for (int i = hedefX + 1; i < kaynakX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX < hedefX && hedefY == kaynakY){
            for (int i = kaynakX + 1; i < hedefX; i++) {
                if (tahta[i - 1][kaynakY - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY < hedefY){
            for (int j = kaynakY + 1; j < hedefY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(kaynakX == hedefX && kaynakY > hedefY){
            for (int j = hedefY + 1; j < kaynakY; j++) {
                if (tahta[kaynakX - 1][j - 1] != '.') {
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }
            else if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'q';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'q';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
            return 0;
            }
        default:
            return 0;
    }
}

int beyazFil(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
            

            if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatalı oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'B';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
            printf("hatalı oynama!\n");
            return 0;
            }

            break;
        case 'k':
            

            if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatalı oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'B';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                printf("beyaz kazandi!\n");
                    exit(0);




            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);


            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);


            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatalı oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatalı oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'B';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("beyaz kazandi!\n");
                    exit(0);


            }

            else {
            printf("hatalı oynama!\n");
            return 0;
            }

            break;
        default:
            printf("hatalı oynama!\n");
            return 0;

    }

}

int siyahFil(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
            

            if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatali oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'b';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
                printf("hatali oynama!\n");
                return 0;
            }

            break;
        case 'K':
            

            if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    printf("hatali oynama!\n");
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        printf("hatali oynama!\n");
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'b';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                printf("siyah kazandi!\n");
                    exit(0);


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                printf("hatali oynama!\n");
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    printf("hatali oynama!\n");
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            printf("siyah kazandi!\n");
                    exit(0);
            }

            else {
                printf("hatali oynama!\n");
                return 0;
            }

            break;
        default:
            printf("hatali oynama!\n");
            return 0;
    }









}

int botsiyahFil(int kaynakX, int kaynakY, int hedefX, int hedefY, char **tahta, int hamle){

    switch(tahta[hedefX - 1][hedefY - 1]){

        case '.':
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case 'K':
            

            if(hedefX < kaynakX && hedefY > kaynakY){
                if(kaynakX - hedefX != hedefY - kaynakY){
                    return 0;
                }
                for(int i = 1; i < kaynakX - hedefX; i++){
                    if(tahta[kaynakX - i - 1][kaynakY + i - 1] != '.'){
                        return 0;
                    }
                }
                tahta[hedefX - 1][hedefY - 1] = 'b';
                tahta[kaynakX - 1][kaynakY - 1] = '.';
                return 1;


            }


            else if(hedefX > kaynakX && hedefY > kaynakY){
            if(hedefX - kaynakX != hedefY - kaynakY){
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY + i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }


            else if(hedefX > kaynakX && hedefY < kaynakY){
            if(hedefX - kaynakX != kaynakY - hedefY){
                return 0;
            }
            for(int i = 1; i < hedefX - kaynakX; i++){
                if(tahta[kaynakX + i - 1][kaynakY - i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else if(hedefX < kaynakX && hedefY < kaynakY){
            if(kaynakX - hedefX != kaynakY - hedefY){
                return 0;
            }
            for(int i = 1; i < kaynakX - hedefX; i++){
                if(tahta[kaynakX - i - 1][kaynakY - i - 1] != '.'){
                    return 0;
                }
            }
            tahta[hedefX - 1][hedefY - 1] = 'b';
            tahta[kaynakX - 1][kaynakY - 1] = '.';
            return 1;
            }

            else {
            return 0;
            }

            break;
        default:
            return 0;
    }









}

int siyahBotHamlesi(char **tahta, int hamle){

    int guvenlikSayaci = 0;
    int hamleBasarili = 0;

    printf("--- Siyah Bot dusunuyor ---\n");

    while(guvenlikSayaci < 50000 && hamleBasarili != 1){

        guvenlikSayaci++;

        

        int kaynakX = (rand() % 8) + 1;
        int kaynakY = (rand() % 8) + 1;

        char secilenTas = tahta[kaynakX - 1][kaynakY - 1];

        if (secilenTas >= 'a' && secilenTas <= 'z'){

            int hedefX = (rand() % 8) + 1;
            int hedefY = (rand() % 8) + 1;

            if (kaynakX == hedefX && kaynakY == hedefY) continue;

            switch(secilenTas){

                case 'p': hamleBasarili = botsiyahPiyon(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                case 'n': hamleBasarili = botsiyahAt(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                case 'r': hamleBasarili = botsiyahKale(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                case 'b': hamleBasarili = botsiyahFil(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                case 'q': hamleBasarili = botsiyahVezir(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                case 'k': hamleBasarili = botsiyahSah(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
                default: break;

                
                
            }

            if(hamleBasarili == 1){

                    printf("\n\n>>> BOTUN HAMlesi SONRASI TAHTA <<<\n");

                    printf("1\t2\t3\t4\t5\t6\t7\t8");
                    for(int i = 0; i < 8; i++){
        
                        printf("\n\n\n");
                        for(int j = 0; j < 8; j++){
                            printf("%c\t", tahta[i][j]);
                        }
                        printf("%d", i + 1);
                    }
                    printf("\n-----------------------------------\n");
            

                    FILE *dosya = fopen("notasyon.txt", "a");

                    if(dosya != NULL) {
                        char kaynakSutun = 'a' + (kaynakY - 1);
                        char hedefSutun = 'a' + (hedefY - 1);

                        fprintf(dosya, "Hamle %d: %c%d -> %c%d\n", hamle, kaynakSutun, kaynakX, hedefSutun, hedefX);
                        fclose(dosya);
                    } else {
                        printf("Notasyon dosyasi acilamadi!\n");
                    }

                    hamle++;
                }

        }

        

        



    }

    if(hamleBasarili == 0) {
        printf("Bot yasal hamle bulamadi! (Sayac sinirlandi)\n");
    }


    return hamle;



}

int botluOyun(void){

    srand(time(NULL));

    int satir = 8, sutun = 8;

    char **tahta = (char **)malloc(satir * sizeof(char *));
    for(int i = 0; i < satir; i++) {
        tahta[i] = (char *)malloc(sutun * sizeof(char));
    }

    for(int i = 0; i < satir; i++){
        for(int j = 0; j < sutun; j++){
            tahta[i][j] = '.';
        }
    }

    char siyahArka[8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
    for(int i = 0; i < sutun; i++){
        tahta[0][i] = siyahArka[i];
    }

    for(int i = 0; i < sutun; i++){
        tahta[1][i] = 'p';
    }

    char beyazArka[8] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};
    for(int i = 0; i < sutun; i++){
        tahta[7][i] = beyazArka[i];
    }

    for(int i = 0; i < sutun; i++){
        tahta[6][i] = 'P';
    }

    printf("1\t2\t3\t4\t5\t6\t7\t8");
    for(int i = 0; i < 8; i++){
        
        printf("\n\n\n");
        for(int j = 0; j < 8; j++){
            printf("%c\t", tahta[i][j]);
        }
        printf("%d", i + 1);
    }

    int kaynakX, kaynakY, hedefX, hedefY;

    int hamle = 1;

    while(1){

        if(hamle % 2 != 0) {
             printf("\n\n\n--- BEYAZIN SIRASI (Hamle: %d) ---\n", hamle);
        }
        else {
            printf("\n\n\n--- SİYAHIN SIRASI (Hamle: %d) ---\n", hamle);
            hamle = siyahBotHamlesi(tahta, hamle);
            continue;
        }

        printf("\n\n\n oynamak istediginiz tasin koordinatlarini giriniz: ");
        scanf("%d %d", &kaynakX, &kaynakY);

        printf("hedef karenin koordinatlarini giriniz: ");
        scanf("%d %d", &hedefX, &hedefY);

        if(kaynakX >= 1 && kaynakX <= 8 && kaynakY >= 1 && kaynakY <= 8 &&
             hedefX >= 1 && hedefX <= 8 && hedefY >= 1 && hedefY <= 8) {
             
        } 
        else {
            printf("Gecersiz koordinat! 1 ile 8 arasinda degerler giriniz.\n");
            continue;
        }

        char secilenTas = tahta[kaynakX - 1][kaynakY - 1];

        if (hamle % 2 != 0) { 
            if (!(secilenTas >= 'A' && secilenTas <= 'Z')) {
                printf("Hatali secim! Sirasi gelen beyaz taslardan birini secmelisin.\n");
                continue;
            }
        } else { 
            if (!(secilenTas >= 'a' && secilenTas <= 'z')) {
                printf("Hatali secim! Sirasi gelen siyah taslardan birini secmelisin.\n");
                continue;
            }
        }

        int hamleBasarili = 0;

        switch(secilenTas){

            case 'P': hamleBasarili = beyazPiyon(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'p': hamleBasarili = siyahPiyon(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'N': hamleBasarili = beyazAt(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'n': hamleBasarili = siyahAt(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'R': hamleBasarili = beyazKale(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'r': hamleBasarili = siyahKale(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'B': hamleBasarili = beyazFil(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'b': hamleBasarili = siyahFil(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'Q': hamleBasarili = beyazVezir(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'q': hamleBasarili = siyahVezir(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'K': hamleBasarili = beyazSah(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'k': hamleBasarili = siyahSah(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            default:
                printf("Secilen karede tas yok!\n");
                hamleBasarili = 0;
                break;
            
        }

        printf("1\t2\t3\t4\t5\t6\t7\t8");
        for(int i = 0; i < 8; i++){
        
            printf("\n\n\n");
            for(int j = 0; j < 8; j++){
                printf("%c\t", tahta[i][j]);
            }
            printf("%d", i + 1);
        }

        if(hamleBasarili == 1){
            

            FILE *dosya = fopen("notasyon.txt", "a");

            if(dosya != NULL) {
                char kaynakSutun = 'a' + (kaynakY - 1);
                char hedefSutun = 'a' + (hedefY - 1);

                fprintf(dosya, "Hamle %d: %c%d -> %c%d\n", hamle, kaynakSutun, kaynakX, hedefSutun, hedefX);
                fclose(dosya);
            } else {
                printf("Notasyon dosyasi acilamadi!\n");
            }

            hamle++;
        }

    }

    return 0;




}

int normalOyun(void){

    srand(time(NULL));

    int satir = 8, sutun = 8;

    char **tahta = (char **)malloc(satir * sizeof(char *));
    for(int i = 0; i < satir; i++) {
        tahta[i] = (char *)malloc(sutun * sizeof(char));
    }

    for(int i = 0; i < satir; i++){
        for(int j = 0; j < sutun; j++){
            tahta[i][j] = '.';
        }
    }

    char siyahArka[8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
    for(int i = 0; i < sutun; i++){
        tahta[0][i] = siyahArka[i];
    }

    for(int i = 0; i < sutun; i++){
        tahta[1][i] = 'p';
    }

    char beyazArka[8] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};
    for(int i = 0; i < sutun; i++){
        tahta[7][i] = beyazArka[i];
    }

    for(int i = 0; i < sutun; i++){
        tahta[6][i] = 'P';
    }

    printf("1\t2\t3\t4\t5\t6\t7\t8");
    for(int i = 0; i < 8; i++){
        
        printf("\n\n\n");
        for(int j = 0; j < 8; j++){
            printf("%c\t", tahta[i][j]);
        }
        printf("%d", i + 1);
    }

    int kaynakX, kaynakY, hedefX, hedefY;

    int hamle = 1;

    while(1){

        if(hamle % 2 != 0) {
             printf("\n\n\n--- BEYAZIN SIRASI (Hamle: %d) ---\n", hamle);
        }
        else {
            printf("\n\n\n--- SİYAHIN SIRASI (Hamle: %d) ---\n", hamle);
        }

        printf("\n\n\n oynamak istediginiz tasin koordinatlarini giriniz: ");
        scanf("%d %d", &kaynakX, &kaynakY);

        printf("hedef karenin koordinatlarini giriniz: ");
        scanf("%d %d", &hedefX, &hedefY);

        if(kaynakX >= 1 && kaynakX <= 8 && kaynakY >= 1 && kaynakY <= 8 &&
             hedefX >= 1 && hedefX <= 8 && hedefY >= 1 && hedefY <= 8) {
             
        } 
        else {
            printf("Gecersiz koordinat! 1 ile 8 arasinda degerler giriniz.\n");
            continue;
        }

        char secilenTas = tahta[kaynakX - 1][kaynakY - 1];

        if (hamle % 2 != 0) { 
            if (!(secilenTas >= 'A' && secilenTas <= 'Z')) {
                printf("Hatali secim! Sirasi gelen beyaz taslardan birini secmelisin.\n");
                continue;
            }
        } else { 
            if (!(secilenTas >= 'a' && secilenTas <= 'z')) {
                printf("Hatali secim! Sirasi gelen siyah taslardan birini secmelisin.\n");
                continue;
            }
        }

        int hamleBasarili = 0;

        switch(secilenTas){

            case 'P': hamleBasarili = beyazPiyon(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'p': hamleBasarili = siyahPiyon(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'N': hamleBasarili = beyazAt(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'n': hamleBasarili = siyahAt(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'R': hamleBasarili = beyazKale(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'r': hamleBasarili = siyahKale(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'B': hamleBasarili = beyazFil(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'b': hamleBasarili = siyahFil(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'Q': hamleBasarili = beyazVezir(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'q': hamleBasarili = siyahVezir(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'K': hamleBasarili = beyazSah(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            case 'k': hamleBasarili = siyahSah(kaynakX, kaynakY, hedefX, hedefY, tahta, hamle); break;
            default:
                printf("Secilen karede tas yok!\n");
                hamleBasarili = 0;
                break;
            
        }

        printf("1\t2\t3\t4\t5\t6\t7\t8");
        for(int i = 0; i < 8; i++){
        
            printf("\n\n\n");
            for(int j = 0; j < 8; j++){
                printf("%c\t", tahta[i][j]);
            }
            printf("%d", i + 1);
        }

        if(hamleBasarili == 1){
            

            FILE *dosya = fopen("notasyon.txt", "a");

            if(dosya != NULL) {
                char kaynakSutun = 'a' + (kaynakY - 1);
                char hedefSutun = 'a' + (hedefY - 1);

                fprintf(dosya, "Hamle %d: %c%d -> %c%d\n", hamle, kaynakSutun, kaynakX, hedefSutun, hedefX);
                fclose(dosya);
            } else {
                printf("Notasyon dosyasi acilamadi!\n");
            }

            hamle++;
        }

    }

    return 0;
}

int main(void){

    int option;

    printf("hos geldiniz... Bota karsi oynamak icin 1, iki kisi oynamak icin 2'ye basiniz: ");
    scanf("%d", &option);

    switch(option){
        case 1: botluOyun(); break;
        case 2: normalOyun(); break;
        default: break;
    }



}
