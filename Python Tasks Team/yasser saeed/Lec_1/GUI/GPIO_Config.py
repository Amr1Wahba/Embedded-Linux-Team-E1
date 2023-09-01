def write(file_path, content):
    with open(file_path, 'w') as file:
        file.write(content)

input_config = ['in', 'input']
output_config = ['out', 'output']

port = 0
i = 0
while i < 8:
    pin_config = str(input(f"Port A Bit {i}: "))
    if pin_config in input_config:
        port &= ~(1 << i)
    elif pin_config in output_config:
        port |= (1 << i)
    i += 1

file_path = 'gpio.c'
content = f"void init_GPIO(void){{ DDRA = {bin(port)}; }}"

write(file_path, content)


#print(bin(DDRA))
