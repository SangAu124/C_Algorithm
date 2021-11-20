#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    char data[20][100];
    for (int i = 1; i <= 20; i++) {
        int temp;
        cin >> temp;
        printf(data[i - 1], "update ksemmsclass%d set grade = %d where class = %d;", input, temp, i);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("\n%s", data[i]);
    }
}