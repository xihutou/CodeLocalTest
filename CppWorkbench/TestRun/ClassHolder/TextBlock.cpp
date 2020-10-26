#include "TextBlock.h"

TextBlock::TextBlock(std::string initStr):m_text(initStr)
{

}


TextBlock::~TextBlock()
{

}


const char& TextBlock::operator[](std::size_t position) const
{
    return 'a';
}


char& TextBlock::operator[](std::size_t position)
{
    return m_text[0];
}