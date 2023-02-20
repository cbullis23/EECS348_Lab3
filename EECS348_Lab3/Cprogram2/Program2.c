#include <stdio.h>

int combo(int score, int td, int fg, int sf) {
	int f = 0;
	for (td = 0; td <= score/8; td++){
		for (fg = 0; fg <= (score-*td*8)/3; fg++){
			for (sf = 0; sf <= (score-*td*8-*fg*3)/2; sf++){
				if (*td*8+*fg*3+*sf*2==score){
					f = 1;
					break;
				}
			}
			if (f) break;
		}
		if (f) break;
	}
	return f;
}

void display(int td, int fg, int sf){
	printf("%d TD + 2pt, %d TD + FG, %d TD, %d FG, %d SF\n", td, td, td, fg, sf);
}
int main(){
	int score, td, fg, sf;
	while(1){
		printf("Enter 0 or 1 to STOP ");
		printf("Enter the NFL Score: ");
		scanf("%d", score);
		if (score <= 1) break;
		if (combo(score, td, fg, sf)){
			display(td, fg, sf);
		}
	}
	return 0;
}
