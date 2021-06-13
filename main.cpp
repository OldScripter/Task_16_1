#include <iostream>
#include <cstdio>

float const EPSILON = 0.01f;

void PrintSpeed(char* buffer, float speed)
{
    std::sprintf(buffer, "Speed: %0.1f km/h\n", speed);
    std::cout << buffer;
}

bool FloatIsGreater(float a, float b)
{
    return ((a - b) > EPSILON);
}

int main() {

    float speed = 0.0f;
    float const MIN_SPEED = 0.0f;
    float const MAX_SPEED = 150.0f;

    char buffer[100];
    float speed_delta;
    do
    {
        std::cout << "Set speed delta: \n";
        std::cin >> speed_delta;

        speed += speed_delta;
        if (FloatIsGreater(speed, MAX_SPEED)) speed = MAX_SPEED;
        if (!FloatIsGreater(speed, MIN_SPEED)) speed = MIN_SPEED;

        PrintSpeed(buffer, speed);

    } while (FloatIsGreater(speed, MIN_SPEED));

    return 0;
}
