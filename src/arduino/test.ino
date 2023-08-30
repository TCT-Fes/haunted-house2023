int Duration, limit;
float Distance;

const int TRIG = 10;
const int ECHO = 12;

const int BEAT = 300;
const int SPK  = 2;

void setup() {
    Serial.begin(9600);
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
}

void loop() {
    digitalWrite(TRIG, LOW);
    delayMicroseconds(10);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
    Duration = pulseIn(ECHO, HIGH);
    if (Duration > 0) {
        Distance = Duration / 2;
        Distance = Distance * 0.034;
        Serial.print(Distance);
        Serial.print(" cm ");

        if (Distance < 130) {
            while (limit <= 100) {
                int ra  = random(0, 2);
                int ra2 = random(60, 300);
                if (ra == 1) {
                    tone(SPK, 131, ra2);
                    delay(50);
                    tone(4, 300, ra2);
                }
                if (ra == 0) {
                    tone(SPK, 700, ra2);
                    delay(50);
                    tone(4, 600, ra2);
                }
                limit++;
            }
        }
        limit = 0;
    }
}
