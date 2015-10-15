Count words

Given a list of strings, implement a function, called count_words(arr) which returns a dictionary of the following kind:

{ "word" : count }
Where count is the count of occurrences of the word in the list arr.

Signature

def count_words(arr):
    pass
Test examples

>>> count_words(["apple", "banana", "apple", "pie"])
{'apple': 2, 'pie': 1, 'banana': 1}
>>> count_words(["python", "python", "python", "ruby"])
{'ruby': 1, 'python': 3}