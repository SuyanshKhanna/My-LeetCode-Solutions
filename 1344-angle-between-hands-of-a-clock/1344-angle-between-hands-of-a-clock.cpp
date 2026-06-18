class Solution {
public:
    double angleClock(int hour, int minutes) {
        /*hourAngle = (hour % 12) * 30 + minutes * 0.5;
        minuteAngle = minutes * 6;
        angle = abs(hourAngle - minuteAngle);
        return min(angle, 360 - angle);*/
        double hourangle = (hour%12) * 30 + (static_cast<double>(minutes))*0.5;
        double minuteangle = static_cast<double>(minutes) * 6;
        double angle = abs(hourangle - minuteangle);
        return min(angle, 360-angle);
    }
};