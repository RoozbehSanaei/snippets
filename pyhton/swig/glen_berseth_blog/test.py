import _example
_example.new_word("meat")
w = _example.new_word("meat")
w1=_example.word_get_word(w)
_example.word_update_word(w,"beef")
w2=_example.word_get_word(w)
print(w1,w2)