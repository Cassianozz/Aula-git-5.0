#include <stdio.h>
#include <locale.h>
void duracaoJogo(int horaInicio, int minutoInicio, int horaFim, int minutoFim, int *duracaoHoras, int *duracaoMinutos) {
    
    int inicioTotalMinutos = horaInicio * 60 + minutoInicio;
    int fimTotalMinutos = horaFim * 60 + minutoFim;
    
    
    if (fimTotalMinutos < inicioTotalMinutos) {
        fimTotalMinutos += 24 * 60;
}
    int diferencaMinutos = fimTotalMinutos - inicioTotalMinutos;
    
    
    *duracaoHoras = diferencaMinutos / 60;
    *duracaoMinutos = diferencaMinutos % 60;
}

		int main() {
		setlocale(LC_ALL, "portuguese");
    	int horaInicio, minutoInicio, horaFim, minutoFim;
    	int duracaoHoras, duracaoMinutos;

    
    	printf("bem vindo, Informe a hora de início do jogo (hora e minuto): ");
   	 	scanf("%d %d", &horaInicio, &minutoInicio);
    
    	printf("Agora, Informe a hora de término (hora e minuto): ");
    	scanf("%d %d", &horaFim, &minutoFim);

    	duracaoJogo(horaInicio, minutoInicio, horaFim, minutoFim, &duracaoHoras, &duracaoMinutos);
		fflush(stdin);
    	printf("Olá, sua duração do jogo foi de %d horas e %d minutos.\n", duracaoHoras, duracaoMinutos);

    	return 0;
}