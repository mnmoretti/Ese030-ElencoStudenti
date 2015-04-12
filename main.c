#include <stdio.h> 
 #include <stdlib.h> 
 #define N 3 
 #define MAX_STRLEN 30 
 
 
 struct s_studente { 
 char nome[MAX_STRLEN]; 
 char cognome[MAX_STRLEN]; 
 int eta; 
 char classe[MAX_STRLEN]; 
 }; 
 
 struct s_studente alunno[N]; 
 
 int main(int argc, char** argv) { 
     int i; 
      
     for(i=1;i=N;i++) { 
         printf("Inserisci il nome dello studente numero %d: ", i); 
         scanf("%s", &(alunno[i-1].nome)); 
         printf("Inserisci il cognome dello studente numero %d: ", i); 
         scanf("%s", &(alunno[i-1].cognome)); 
         printf("Inserisci l'eta' dello studente numero %d: ", i); 
         scanf("%d", &(alunno[i-1].eta)); 
         printf("Inserisci la classe dello studente numero %d: ", i); 
         scanf("%s", &(alunno[i-1].classe)); 
     } 
     
     for(i=0;i<N;i++) { 
         printf("\n%s, %s, %d, %s", studente[i].nome, studente[i].cognome, studente[i].eta, studente[i].classe); 
     } 
     
     return (EXIT_SUCCESS); 
 } 
 

