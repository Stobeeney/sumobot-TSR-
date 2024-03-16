#include <ATX2.h>

void setup()
{
    OK(); // Wait for OK button
}

void loop()
{
    int ldis = analogRead(A0);
    int rdis = analogRead(A1);
    int mdis = analogRead(A2);
    int rightIR = analogRead(A3);
    int leftIR = analogRead(A4);
    motor(12, 100);
    motor(34, 100);

    if (rightIR < 750)
    {
        motor(12, -100);
        motor(34, -100);
        delay(200);
        motor(12, 100);
        motor(34, -100);
        delay(150);
    }
    if (leftIR < 750)
    {
        motor(12, -100);
        motor(34, -100);
        delay(200);
        motor(12, 100);
        motor(34, -100);
        delay(150);
    }
    if (mdis < 250)
    {
        motor(12, 100);
        motor(34, 100);
        delay(100);
    }
    if (rdis < 250)
    {
        motor(12, -100);
        motor(34, 100);
        delay(100);
    }
    if (ldis < 250)
    {
        motor(12, 100);
        motor(34, -100);
        delay(100);
    }
}
