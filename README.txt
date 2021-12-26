Simple experiment to see how long does it take for a word to 'randomly' _morpy_
into another word. It starts with 2 words, one we want to morph into, and one
we are morphing. In each step, it picks random a position in a word, and a random
'direction' (-1 -> down, 0 -> stays the same, 1 -> up), and increase the letter 
at the given position by 1 in the given direction, and increase the counter. 
Some takeaways:
  - Using modulo to reduce rand() to a specific range is not accurate, not 
    uniform, not safe, and so on. Also, using `/dev/urandom` to get randomness 
    is the best option (should be).
  - "string.h" can brake in so many ways that is simply should not be used at all
  - char is in range [-128,127], but ascii is not, so you can not just print any
    array of chars
  - waiting for a word to randomly morph into another word is not fun is the word
    is longer than 3 characters :(
  - you can silence (hide output) commands in makefile by putting a '@' sign in
    front of them

