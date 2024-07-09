word = input("Digite uma palavra: ");

to_lower = word.lower();

check_word = to_lower.replace(" ", "");

is_palindrome = True;

length = len(check_word);

for i in range(length // 2):
    if check_word[i] != check_word[length - 1 - i]:
        is_palindrome = False;
        break;

if is_palindrome:
    print("A palavra '{}' é um palindromo".format(word));
else:
    print("A palavra '{}' não é um palindromo".format(word));
