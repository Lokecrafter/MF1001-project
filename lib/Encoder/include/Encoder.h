#ifndef ENCODER_H
#define ENCODER_H

class Encoder{
    private:
        int pinA;
        int pinB;
        int lastB;
        int counter;
        int countsPerRev;
    public:
        Encoder(int pinA, int pinB, int countsPerRevolution);
        void begin();
        float getRevolutions();
        float getAngle();
        float getAngularVelocity();
        void update();
        
};
#endif
