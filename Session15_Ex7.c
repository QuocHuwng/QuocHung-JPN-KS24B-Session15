#include <stdio.h>

int main() {
	char text[]="abc1234@gmail.com";
	int size= strlen(text);
	int count, numbers, dacbiet;
	for(int i=0; i<size; i++){
		if(isalpha(text[i])) {
			count++;
		}
		else if(isdigit(text[i])) {
			numbers++;
		}
		else if(text[i] != ' ' && text[i] != '\n') {
			dacbiet++;
		}
	}
	printf("So ky tu la chu cai la %d \n", count);
	printf("So ky tu la chu so la %d \n", numbers);
	printf("So ky tu dac biet la %d \n", dacbiet);
	
	return 0;

}
