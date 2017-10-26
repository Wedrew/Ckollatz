# Collatz-Calculations
Collatz-Calculations is a cross-platform, visualization program that utilizes SDL2 and OpengGL 3.X to highlight some of the interesting properties about the Collatz Conjecture. It performs many calculations on the backend which, at the moment, aren't accessible without a GNU debugger (But feel free to dig around for them). Currently there isn't any way to interact with the data other than editing the code. Maybe I'll add an interface...

# Example Screenshots:
![ScreenShot](https://i.imgur.com/XqW13z9.png)
x-axis represents starting number, y-axis represents corresponding length of orbit to 1

![ScreenShot](https://i.imgur.com/j21NGbc.png)
x-axis represents starting number y-axis represents the orbital sum

# Compiling
OSX:
  * Need SDL2, OpenGL3.0 minimum and a modern GCC or Clang compiler installed on computer
  * Clone repository and cd to root directory
  * ```brew install sdl && brew install sdl2```
  * ```$ g++ *.cpp -o Collatz -std=c++11 -lSDL2 -framework Cocoa```
  * ```$ ./Collatz```
  * ???
  * Profit
  
Linux:
  * Need SDL2, OpenGL3.0 minimum and a modern GCC or Clang compiler installed on computer
  * Clone repository and cd to root directory
  * ```sudo apt-get install libsdl2-dev```
  * ```$ g++ *.cpp -o Collatz -std=c++11 -lSDL2```
  * ```$ ./Collatz```

Windows:
  * ```¯\_(ツ)_/¯```
