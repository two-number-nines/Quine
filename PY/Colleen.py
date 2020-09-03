if __name__ == "__main__":
    data = "if __name__ == %c__main__%c:%c%cdata = %c%s%c%c%cprint(data %c (34, 34, 10, 9, 34, data, 34, 10, 9, 37))"
    print(data % (34, 34, 10, 9, 34, data, 34, 10, 9, 37))