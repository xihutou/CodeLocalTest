#ifndef __TEXTBLOCK_H__
#define __TEXTBLOCK_H__
#include <string>

class TextBlock
{
public:
    TextBlock(std::string initStr);
    ~TextBlock();
    //operators
    const char& operator[](std::size_t position) const;
    char& operator[](std::size_t position);
private:
    std::string m_text;
};
#endif/*__TEXTBLOCK_H__*/