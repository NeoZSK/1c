import pygame

TILE_SIZE = 64
SCREEN_WIDTH = 640
SCREEN_HEIGHT = 480
SIZE_X = 0
SIZE_Y = 0
screen = None
tile_image = None


def init(size_x, size_y):
    global TILE_SIZE
    global SCREEN_WIDTH
    global SCREEN_HEIGHT
    global SIZE_X
    global SIZE_Y
    global screen
    global tile_image

    # Inicjalizacja
    pygame.init()

    # Stałe
    TILE_SIZE = 64
    SIZE_X = size_x
    SIZE_Y = size_y
    SCREEN_WIDTH = TILE_SIZE * size_x
    SCREEN_HEIGHT = TILE_SIZE * size_y


    # Tworzenie okna
    screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
    pygame.display.set_caption("Arbus'n'Melons game")
    tile_image = pygame.image.load("./assets/tile.png").convert_alpha()


def print_map():
    global TILE_SIZE
    global SIZE_X
    global SIZE_Y
    global screen
    global tile_image
    # Wyczyść ekran
    screen.fill((0, 0, 0))

    for y in range(SIZE_Y):
        for x in range(SIZE_X):
            screen.blit(tile_image, (x * TILE_SIZE, y * TILE_SIZE))

    # Aktualizacja ekranu
    pygame.display.flip()


def exit():
    # Zakończenie gry
    pygame.quit()
