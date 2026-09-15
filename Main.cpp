#include "Namespaces/FileNamespace.cpp"

auto GetHexCodeRunnable(int r, int g, int b) -> void
{
    std::cout << std::hex << r << std::hex << g << std::hex << b << std::endl;
}

namespace Default
{

    void SetDefault()
    {
        std::cout << FileSources::printMessage("Default Has Ran!") << std::endl;
    }
}

namespace TitleInfo
{
    auto get_title() -> bool
    {

        std::ofstream files("titleType.txt");

        std::string output;

        if (!std::filesystem::exists("titleType.txt"))
        {

            std::cerr << "Error Finding File to be Opened";
            return bool(false);
        }

        else
        {

            files.open("titleType.txt", std::fstream::out);
            files.close();
        }

        output = "TitleApp | v1.0";
        std::cout << output << "\n";

        std::cin.ignore(2 * 1000, '\n');
        std::cin.clear();

        return true;
    }
}

auto setup() -> void
{

    TitleInfo::get_title();
    std::string title = "Welcome Users!\n";

    std::ofstream fileName("main.color.txt");

    auto option = getchar();
    switch (option)
    {
    case 'Y':

        if (Title(title) == title)
        {
            std::cout << FileSources::appendTextLog(title, "Created by ZumbaCodez") << std::endl;

            srand(time(NULL));

            // Gets Length of Elements in Maps Data Structure
            auto r = rand() % 254 + 1;
            auto g = rand() % 254 + 1;
            auto b = rand() % 254 + 1;

            std::map<std::string, float>
                colorsCoded = NumbersGenerated((int)r, (int)g, (int)b);

            for (int i = 0; i < 1; i++)
            {
                for (auto color : colorsCoded)
                {
                    std::cout << color.first << color.second << std::endl;
                }

                if (fileName.is_open())
                {

                    FileSources::isOpenedFile();
                    GetHexCodeRunnable(r, g, b);
                    std::cout << FileSources::printMessage("App Has Completely Ran");
                }
            }
        }

        else
        {
            std::cout << FileSources::printMessage("Failed to Find Code");
        }

        break;

    case 'N':
        Default::SetDefault();
        break;

    default:
        Default::SetDefault();
        break;
    }
}

auto main() -> int
{

    setup();
    system("pause > 0");
    return 0;
}
