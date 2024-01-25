#include <stdio.h>

float notaAtv(int totalAtv, int atvRealizadas){
    float nota = (10/totalAtv) * atvRealizadas;
    
    return nota;
}

float notaBim(float pratica, float teorica, float atv){
    float bim = (pratica + teorica + atv)/3;
    
    return bim;
}

float mediaFinal(float bim1, float bim2, float bim3, float bim4){
    float mf = (bim1*2+bim2*3+bim3*2+bim4*3)/10;
    
    return mf;
}

void lerDados(int bim, float * pratica, float * teorica, int * totalAtv, int * atvRealizadas) {
    printf("--- %dº bimestre ---\n", bim);
    printf("Digite sua nota da Prova Prática: \n");
    scanf("%f", pratica);
    printf("Digite sua nota da Prova Teórica: \n");
    scanf("%f", teorica);
    printf("Digite quantas atividades foram passadas, e, separando por enter, quantas você fez:\n");
    scanf("%d%d", totalAtv, atvRealizadas);
}

int main(){
    int atp, atf;
    float pp, pt, bim1, bim2, bim3, bim4, media;
    lerDados(1, &pp, &pt, &atp, &atf);
    
    bim1 = notaBim(pp, pt, notaAtv(atp, atf));
    
    lerDados(2, &pp, &pt, &atp, &atf);
    bim2 = notaBim(pp, pt, notaAtv(atp, atf));

    lerDados(3, &pp, &pt, &atp, &atf);
    bim3 = notaBim(pp, pt, notaAtv(atp, atf));

    lerDados(4, &pp, &pt, &atp, &atf);
    bim4 = notaBim(pp, pt, notaAtv(atp, atf));
    
    media = mediaFinal(bim1, bim2, bim3, bim4);
    
    printf("Sua média final é %.2f\n", media);
    
    return 0;
}
