int led = 9;
int brightness = 0;
int faeAmount = 5;

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    analogWrite(led, brightness);

    brightness = brightness + faeAmount;

    if (brightness <= 0 || brightness >= 255){
        faeAmount = -faeAmount;
    }

    delay(30);
}
