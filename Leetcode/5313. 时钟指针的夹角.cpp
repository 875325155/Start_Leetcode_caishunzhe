class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour%=12;
        double s1=hour*30+30*minutes/60;//ʱ��
        double s2=360*minutes/60;//����
        double s3=abs(s1-s2);
        if(s3>180)
            return 360-s3;
        return s3;
    }
};
