#include <iostream>
#include <string>

int main() {
    std::string text =
    "kichann\n"
    "kkichann\n"
    "kichana\n"
    "kichan11 ckcisdchn\n"
    "zzzzzzz kichank\n"
    "kichan\n"
    "zzzzzzz kichan\n"
    "kichannn\n"
    "kikikichan";

    std::string toFind = "kichan";
    size_t count = 0;
    size_t pos = text.find(toFind);

     std::cout << "pos : " << pos << std::endl;
    while (pos != std::string::npos)
    {
        count++;
        pos = text.find(toFind, pos + toFind.size());
        printf("pos : %lu\n", pos);
    }

    std::cout << "The string '" << toFind << "' appears " << count << " times." << std::endl;

    return 0;
}
