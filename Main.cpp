#include "includes.cpp"

std::map<std::string, float> NumbersGenerated(float r, float g, float b)
{
    std::map<std::string, float> colorsCodedX;
    colorsCodedX.insert({"B: ", b});
    colorsCodedX.insert({"G: ", g});
    colorsCodedX.insert({"R: ", r});
    return colorsCodedX;
}

auto main() -> int
{

    // Gets Length of Elements in Maps Data Structure

    float r = rand() % 254 + 1;
    float g = rand() % 254 + 1;
    float b = rand() % 254 + 1;

    std::map<std::string, float>
        colorsCoded = NumbersGenerated((int)r, (int)g, (int)b);

    for (int i = 0; i < 1; i++)
    {
        for (auto color : colorsCoded)
        {
            std::cout << color.first << color.second << std::endl;
        }
    }

    system("pause > 0");
    return 0;
}
