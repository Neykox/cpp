#include "Span.hpp"

int main()
{
    Span sp = Span(150);
    sp.addNumber(6);
    try
    {
      sp.shortestSpan();
    }
    catch (const std::exception & e)
    {
        std::cout << e.what();
    }


    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortest = " << sp.shortestSpan() << std::endl;
    std::cout << "longest = " << sp.longestSpan() << std::endl;
    for (std::vector<int>::iterator it = sp.array.begin(); it != sp.array.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    std::vector<int>to_add (100, 77);
    sp.addNumber(to_add);
    for (std::vector<int>::iterator it = sp.array.begin(); it != sp.array.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';

    try
    {
      sp.addNumber(to_add);
    }
    catch (const std::exception & e)
    {
        std::cout << e.what();
    }

    return 0;
}
