/* 세준이는 기말고사를 망쳤다.세준이는 점수를 조작해서 집에 가져가기로 했다.
일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다.그리고 나서 모든 점수를 점수 / M * 100으로 고쳤다.
예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50 / 70 * 100이 되어 71.43점이 된다.
세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오. */

// 처음 풀이
#include <stdio.h>
#include <stdlib.h>

int main() {
	float N, M;
	float ave = 0;
	float *score;
	
	scanf("%f", &N);

	score = (float *)malloc(sizeof(float) * N);

	M = score[0];

	for (int i = 0; i < N; i++) {
		scanf("%f", &score[i]);
		if (score[i] > M) {
			M = score[i];
		}
	}

	for (int i = 0; i < N; i++) {
		score[i] = score[i] / M * 100;
		ave += score[i];
	}

	printf("%.2f", ave / N);


}

// 수정 후
#include <stdio.h>

int main() {
	int N; 
	double M;

	scanf("%d", &N);

	double sum = 0.0;
	double score[1000] = { 0, };

	M = score[0];

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] > M) M = score[i];
	}

	for (int i = 0; i < N; i++) {
		sum = sum + score[i] / M * 100;
	}

	printf("%.2lf", sum / N);


}
