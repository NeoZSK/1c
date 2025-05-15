import random
import os

# Gracz jako słownik
player = {
    "name": "",
    "hp": 100,
    "inventory": [],
    "gold": 0,
    "pos": [1, 1]  # start w środku mapy (1,1)
}


enemies = [
    {"name": "Goblin", "hp": 30, "attack": (5, 10)},
    {"name": "Skeleton", "hp": 25, "attack": (4, 8)},
    {"name": "Orc", "hp": 40, "attack": (6, 12)}
]


loot_table = {"Magic Sword", "Healing Potion", "Gold Coin", "Shield"}

map_grid = [[False for _ in range(3)] for _ in range(3)]

def is_alive():
    return player["hp"] > 0

def print_map():
    print("\n🗺️ Mapa:")
    for y in range(3):
        row = ""
        for x in range(3):
            if [y, x] == player["pos"]:
                row += " [X] "
            elif map_grid[y][x]:
                row += " [.] "
            else:
                row += " [ ] "
        print(row)

def move_player():
    print_map()
    move = input("Ruch (WASD): ").lower()
    y, x = player["pos"]
    if move == 'w' and y > 0:
        player["pos"][0] -= 1
    elif move == 's' and y < 2:
        player["pos"][0] += 1
    elif move == 'a' and x > 0:
        player["pos"][1] -= 1
    elif move == 'd' and x < 2:
        player["pos"][1] += 1
    else:
        print("❌ Nie można tam pójść.")

def fight(enemy):
    print(f"\n⚔️ Walka z {enemy['name']}!")

    while enemy["hp"] > 0 and is_alive():
        damage = random.randint(10, 20)
        enemy["hp"] -= damage
        print(f"{player['name']} zadaje {damage} obrażeń!")
        if enemy["hp"] <= 0:
            print(f"{enemy['name']} pokonany!")
            reward = random.choice(list(loot_table))
            print(f"🎁 Zdobyto: {reward}")
            player["inventory"].append(reward)
            if reward == "Gold Coin":
                player["gold"] += 10
            break
        enemy_damage = random.randint(*enemy["attack"])
        player["hp"] -= enemy_damage
        print(f"{enemy['name']} zadaje {enemy_damage} obrażeń!")

def explore_tile():
    y, x = player["pos"]
    if map_grid[y][x]:
        print("🔄 Już odwiedziłeś to miejsce.")
        return
    map_grid[y][x] = True

    event = random.choice(["enemy", "loot", "nothing"])
    print(f"\n👣 Badasz miejsce ({y}, {x}) — Wydarzenie: {event.upper()}")

    if event == "enemy":
        enemy = random.choice(enemies)
        print(f"Napotykasz: {enemy['name']}")
        choice = input("Co chcesz zrobić? [1] Walcz [2] Ucieknij: ")
        if choice == '1':
            fight(enemy)
        else:
            print("Uciekasz w pośpiechu...")
    elif event == "loot":
        item = random.choice(list(loot_table))
        print(f"🎁 Znaleziono przedmiot: {item}")
        player["inventory"].append(item)
        if item == "Gold Coin":
            player["gold"] += 5
        elif item == "Healing Potion":
            player["hp"] += 20
            print("🧪 Leczenie +20 HP!")
    else:
        print("🔍 Nic tu nie ma...")
    
    input("Naciśnij Enter, aby kontynuować...")

def show_status():
    print(f"\n❤️ HP: {player['hp']} | 🎒 Ekwipunek: {player['inventory']} | 💰 Złoto: {player['gold']}")

def game():
    player["name"] = input("Podaj imię bohatera: ")

    while is_alive():
        os.system("cls")
        show_status()
        move_player()
        explore_tile()
        # Sprawdź czy wszystkie pola odwiedzone
        if all(all(row) for row in map_grid):
            break

    print("\n🏁 Koniec gry!")
    show_status()

if __name__ == "__main__":
    game()
