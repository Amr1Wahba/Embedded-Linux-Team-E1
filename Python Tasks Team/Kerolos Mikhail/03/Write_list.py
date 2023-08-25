# Python program to write
# list in text file

def write_list_file(mylist, text_file):

    with open(text_file, '+a') as myfile:
       data = " ".join(mylist)
       myfile.write("\n{}".format(data))


if __name__ == "__main__":
    ls = ['Look', 'at', 'the', 'sky']
    write_list_file(ls, "lines.txt")