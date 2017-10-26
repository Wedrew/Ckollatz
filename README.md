# Collatz
Collatz-Calculations is a cross-platform, visualization program that utilizes SDL2 and OpengGL 3.X to highlight some of the interesting properties about the Collatz Conjecture. It also performs many calculations on the backend which, at the moment, aren't accessible without a GNU debugger (But feel free to dig around for them). I plan on adding support for outputting these calculations to files as well as a GUI in the near future.

# Example Screenshots:
![ScreenShot](https://i.imgur.com/sD6eVEB.png)
x-axis represents starting number, y-axis represents corresponding length of orbit to 1

![ScreenShot](https://i.imgur.com/yxTL474.png)
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

