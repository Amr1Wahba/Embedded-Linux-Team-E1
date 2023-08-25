# Python program to generate 
# init function of GPIO
# for AVR

def GPIO_init_func():

    ls_bits = []
    for bit in range(8):

        while True:
            mode = input("Please enter Bit {} moode: ".format(bit))

            # Check for user input
            if mode.lower() == "in":
                ls_bits.append('0')
                break
            elif mode.lower() == "out":
                ls_bits.append('1')
                break
            else:
                print("Invalid Input")

    # Convert bits list into string
    ls_bits.reverse()
    bits = "".join(ls_bits)
    # text to display in the file
    data = '''#include "avr/io.h"\n\
\nvoid Init_PORTA_GPIO(void)\n\
{{\n\
    DDRA = 0b{};\n\
}}'''.format(bits)
    
    with open("Init.c", 'w') as GPIO_init:
        GPIO_init.write(data)
        

if __name__ == "__main__":
    GPIO_init_func()