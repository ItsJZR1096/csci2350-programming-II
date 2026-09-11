#include <iomanip>
#include <iostream>

int main() {
    int assetCount = 0;

    std::cin >> assetCount;
    // TODO 1: Keep reading until assetCount is in the range 1-5.
    // Print exactly: Invalid asset count
    while(assetCount < 1 || assetCount > 5)
    {
        std::cout << "Invaild asset count" << "\n";
        std::cin >> assetCount;
    }

    int totalMemory = 0;
    // TODO 2: Use a counted loop to process exactly assetCount valid assets.
    // For each asset:
    // - read an integer size;
    // - keep reading while the size is outside 1-500;
    // - print exactly "Invalid asset size" for each rejected value;
    // - add only a valid size to totalMemory.
    // An invalid size must not consume an asset slot.
    int assetSize = 0;
    for(int i = 0; i < assetCount; i++)
    {
        std::cin >> assetSize;
        while(assetSize < 1 || assetSize > 500)
        {
            std::cout << "Invalid asset size" << "\n";
            std::cin >> assetSize;
        }
        totalMemory = totalMemory + assetSize;
    }
    // TODO 3: Calculate a decimal average. Convert before division.
    double averageAssetSize = 0.0;
    double totalMemories = (double)totalMemory;
    averageAssetSize = totalMemories/assetCount;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Asset count: " << assetCount << '\n';
    std::cout << "Total memory: " << totalMemory << " MB\n";
    std::cout << "Average asset size: " << averageAssetSize << " MB\n";

    return 0;
}
