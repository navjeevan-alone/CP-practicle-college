# wap, to count the occurances of a word in a text file 
# Program:
filename=input("Enter filename: ")
keyword=input("Enter the word to search : ")
with open(filename, 'r') as file:
    data = file.read().replace('\n', '')
    wordcount=data.count(keyword)
    print(wordcount)

# Output:
# Enter filename: text.txt
# Enter the word to search : dancing
# 4