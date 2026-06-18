class Solution {
public:
    double angleClock(int hour, int minutes) {
        float h=(hour%12)*30 + minutes*0.5;
        float m=minutes*6;
        double d=abs(h-m);
        return min(d,360-d);

    }
};