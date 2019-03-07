#include <string>

class word
{
public:
    word(std::string the_word);
    virtual ~word();

    virtual void update_word(std::string word);
    virtual std::string get_word();

private:
    std::string _the_word;
};

