file = open("Grace_kid.py", "w+")
data = "file = open(%cGrace_kid.py%c, %cw+%c)%cdata = %c%s%c%cfile.write(data %c (34, 34, 34, 34, 10, 34, data, 34, 10, 37))"
file.write(data % (34, 34, 34, 34, 10, 34, data, 34, 10, 37))