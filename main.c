#include <stdio.h>

#include "vec3.h"
#include "color.h"
#include "ray.h"

int main() {
    double aspect_ratio = 16.0 / 9.0;
    int image_width = 256;
    // Calculate the image height
    int image_height = (int) image_width / aspect_ratio;
    image_height = (image_height < 1) ? 1 : image_height;

    double viewport_height = 2.0;
    double viewport_width = viewport_height * (double)(image_width / image_height);

    // Render
    printf("P3\n%d %d\n255\n", image_width, image_height);

    for (int j = 0; j < image_height; j++) {
        for (int i = 0; i < image_width; i++) {
            color pixel_color = { (double)i/(image_width - 1), (double)j/(image_height - 1), 0.0 };
            write_color(pixel_color);
        }
    }

    return 0;
}
