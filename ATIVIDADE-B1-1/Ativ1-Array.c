#include <stdio.h>
void main()
{
   int notaMin, notaMax, x, notaAtual, notaFinal;
   int notaRl, notaGe, notaLi, notaAg, notaJavaS;
    
   int notaRacLog[4] = {10, 5, 7, 3};
   int notaGerenc[5] = {5, 3, 8, 9, 7}; 
   int notaIng[4] = {7, 5, 5, 8};
   int notaAgil[6] = {3, 4, 7, 9, 8, 10};
   int notaJs[5] = {8, 4, 5, 10, 7}; 

// Raciocínio Lógico    
    notaMin = notaRacLog[0];
    notaMax = notaRacLog[0];
   
    for(x = 0; x < 4; x++)
    {
        if(notaRacLog[x] < notaMin)
        {
            notaMin = notaRacLog[x];
        }
        
        if(notaRacLog[x] > notaMax)
        {
            notaMax = notaRacLog[x];
        }
        notaRl = notaRl + notaRacLog[x];
    }
    
    notaRl = notaRl - notaMin - notaMax;
    
// Gerenciameto 

    notaMin = notaGerenc[0];
    notaMax = notaGerenc[0];
   
    for(x = 0; x < 5; x++)
    {
        if(notaGerenc[x] < notaMin)
        {
            notaMin = notaGerenc[x];
        }
        
        if(notaGerenc[x] > notaMax)
        {
            notaMax = notaGerenc[x];
        }
        notaGe = notaGe + notaGerenc[x];
    } 
    
    notaGe = notaGe - notaMin - notaMax;
    
// Língua Inglesa

    notaMin = notaIng[0];
    notaMax = notaIng[0];
   
    for(x = 0; x < 4; x++)
    {
        if(notaIng[x] < notaMin)
        {
            notaMin = notaIng[x];
        }
        
        if(notaIng[x] > notaMax)
        {
            notaMax = notaIng[x];
        }
        notaLi = notaLi + notaIng[x];
    } 
    
    notaLi = notaLi - notaMin - notaMax;

// metodologia Agil

    notaMin = notaAgil[0];
    notaMax = notaAgil[0];
   
    for(x = 0; x < 6; x++)
    {
        if(notaAgil[x] < notaMin)
        {
            notaMin = notaAgil[x];
        }
        
        if(notaAgil[x] > notaMax)
        {
            notaMax = notaAgil[x];
        }
        notaAg = notaAg + notaAgil[x];
    } 
    
    notaAg = notaAg - notaMin - notaMax;

// JavaScript
    
    notaMin = notaJs[0];
    notaMax = notaJs[0];
   
    for(x = 0; x < 5; x++)
    {
        if(notaJs[x] < notaMin)
        {
            notaMin = notaJs[x];
        }
        
        if(notaJs[x] > notaMax)
        {
            notaMax = notaJs[x];
        }
        notaJavaS = notaJavaS + notaJs[x];
    }
    
    notaJavaS = notaJavaS - notaMin - notaMax;

// Nota Final
    
    notaFinal = notaRl + notaGe + notaLi + notaAg + notaJavaS;
    printf("Nota em Raciocínio Lógico do candidato: %i \n", notaRl);
    printf("Nota em Gerenciameto do candidato: %i \n", notaGe);
    printf("Nota em Língua Inglesa do candidato: %i \n", notaLi);
    printf("Nota em metodologia ágil do candidato: %i \n", notaAg);
    printf("Nota em JavaScript do candidato: %i \n", notaJavaS);
    printf("Nota final do candidato: %i", notaFinal);
}