#include<stdio.h>

float FUN(float figure) {
	float y;
	if (figure > 1)
		y = figure * figure + 1.0;
	else if (-1 <= figure && figure <= 1)
		y = figure * figure;
	else if(figure < -1)
		y = figure * figure - 1.0;

	return y;
}

void main() {
	float figure,y;
	printf("ÇëÊäÈëx =  ");
	scanf_s("%f", &figure);
	y = FUN(figure);
	printf("µÃ³öy = %.2f", y);
	
}