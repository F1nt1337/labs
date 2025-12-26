#include <stdio.h>

struct Point {
    double x;
    double y;
};

struct Point createPoint(double x, double y) {
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}

void printPoint(struct Point p) {
    printf("(%.2f, %.2f)\n", p.x, p.y);
}

int main() {
    double x1, y1, x2, y2;

    printf("Enter the coordinates of the first point (x y): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x y): ");
    scanf("%lf %lf", &x2, &y2);

    struct Point p1 = createPoint(x1, y1);
    struct Point p2 = createPoint(x2, y2);

    printf("First point: ");
    printPoint(p1);

    printf("Second point: ");
    printPoint(p2);

    if (p1.y == p2.y) {
        printf("A line parallel to the X-axis\n");
    } else {
        printf("The line is not parallel to the X-axis\n");
    }

    if (p1.x == p2.x) {
        printf("A line parallel to the Y-axis\n");
    } else {
        printf("The line is not parallel to the Y-axis\n");
    }

    return 0;
}
