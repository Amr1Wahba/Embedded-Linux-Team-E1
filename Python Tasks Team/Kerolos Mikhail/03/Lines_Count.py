# Python program to count lines
# in text file

def lines_count_func(text_file):

    with open(text_file) as myfile:
        # Create list of all lines
        data = myfile.readlines()

    return len(data)    


if __name__ == "__main__":
    print("Number of lines in file : {}".format(lines_count_func("lines.txt")))
    