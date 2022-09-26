int count;

void setup() {
    // put your setup code here, to run once:
    pinMode(7, OUTPUT);

}

void loop() {
    // put your main code here, to run repeatedly:
  	if (count==0){
        digitalWrite(7, 0);
  	    delay(1000);
        count++;
    }else if (count<12 && count%2==1){
        digitalWrite(7, 1);
        count++;
        delay(100);
    }else if (count<12 && count%2!=1){
        digitalWrite(7, 0);
        count++;
        delay(100);
    }else if (count==12){
        while (count==12){
            ;
        }
    }
}
