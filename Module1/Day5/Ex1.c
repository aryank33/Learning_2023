#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void VolumeAndSurfaceArea(struct Box* box, double* volume, double* surfaceArea) {
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    double volume, surfaceArea;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%lf", &(box.length));
    printf("Width: ");
    scanf("%lf", &(box.width));
    printf("Height: ");
    scanf("%lf", &(box.height));

    VolumeAndSurfaceArea(&box, &volume, &surfaceArea);

    printf("Volume: %.2lf\n", volume);
    printf("Total Surface Area: %.2lf\n", surfaceArea);

    return 0;
}
