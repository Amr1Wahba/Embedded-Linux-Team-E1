# This program test a letter if it is vowel or not

Letter = input("Please enter letter : ")

Vowels = ('a','A','e','E','i','I','o','O','u','U')

# convert list to set
S_Vowels = set(Vowels)

if Letter in S_Vowels:
    print("Letter " + Letter + " is vowel")
else:
    print("Letter " + Letter + " is  not vowel")
        

