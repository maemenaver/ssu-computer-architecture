#include <stdio.h>    // 표준 입출력 헤더 불러오기
#include <wiringPi.h> // wiringPi 라이브러리 헤더 불러오기

#define LED1 23 // GPIO 23
#define LED2 24 // GPIO 24
#define SW 25   // GPIO 25

int main(void)
{
    if (wiringPiSetupGpio() == -1) // wiringPi 초기화
    {
        return 1;
    }

    pinMode(LED1, OUTPUT); // GPIO 23을 출력 핀으로 설정
    pinMode(LED2, OUTPUT); // GPIO 24를 출력 핀으로 설정

    pinMode(SW, INPUT); // GPIO 25를 입력 핀으로 설정

    while (1)
    {                          // 무한 반복문
        digitalWrite(LED1, 0); // LED1 끄기
        digitalWrite(LED2, 0); // LED2 끄기

        if (digitalRead(SW) == 1)
        {
            digitalWrite(LED1, 1); // LED1 켜기
            digitalWrite(LED2, 1); // LED2 켜기
            delay(1000);           // 1000ms, 1초 시간 지연
        }
    }
    return 0;
}