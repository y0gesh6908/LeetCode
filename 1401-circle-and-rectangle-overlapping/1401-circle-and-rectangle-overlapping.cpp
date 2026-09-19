class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xclose= max(x1,min(x2,xCenter));
        int yclose= max(y1,min(y2,yCenter));

        int dx= xclose-xCenter;
        int dy= yclose-yCenter;

        return dx*dx+dy*dy<=radius*radius;
    }
};