 #include <stdio.h>
 int main (){
    
    struct horario{
        
        int horas;
        int minutos;
        int segundos;
    };
    
    struct horario agora; //estrutura, tipo da estrutura, declaração de nome da estrutura //
    
    agora.horas = 15 ;
    agora. minutos = 10;
    agora.segundos = 5; 
    
    
    
    struct horario depois;
    
    depois.horas = agora.horas + 10;
    depois.minutos= agora.minutos + 2;
    depois.segundos= agora.segundos + 32;
    
    
    
    
    printf("%d / %d / %d",agora.horas,agora.minutos,agora.segundos);
    
    return 0;
 }
