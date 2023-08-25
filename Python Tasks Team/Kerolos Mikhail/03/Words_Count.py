# Python program to count words 
# in text file

def words_count_func(text_file):

    words_no = 0
    with open(text_file) as myfile:
        data = myfile.readlines()

    for line in data:
        words_no += len(line.split())

    return words_no


if __name__ == "__main__":
    print(words_count_func("lines.txt"))

