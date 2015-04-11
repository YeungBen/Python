# !/usr/bin/env python
# coding:utf-8

import random
number = random.randint(1,100)

while 1==1:
    print "请输入一个1~100之间的自然数:"
    input_number = int(raw_input())
    if number == input_number:
      print "************************************Yes,you catch it! The number is :************************************************"
      print "************************************               %d                ************************************************"%number
      print"**********************************************************************************************************************"
      print"Do you like to guess again?(y/n)"
      answer = raw_input()
      if answer == 'y' :
        number = random.randint(1,100)
        continue
      elif answer == 'n':
        break
      else:
        break
    elif input_number < number:
      if input_number<1:
       print "您输入的数已经小于1"
      else:
        print "小了"
        continue
    elif input_number > number:
      if input_number > 100:
        print "您输入的数已经大于100"
        continue
      else:
        print "大了"
        continue
    else:
      print "Sorry,maybe you are not a human,guess again~_~"
      break

print "Game is over! Thanks for playing~"
