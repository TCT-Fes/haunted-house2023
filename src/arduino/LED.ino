#include <Arduino.h>  // Arduino IDEを使う場合はコメントアウトする

const uint8_t echoPin   = 9;
const uint8_t trigPin   = 8;
const uint8_t LEDPin = 13;

unsigned long duration;  // 超音波の往復時間(μ秒)
uint16_t distance;       // 対象までの距離
uint8_t detection_cnt;   // 検出回数用のカウンタ

void setup() {
    pinMode(trigPin, OUTPUT);    // TRIGERピンを OUTPUTに設定
    pinMode(echoPin, INPUT);     // ECHOピンを INPUT に設定
    pinMode(LEDPin, OUTPUT);  // もちろん LEDPin は OUTPUT

    Serial.begin(9600);                    // 距離を表示するためにシリアルモニタを使う
    Serial.println("防犯システム開始: ");  // 一度だけ表示
}
void loop() {
    // ピンの初期化
    digitalWrite(trigPin, LOW);
    digitalWrite(echoPin, LOW);
    delayMicroseconds(2);

    // 10μ秒間 TRIGERピン を HIGH にして超音波バーストの放出
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // ECHOピン が HIGH になってる時間を duration にセット
    duration = pulseIn(echoPin, HIGH);
    // 距離 = 時間 × 速さ
    distance = (uint16_t)(duration / 2) * 0.034;  // 音速 340m/秒 = 0.034cm/μ秒


    // 距離の表示
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");


    if (distance <= 100) {  // 距離が 1m 以下なら
        detection_cnt++;    // 検出用のカウンタに 1 足す
    } else {
        detection_cnt = 0;  // それ以外は 0 にセット
    }

    if (detection_cnt >= 10) {
        analogWrite(LEDPin, 255);
        delay(5000);
    } else {
        analogWrite(LEDPin,LOW);

    }
}
