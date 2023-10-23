#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point createPoint(int x, int y) {
    struct Point point1 = {x, y};
    return point1;
}

void setPointStruct(struct Point p, int x, int y) {
    p.x = x;
    p.y = y;
}

void setPointStructPointer(struct Point *p, const int * const x, const int * const y) {
    p->x = *x;
    p->y = *y;
}

void setPointInt(struct Point p, int *x, int *y) {
    *x = p.x;
    *y = p.y;
}

void setPointIntPointer(const struct Point *p, int *x, int *y) {
    *x = p->x;
    *y = p->y;
}


int main() {
    struct Point p;

    // Assign values to the 'x' and 'y' fields
    p.x = 5;
    p.y = 10;

    int x = 0;
    int y = 0;

    setPointInt(p, &x, &y);

    printf("Coordinates x = %d, y = %d\n", x, y);

    struct Point p2 = createPoint(4,7);

    setPointIntPointer(&p2, &x, &y);

    // Print the values of 'x' and 'y'
    printf("Coordinates x = %d, y = %d\n", x, y);

    setPointStruct(p, 7, 9);

    printf("Coordinates p x = %d, y = %d\n", p.x, p.y);

    setPointStructPointer(&p2, &x, &y);

    printf("Coordinates p2 x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}