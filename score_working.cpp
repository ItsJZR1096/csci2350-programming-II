// CSCI 2350 - Assignment 2 - Task B
// Name: Jordan Rose
// R number: TODO
#include <iostream>

int maxScore(const int* scores, int count);
bool updateScore(int* scores, int count, int index, int replacement);


void printScores(const int* scores, int count) {
    for (int i = 0; i < count; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << scores[i];
    }
    std::cout << '\n';
}


int main() {
    int count = 0;
    int* working = nullptr;
    int index;
    int replacement;
    // Write the Task B program here. The handout gives the input,
    // error messages, report, and cleanup requirements.
    // Remove these two unused-variable lines when you write the program.
    std::cin >> count;
    if(count <= 0 || count > 20)
    {
        std::cout << "Invalid score count" << '\n';
        return 0;
    }
    else
    {
        int* scores = new int[count];
        working = scores;
        for(int i = 0; i < count; i++)
        {
            std::cin >> working[i];
            if(working[i] < 0 || working[i] > 100)
            {
                std::cout << "Invalid score data" << '\n';
                return 0;
            }
        }
        std::cin >> index >> replacement;
        if(index < 0 || index > count || replacement < 0 || replacement > 100)
        {
            std::cout << "Invalid correction data" << '\n';
            return 0;
        }
        bool update = updateScore(working, count, index, replacement);
        int max = maxScore(working, count);
        if(update == true)
        {
            std::cout << "correction applied: true" << '\n';
        }
        else
        {
            std::cout << "correction applied: false" << '\n';
        }
        std::cout << "working scores: ";
        printScores(working, count);
        std::cout << "working max: " << max << '\n';
        delete[] working;
        working = nullptr;
        std::cout << "owner cleared: true" << '\n';
    }
    return 0;
}
