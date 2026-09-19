class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1,
                      int x2, int y2) {
        int closestX;
        int closestY;

        if (xCenter < x1) {
            closestX = x1;
        } else if (xCenter > x2) {
            closestX = x2;
        } else {
            closestX = xCenter;
        }

        if (yCenter < y1) {
            closestY = y1;
        } else if (yCenter > y2) {
            closestY = y2;
        } else {
            closestY = yCenter;
        }

        int distance = sqrt(pow(xCenter - closestX, 2) + pow(yCenter - closestY, 2));

        if(distance<=radius) return true;

        return false;

    }
};