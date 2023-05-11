#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura, imc;
    
    printf("Entre com o seu peso em quilogramas(valor decimal)");
    scanf("%f", &peso);
    printf("Entre com o sua altura em metros(valor decimal)");
    scanf("%f", &altura);
    
    imc= peso / (altura * altura);
    
    if(imc < 17){
        printf("IMC: %.2f\nVoce esta muito abaixo do peso ideal!", imc);
    }
    else if(imc >= 17 && imc < 18.5){
        printf("IMC: %.2f\nVoce esta abaixo do peso ideal!", imc);
    }
    else if(imc >= 18.5 && imc < 25){
        printf("IMC: %.2f\nParabens! Voce esta em seu peso normal!", imc);
    }
    else if(imc >= 25 && imc < 30){
        printf("IMC: %.2f\nAtencao, voce esta acima de seu peso (sobrepeso)!", imc);
    }
    else if(imc >= 30 && imc < 35){
        printf("IMC: %.2f\nCuidado! Obesidade grau I!", imc);
    }
    else if(imc >= 35 && imc < 40){
        printf("IMC: %.2f\nCuidado! Obesidade grau II!", imc);
    }
    else if(imc >= 40){
        printf("IMC: %.2f\nCuidado! Obesidade grau III!", imc);
    }
    
    return 0;
}
