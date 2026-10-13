#ifndef BLINK_H
#define BLINK_H

class Blink {
    public:
        Blink(int pinNum);
        void row(void);

    private:
        int _pin;
        int _timeBetweenOnOffMillis = 1000;
    };


#endif