#include <stdio.h>
#include <stdlib.h>

// Definisci le costanti
#define MAX_STRLEN 30
#define MAX_FNAMELEN 255

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
    };

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    int i;
    studente k;
    FILE *puntaFile;
    char fileName[MAX_FNAMELEN+1];
    
    // Codice per la richiesta del nome del file
    printf("Inserire il nome del file:\n ");
    scanf("%s", fileName);
    
    // Codice per l'apertura del file, la lettura e la stampa a schermo
     puntaFile = fopen(fileName, "r");//se sostituisco fileName con il nome del file "elenco.csv" 
     if(puntaFile == NULL)            //si verifica il caso opposto, tutti i nomi inseriti sono coretti e leggo il file
      
    {
        fprintf(stderr, "Il nome del file %s non è coretto\n", fileName);
        exit(1);
    }
     
    //Intestazione del file.csv dove leggo 
    fscanf(puntaFile, "%[^;];%[^;];%[^;];%[^;\n]\n", k.nome, k.cognome, k.nome, k.classe);
     
    i=0;
    fscanf(puntaFile, "%[^;];%[^;];%d;%[^;\n]\n", k.nome, k.cognome, &(k.eta), k.classe);
    while(!feof(puntaFile)) 
    
    {
        i++;
        printf("Studente %d\nNome: %s\nCognome: %s\nEta': %d\nClasse: %s\n\n", i, k.nome, k.cognome, k.eta, k.classe);
        fscanf(puntaFile, "%[^;];%[^;];%d;%[^;\n]\n", k.nome, k.cognome, &(k.eta), k.classe);
    }
    
    //chiudo il file
    fclose(puntaFile);
    
    return (EXIT_SUCCESS);
}

