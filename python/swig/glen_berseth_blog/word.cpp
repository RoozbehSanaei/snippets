/*
  Word.cpp
 
   Created on: 2015-10-25
       Author: gberseth
 */

#include "word.h"
#include <string>

word::word(std::string the_word) :
    _the_word(the_word)
{
    // TODO Auto-generated constructor stub
}

word::~word() {
    // TODO Auto-generated destructor stub
}

void word::update_word(std::string word)
{
    this->_the_word = word;
}

std::string word::get_word()
{
    return this->_the_word;
}