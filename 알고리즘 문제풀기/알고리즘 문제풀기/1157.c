#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char input[1000000]; // 입력값

	int cnt[26] = { 0, }; // 알파벳 카운트

	scanf("%s", input);

	// a = 97 A = 65
	for (int i = 0; i < strlen(input); i++) {
		if (65 <= input[i] && input[i] <= 90) {
			cnt[input[i] - 65]++;
		}
		else if (97 <= input[i] && input[i] <= 122) {
			cnt[input[i] - 97]++;
		}
	}

	int maxidx = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > cnt[maxidx]) {
			maxidx = i;
		}
	}

	int maxCnt = 0; // 5 2 5 0 1
	for (int i = 0; i < 26; i++) {
		if (cnt[maxidx] == cnt[i]) {
			maxCnt++;
		}
	}

	if (maxCnt == 1) {
		printf("%c", maxidx + 65);
	} else printf("?");
	

	return 0;
}
