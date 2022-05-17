# Input
# Expected output
# pglnhenftjdscs pmdchawvngmckde
# lets dance
# 02 Test 2
# Input
# Expected output
# mpndsi5fcdse8r mvljhedsgvcwwdo7frvqk
# nice legwork
# 03 Test 3
# Input
# Expected output
# pdmucipmnjddds olyicokdupmric idfpmeheeujt
# mind your feet

from random import randint


s = input()
#count words in s


#generate random string
def thirdletter(s):
    words = s.split(" ")
    output = ""
    letters=""
    for word in words:
        #take the every third letter in s
        for i in range(2,len(word),3):
            output = output + word[i]
    if(word != words[-1]): output = output + " "
    return(output)
print(thirdletter(s))