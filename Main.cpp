#include "Headerfiles/HeaderIncludes.hpp"

std::string appendTextLog(std::string logMessage, std::string titleMessage)
{
    return logMessage.append(titleMessage);
}

auto printMessage(std::string messageLogger) -> std::string
{
    return appendTextLog(messageLogger, "\n");
}

auto GetHexCodeRunnable(int r, int g, int b) -> void
{
    std::cout << std::hex << r << std::hex << g << std::hex << b << std::endl;
}

auto setup() -> void
{

    std::string title = "Welcome Users!\n";

    if (Title(title) == title)
    {
        std::cout << appendTextLog(title, "Created by ZumbaCodez") << std::endl;

        srand(time(NULL));

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

            GetHexCodeRunnable(r, g, b);
            std::cout << printMessage("App Has Completely Ran");
        }
    }

    else
    {
        std::cout << printMessage("Failed to Find Code");
    }
}

auto main() -> int
{

    setup();
    system("pause > 0");
    return 0;
}
