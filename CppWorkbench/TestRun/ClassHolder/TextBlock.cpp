#include "TextBlock.h"

TextBlock::TextBlock(std::string initStr):m_strText(initStr)
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
    return m_strText[0];
}