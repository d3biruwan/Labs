#include<stdio.h>
#include<math.h>


double determinant(double a, double b, double c) {
	return b * b - 4 * a * c;
}

void solution(double a, double b, double c) {
	double det = determinant(a, b, c);
	if (det < 0) {
		double x_real = -b / (2 * a);
		double x_im = fabs(sqrt(fabs(det)) / (2 * a));
		printf("x1=%lf+%lfi\nx2=%lf-%lfi", x_real, x_im, x_real, x_im);
	}
	else {
		double x1 = (-b + sqrt(det)) / (2 * a);
		double x2 = (-b - sqrt(det)) / (2 * a);
		printf("x1=%lf\nx2=%lf", x1, x2);
	}
}

int main(void) {
	double a, b, c;
	printf("enter a,b,c: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	solution(a, b, c);
	return 0;
}