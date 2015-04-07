#!/usr/bin/env python
#coding:utf8
import re,urllib
url='http://www.ttlsa.com/'
def getHtml():
    page = urllib.urlopen(url)
    html = page.read()
    return html

def getImg(html):
    reg = r'<img src="(.*?\.\w{3,4})"'
    imgre = re.compile(reg)
    imglist = re.findall(imgre,html)
    n = 0
    print imglist
    for imgurl in imglist:
        n=n+1
        pic_suffix = imgurl.split('.')[-1]
        if imgurl[0:4] == 'http':
            print imgurl
            urllib.urlretrieve(imgurl,'%d.%s' % (n,pic_suffix))
        else:
            print url + imgurl
            urllib.urlretrieve(url + imgurl,'%d.%s' % (n,pic_suffix))

U=getHtml()
getImg(U)
