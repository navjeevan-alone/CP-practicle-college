#include <iostream>
#include <vector>

class Subsection
{
public:
    int subsectionNumber;

    Subsection(int num) : subsectionNumber(num) {}
};

class Section
{
public:
    int sectionNumber;
    std::vector<Subsection> subsections;

    Section(int num) : sectionNumber(num) {}

    void addSubsection(int num)
    {
        Subsection subsection(num);
        subsections.push_back(subsection);
    }
};

class Chapter
{
public:
    int chapterNumber;
    std::vector<Section> sections;

    Chapter(int num) : chapterNumber(num) {}

    void addSection(int num)
    {
        Section section(num);
        sections.push_back(section);
    }
};

class Book
{
public:
    std::vector<Chapter> chapters;

    void addChapter(int num)
    {
        Chapter chapter(num);
        chapters.push_back(chapter);
    }

    void printNodes()
    {
        for (const auto &chapter : chapters)
        {
            std::cout << "Chapter " << chapter.chapterNumber << std::endl;

            for (const auto &section : chapter.sections)
            {
                std::cout << "  Section " << section.sectionNumber << std::endl;

                for (const auto &subsection : section.subsections)
                {
                    std::cout << "    Subsection " << subsection.subsectionNumber << std::endl;
                }
            }
        }
    }
};

int main()
{
    Book myBook;

    // User input for chapters and sections
    int numChapters, numSections;
    std::cout << "Enter the number of chapters: ";
    std::cin >> numChapters;

    for (int i = 1; i <= numChapters; ++i)
    {
        myBook.addChapter(i);

        std::cout << "Enter the number of sections for Chapter " << i << ": ";
        std::cin >> numSections;

        for (int j = 1; j <= numSections; ++j)
        {
            myBook.chapters[i - 1].addSection(j);
            int numSubsections;
            std::cout << "Enter the number of subsections for Chapter " << i
                      << " and Section " << j << ": ";
            std::cin >> numSubsections;

            for (int k = 1; k <= numSubsections; ++k)
            {
                myBook.chapters[i - 1].sections[j - 1].addSubsection(k);
            }
        }
    }

    // Print the nodes
    myBook.printNodes();

    return 0;
}
