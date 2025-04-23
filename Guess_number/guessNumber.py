import random

number = random.randint(1, 10)
tentativas = 0
print("Adivinhe o número entre 1 e 10")
while tentativas < 3:
    palpite = int(input("Digite seu palpite: "))
    tentativas += 1
    if palpite == number:
        print("Parabéns! Você adivinhou o número.")
        break
    elif palpite < number:
        print("O número é maior.")
    else:
        print("O número é menor.")
if tentativas == 3:
    print("Você perdeu! O número era", number)