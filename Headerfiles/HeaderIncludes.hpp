#include "../includes.cpp"

std::map<std::string, float> NumbersGenerated(float r, float g, float b)
{
    std::map<std::string, float> colorsCodedX;
    colorsCodedX.insert({"B: ", b});
    colorsCodedX.insert({"G: ", g});
    colorsCodedX.insert({"R: ", r});
    return colorsCodedX;
}

std::string Title(std::string str)
{
    return str.substr(0, str.size() + 1);
}