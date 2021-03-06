/* 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고, 세 가지를 세트로 주문하면 6500원이라고 하자. 
햄버거, 코라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고 나머지는 단품으로 계산하도록 한다.
예를 들어 햄버거 2, 콜라1, 감자튀김 3을 주문하면 계산은 세트 1, 햄버거 1, 감자튀김 2로 해야 한다*/

#include <stdio.h>

int main(void) {
	int burger, coke, fries;
	int min; // 최솟값 넣어두는 변수

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 개수? ");
	scanf("%d", &burger);
	printf("감자튀김 개수? ");
	scanf("%d", &fries);
	printf("콜라 개수? ");
	scanf("%d", &coke);

	min = burger;

	if (coke < burger) {
		min = coke;
		if (fries < coke) min = fries;
	}
	else {
		if (fries < burger) min = fries;
	}
	
	burger -= min;
	fries -= min;
	coke -= min;

	printf("\n상품명	단가	수량	금액\n");
	printf("세트	6500	%d	%d\n", min, min * 6500);

	if (burger != 0) {
		printf("햄버거	4000	%d	%d\n", burger, burger * 4000);
	}
	if (fries != 0) {
		printf("감자튀김  2000	%d	%d\n", fries, fries * 2000);
	}
	if (coke != 0) {
		printf("콜라	1500	%d	%d\n", coke, coke * 1500);
	}

	printf("--------------------------------\n");
	printf("합계			%d", min * 6500 + burger * 4000 + fries * 2000 + coke * 1500);
}
