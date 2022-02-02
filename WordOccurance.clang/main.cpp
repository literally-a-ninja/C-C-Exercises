#include <iostream>
#include <unordered_map>

std::string read_input(void)
{
    std::string str;

    char c;
    while (std::cin.get (c) && c != '\n')
        str += c;

    return str;
}

std::unordered_map<std::string, int> parser_lexemes(std::string str)
{
    std::unordered_map<std::string, int> map;
    std::string tok;

    for (char &it : str) {
        it = tolower (it);
        if (tok.length () && it == ' ') {
            try { map.at (tok)++; }
            catch (std::out_of_range _ignored) { map.emplace (tok, 1); }
            tok = "";
        } else if ('a' <= it && it <= 'z') {
            tok += it;
        }
    }
    try { map.at (tok)++; }
    catch (std::out_of_range _ignored) { map.emplace (tok, 1); }

    return map;
}

int main( )
{
    for (auto &token : parser_lexemes (read_input ())) {
        std::cout << std::get<0> (token) << ": " << std::get<1> (token) << std::endl;
    }
    return 0;
}
