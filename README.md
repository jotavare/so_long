<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_so_long.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/evaluated-21%20%2F%2001%20%2F%202023-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/languages/top/jotavare/so_long?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/so_long?color=%2312bab9&style=flat-square" />
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

## ABOUT
This is a 2D game where the player navigates through a maze-like environment to reach a goal, avoiding obstacles and enemies. It is created using the MiniLibX library and I had to implement game mechanics, file input/output, and basic graphics.

- [Subject](https://github.com/jotavare/so_long/blob/master/subject/en_subject_so_long.pdf) `PDF`
- [References](https://github.com/jotavare/42-resources#02-so_long) `GitHub`

## HOW TO USE
#### 1º - Clone the repository
```bash
git clone git@github.com:jotavare/so_long.git
```
#### 2º - Enter the project folder and run `make` or `make bonus`
> **Important:** To run the program, you need to download the MiniLibX.
```bash
cd so_long/so_long
make or make bonus
```

#### 3º - Run the game with a map of your choice
```bash
./so_long [map.ber]
./so_long_bonus [map_bonus.ber]
```

#### MAKEFILE RULES

`make` - Compile so_long files.

`make bonus` - Compile so_long_bonus files.

`make all`  - Compile mandatory + bonus files.

`make clean`  - Delete all .o (object files) files.

`make fclean`  - Delete all .o (object files) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

## MANDATORY
- [x] Must use MiniLibX.
- [x] Makefile must compile source files and should not relink.
- [x] The program has to take as a parameter a map description file ending with the `.ber` extension.

#### GAME
- [x] **Goal:** Collect every collectable and escape choosing the shortest route.
- [x] `W`, `A`, `S` and `D` keys must be used to move the main character `up`, `down`, `left` and `right`.
- [x] Can't move into walls.
- [x] Number of movements must be displayed in the shell.
- [x] Must be a 2D view (top-down or profile).
- [x] Doesn't need to be real-time.

#### GRAPHIC MANAGEMENT
- [x] Display the image in a window and must remain smooth (changing windows, minimizing, ...).
- [x] Pressing `ESC` must close the window and cleanly quit the program.
- [x] Clicking on the window cross must also close and quit the program cleanly.
- [x] The use of the images of the MiniLibx is mandatory.

#### MAP COMPONENTS
- [x] The map should include 3 components to be constructed: walls, collectables and free space.
- [x] Should be composed of only these 5 characters:

| Characters | Description |
| :--: | :--: |
| `0` | Empty space.              |
| `1` | Wall.                     |
| `C` | Collectible.              |
| `E` | Map exit.                 |
| `P` | Player starting position. |

#### MAP VALIDATION
- [x] The map must contain 1 exit, at least 1 collectable, and 1 starting position to be valid.
- [x] Map must be rectangular.
- [x] Map must be closed/surrounded by walls. If not, the program should return an error.
- [x] Check if there is a valid path in the map.
- [x] The program must be able to parse any kind of map, as long it respects the rules.
- [x] If an error/misconfiguration is encountered, it should return `Error\n` followed by an explicit message.

> Map `.ber` example:
```
111111111111
1001000000C1
100000011101
1P0011E00001
111111111111
```

## BONUS
- [x] Develop original extra features (optional).
- [x] Make the player lose when they touch an enemy patrol.
- [x] Add sprite animation.
- [x] Display the movement count directly on the screen, instead of writing in the shell.

## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool to respect the code norm, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/so_long/blob/main/LICENSE">Unlicense</a>.
</p>
