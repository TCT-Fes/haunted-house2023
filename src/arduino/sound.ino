const uint8_t trig_pin   = 2;
const uint8_t echo_pin   = 3;
const uint8_t buzzer_pin = 4;
unsigned long zikan;
uint8_t kyori;
uint8_t hani = 30;
uint8_t cnt;
long randomtone;
long times = 0;


void setup() {
    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    pinMode(buzzer_pin, OUTPUT);
    randomSeed(100);
}

void loop() {
    digitalWrite(trig_pin, LOW);
    digitalWrite(echo_pin, LOW);
    digitalWrite(buzzer_pin, LOW);
    delayMicroseconds(2);

    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);

    zikan = pulseIn(echo_pin, HIGH);
    kyori = (uint16_t)(zikan / 2) * 0.034;
    delay(250);

    if (kyori <= hani) {
        cnt++;
    } else {
        cnt = 0;
    }

    if (cnt >= 3) {
        while (times < 1000) {
            randomtone = random(250);
            tone(buzzer_pin, randomtone + 300);
            delayMicroseconds(5000);
            times++;
        }
        times = 0;
        cnt = 0;
        } else{
          tone(buzzer_pin,0);
        }
}