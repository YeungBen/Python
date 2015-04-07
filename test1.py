# -*- coding:utf8 -*-

numbers = [2, 4, 8, 6, 7, 1, 9, 5, 2, 3]
new_numbers = [x * 2 for x in numbers if x % 2 != 0]
print new_numbers
