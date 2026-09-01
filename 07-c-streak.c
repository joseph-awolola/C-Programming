#include <stdio.h>


int print(const char* word);

int main()
{
    // strings in c
    const char* x = "Joseph is the best human in the whole wide world \
    You all can't believe how lucky you are to exist in the same time period as him \
    So don't you forget.";
    print("awesomemay");
    return 0;

    char c;
    c = "Joseph"[1];

    
}

int print(const char* word)
{
    puts(word);
}