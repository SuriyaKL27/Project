import random

def JustePrix():

    secret_amount = random.randint(1, 100)

    print("Bienvenue dans le jeu Trouver le Juste Prix !")
    print("Un montant entre 1 et 100 euros a été choisi. A vous de le deviner.")

    attempts = 0
    has_won = False

    while not has_won:
        player_guess = int(input("Entrez votre estimation en euros : "))
        attempts += 1

        if player_guess == secret_amount:
            print("Félicitations ! Vous avez trouvé le Juste Prix en", attempts, "essai(s).")
            has_won = True
        elif player_guess < secret_amount:
            print("C'est + .")
        else:
            print("C'est - .")

if __name__ == '__JustePrix__':
    JustePrix()
