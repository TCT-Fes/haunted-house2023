int Trig = 8;
int Echo = 9;
int LED = 13;
int Duration;
float Distance;

void setup() {
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
    digitalWrite(echoPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = (uint16_t)(duration / 2) * 0.034;

    Serial.print(Duration);
    Serial.print(" ditance ");
    Serial.print(Distance);
    Serial.println(" cm");
  }
  if (Distance < 100.0) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  
  if (detection_cnt >= 5) {
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}
}