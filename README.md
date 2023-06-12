<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banner/new/42_so_long_banner_new.png">
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
The so_long project is a 2D game where the player navigates through a maze-like environment, avoiding obstacles and enemies to reach a goal.
It is created using the minilibx library and requires students to implement game mechanics, file input/output, and basic graphics.

<a href="https://github.com/jotavare/so_long/blob/master/subject/en_subject_so_long.pdf">Click here</a> for the subject of this project.

## HOW TO USE
#### COMPILATION AND EXECUTION
#### 1º - Clone the repository
```bash
git clone git@github.com:jotavare/so_long.git
```
#### 2º - Enter the project folder and run `make` or `make bonus`
> To run the program, you need to download the MiniLibX and include inside the so_long folder.
```bash
cd so_long/so_long
make or make bonus
```

#### 3º - Run the game with a map of your choice
```bash
./so_long maps/valid/mandatory/medium.ber
./so_long_bonus maps/valid/bonus/medium.ber
```

#### MAKEFILE RULES

`make` - Compile so_long.

`make bonus` - Compile so_long_bonus.

`make all`  - Compile mandatory + bonus.

`make clean`  - Delete all .o (object files) files.

`make fclean`  - Delete all .o (object files) and .a (executable) files.

`make re` - use rules `fclean` + `all`.

## MANDATORY
* Must use MiniLibX.
* Makefile should not relink.
* The program has to take a map description file ending with `.ber` extension.

#### GAME
* **Goal:** collect every collectible and escape chosing the shortest route.
* `W` `A` `S` `D` keys must be used to move the main character `up` `down` `left` `right`.
* Can't move into walls.
* Number of movements must be displayed in the shell.
* Must be 2D view and doesnt need to be real time.

#### GRAPHIC MANAGMENT
* Display the image in a window and must remain smooth.
* Pressing `ESC` must close the window and quit the program in a clean way.
* Clicking on the windows cross should do the same behavior as `ESC`.
* The use of the imagges of the MiniLibx is mandatory.

#### MAP
* The map should include 3 components to be constructed: walls, collectibles and free space.
* Should be composed of only these 5 characters:

	* `0` - Empty space.
	* `1` - Wall.
	* `C` - Collectible.
	* `E` - Map exit.
	* `P` - Player starting position.
* The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid.
```
111111111111
1001000000C1
100000011101
1P0011E00001
111111111111
```
* Map must be rectangular.
* Map must be closed/surrounded by walls. If not, the program should return an error.
* Check if there is a valid path in the map.
* The program must be able to parse any kind of map, as long it respects the rules.
* If a error/misconfiguration is encountered, it should return `Error\n` followed by a message.

## BONUS
* Develop original extra features (optional).
* Make the player lose when they touch an enemy patrol.
* Add sprite animation.
* Display the movement count directly on screen, instead of writing in the shell.

## NORMINETTE
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators and variable lenght arrays are allowed
- Each function must be maximum 25 lines, not counting the function's own curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static)
- You can't declare more than 5 variables per function
- ...
```

<a href="https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf">Click here</a> for more information on 42 norms.

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
