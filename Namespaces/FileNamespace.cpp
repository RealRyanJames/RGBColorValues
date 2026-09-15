#include "../Headerfiles/HeaderIncludes.hpp"
#include <fstream>
#include <filesystem>
namespace FileSources
{

    std::string appendTextLog(std::string logMessage, std::string titleMessage)
    {
        return logMessage.append(titleMessage);
    }

    auto printMessage(std::string messageLogger) -> std::string
    {
        return appendTextLog(messageLogger, "\n");
    }

    static void isOpenedFile()
    {
        std::ofstream file("main.color.txt");
        if (std::filesystem::exists("main.color.txt"))
        {
            auto r = rand() % 254 + 1;
            auto g = rand() % 254 + 1;
            auto b = rand() % 254 + 1;

            char bufferR[100 / 2];
            char bufferG[100 / 2];
            char bufferB[100 / 2];
            std::string strColorR;
            std::string strColorG;
            std::string strColorB;

            sprintf(bufferR, "%d", r);
            sprintf(bufferG, "%d", g);
            sprintf(bufferB, "%d", b);

            std::cout << printMessage("Created Already") << std::endl;
            file << "R: " << bufferR;
            file << ", G: " << bufferG;
            file << ", B: " << bufferB;
            file.open("main.color.txt", std::ios::app);
        }
        else
        {
            if (file.is_open() || !file.good())
            {
                std::cout << printMessage("Just Been Created") << std::endl;
                file.close();
            }
        }
    }
}