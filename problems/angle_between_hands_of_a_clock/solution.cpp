class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minAngle = minutes*6.0;
        double hourAngle = ((hour % 12)*30.0) + (0.5*minutes);
        double diff = abs(minAngle - hourAngle);
        return min(diff, 360 - diff);
    }
};