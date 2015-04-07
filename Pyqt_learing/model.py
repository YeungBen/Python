# !/usr/bin/python

# model.py

import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

class main(QWidget):
  """docstring for main"""
  def __init__(self):
    self.SetWindowTitle('main')

app = QApplication(sys.argv)
w = main
w.show()
sys.exit(app.exec_())

