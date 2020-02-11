#-*- coding:utf-8 -*-
import os
import datetime
#删除旧文件
os.system("rm -r /home/pi/Desktop/刷题/code_trainning_huawei/*")
#拷贝新的c文件
os.system("cp -r /home/pi/Desktop/刷题/*.c /home/pi/Desktop/刷题/code_trainning_huawei/")
#拷贝新的py文件
os.system("cp -r /home/pi/Desktop/刷题/*.py /home/pi/Desktop/刷题/code_trainning_huawei/")
#拷贝新的py文件
os.system("cd /home/pi/Desktop/刷题/code_trainning_huawei/")
#拷贝新的py文件
os.system("ssh -T git@github.com")
#拷贝新的py文件
os.system("git add /home/pi/Desktop/刷题/code_trainning_huawei/*")
#拷贝新的py文件
time=datetime.datetime.now()
string_ = "git commit -m "+str(time)
os.system(string_)
#拷贝新的py文件
os.system("git push")
