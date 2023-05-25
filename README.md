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
	<a href="#disclaimer">Disclaimer</a> •
	<a href="#testers">Testers</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The so_long project is a 2D game where the player navigates through a maze-like environment, avoiding obstacles and enemies to reach a goal.
It is created using the minilibx library and requires students to implement game mechanics, file input/output, and basic graphics.

<a href="https://github.com/jotavare/libft/blob/master/subject/en_subject_so_long.pdf">Click here</a> for the subject of this project.

## HOW TO USE
#### COMPILE
#### 1º - Clone the repository
```bash
git clone git@github.com:jotavare/so_long.git
```
#### 2º - Enter the project folder and run `make` or `make bonus`
```bash
cd so_long\so_long
make (bonus)
```
#### 3º - Run the game with a map of your choice
```bash
./so_long maps/valid/mandatory/medium.ber
./so_long_bonus maps/valid/bonus/medium.ber
```
#### MAKEFILE RULES

`make` - Compile so_long.

``make bonus`` - Compile so_long_bonus.

``make all`` - Compile all.

``make clean`` - Delete all .o (object files) files.

``make fclean`` - Delete all .o (object files) and .a (executable) files.

``make re`` - use rules `fclean` + `all`

## DISCLAIMER
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```bash
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
- ...
```

<a href="https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf">Click here</a> for more information on 42 norms.

## TESTERS
* [So_long Map Validator](https://github.com/Nuno-Jesus/so_long_map_validator)

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
