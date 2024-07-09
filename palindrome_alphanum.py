word = input("Digite uma palavra: ");

check_word = word.replace(" ", "").lower();

#slicing: serve para acessar partes de sequencias, nesse caso: str.
#[start:stop:step] :-1 (percorro de tras pra frente).

is_palindrome = check_word == check_word[::-1];

if is_palindrome:
    print("A palavra '{}' é um palíndromo.".format(word));
else:
    print("A palavra '{}' não é um palíndromo.".format(word));
