#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    for (std::vector<int>::iterator it = sp.array.begin(); it != sp.array.end(); ++it)
      std::cout << *it << ' ';
    std::cout << '\n';

    std::vector<int>to_add (100, 77);
    sp.addNumber(to_add);
    for (std::vector<int>::iterator it = sp.array.begin(); it != sp.array.end(); ++it)
      std::cout << *it << ' ';
    std::cout << '\n';
    return 0;
}
