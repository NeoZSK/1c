import math
import random
import os

player = {
    "exp": 500,
    "hp": 100,
    "max_hp": 100,
    "pos": [0,0]
}

WIDTH = 7
HEIGHT = 7

map = [[False] * WIDTH for i in range(HEIGHT)]

def print_map():
    for (y,row) in enumerate(map):
        print()
        for (x,field) in enumerate(row):
            # player -> x
            # not discovered -> ?
            # discovered -> -

            if [x, y] == player["pos"]:
                inner = "x"
            elif field == False:
                inner = "?"
            else:
                inner = " "
           
            print(f"[{inner}]", end="")
    print()


def move_player():
    key = input("Your axtion: ")
    x = player["pos"][0]
    y = player["pos"][1]
    map[y][x] = True

    if key == 'w' and  player["pos"][1] > 0:
        player["pos"][1] -= 1
    elif key == 's' and player["pos"][1] < HEIGHT - 1:
        player["pos"][1] += 1
    elif key == 'a' and player["pos"][0] > 0:
        player["pos"][0] -= 1
    elif key == 'd' and player["pos"][0] < WIDTH - 1:
        player["pos"][0] += 1


def interact_trap():
    print()
    print("You triggered a trap!")
    
    if(random.choice([True, False])):
        print("💥 You've been hit!")
        player["hp"] -= 50
    else:
        print("You dodged the trap!")


def fight_enemy():
    print("⚔️ You attacked the enemy!")
    # Here you would implement the logic for attacking an enemy
    # For example, reducing the enemy's health or checking if the player is dead


# interactions = ["enemy", "loot", "trap", "nothing"]
interactions = ["trap"]
def explore_tile():
    x = player["pos"][0]
    y = player["pos"][1]
    if(map[y][x]):
        return

    interaction = random.choice(interactions)

    if interaction == "trap":
        interact_trap()

    elif interaction == "enemy":
        fight_enemy()

def print_info():
    print(f"❤️ {player['hp']}/{player['max_hp']}")
    print(f"✨ lvl {player['exp']/100}")
    print(f"🎒 []")


while player["hp"] > 0:
    os.system('cls')
    print_info()    
    print_map()
    print()
    move_player()
    explore_tile()
    print()
    input("Press Enter to continue...")

os.system('cls')
print_info()
print()
print("💀 Game Over 💀")
print("""
      ______
   .-        -.
  /            \\
 |,  .-.  .-.  ,|
 | )(_o/  \o_)( |
 |/     /\     \|
 (_     ^^     _)
  \__|IIIIII|__/
   | \IIIIII/ |
   \          /
    `--------`
""")
