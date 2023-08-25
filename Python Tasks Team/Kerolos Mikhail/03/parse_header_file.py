# Python program to parse header file and read
# all prototypes of function and insert it into
# excel sheet with unique ID

import xlwt


def find_prototypes(headerFile):

    prototypes = []
    is_prototype = False
    with open(headerFile) as hf:
        data = hf.readlines()

    for line in data:
      
        for word in line.split():
            # search if line does not contain '=' or '#'
            if '=' in word or '#' in word:
                is_prototype = False
                break
            # search if ');' exists at the end lf line
            if r');' in word:
                is_prototype = True

            
        if is_prototype:
            prototypes.append(line)
            is_prototype = False  

    return prototypes         

#######################################################
prototypes_list = find_prototypes('stm32f3xx_hal_wwdg.h')

# Create workbook in Excel
wb = xlwt.Workbook()
# Create sheet
sheet1 = wb.add_sheet('sheet1')
# write the headlines
style = xlwt.easyxf('font : bold 1, color blue')
sheet1.write(0, 0,'Prototypes', style)
sheet1.write(0,1, 'Unique ID', style)

# for prototype in prototypes_list:
for prototype, i in zip(prototypes_list, range(1,len(prototypes_list))):
    sheet1.write(i,0, prototype)
    sheet1.write(i,1, 'IDX{}'.format(i-1))

# Save workbook
wb.save("Prototypes.xls")



