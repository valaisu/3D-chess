# 3D-chess
The aim is to create a playable 3D chess game with Vulkan

I have used code from [Vulkan tutorial](https://vulkan-tutorial.com/Introduction) as a template for this project, the initial commit files are 100% copied from there

# Setup guide

### General

This setup guide is for ubuntu, as that is the platform I have developed the program on. 

### Clone the project

If you have not already, clone the project.

### Dependencies overview

To run the project, you need to have the following
- Vulkan SDK
- make
- GLFW
- GLM
- glslc
- stb_image
- tinyobjloader

To get the first 5, I have summed up the linux setup guide from '[Vulkan Tutorial](https://vulkan-tutorial.com/Development_environment#page_Linux)'-website. You can also opt to follow that for the first 5 dependencies. 

### Downloading the dependencies

It's always recommended to start with 
```
sudo apt-get update
```

**Vulkan**: Intall Vulkan SDK with
```
sudo apt install vulkan-tools
sudo apt install libvulkan-dev
sudo apt install vulkan-validationlayers-dev spirv-tools
```
If the last one causes problems removing the dev handle might help:
```
sudo apt install spirv-tools
sudo apt install vulkan-validationlayers
```

**Make**: For compiling the program make is needed, ubuntu should have it by default. To check, you can run
```
make --version
```
And if you don't for some reason have make, you can install it with
```
sudo apt-get install build-essential
```

**GLFW**:
```
sudo apt-get install libglfw3-dev
```

Also this is needed by GLFW:
```
sudo apt install libxxf86vm-dev libxi-dev
```

**GLM**:
```
sudo apt-get install libglm-dev
```

**glslc**:
Download glslc from [here](https://github.com/google/shaderc/blob/main/downloads.md)

Then find the file named 'glslc' and copy that to /usr/local/bin

Here ends the summary of 'Vulkan tutorial'-websites linux setup guide

For the next two dependencies, what I did was I cloned the git repositories, and copied the relevant .h file to the root folder of the project. There are more elegant ways to add libraries, but for a small scale project this way seems the easiest.

Note: only copy the relevant file from the following two:

**stb_image**: clone from [here](https://github.com/nothings/stb), 
relevant file: stb_image.h

**tinyobjloader**: clone from [here](https://github.com/tinyobjloader/tinyobjloader), 
relevant file: tiny_obj_loader.h

### Running the program: 

Navigate to the project root folder, the default name is 3D-chess. Compile the program with
``` 
make
```
Then navigate to ./3D-Chess/shaders . We need to compile the shaders, and for that, you might need to make the compile script executable. This is achieved with
```
chmod +x compile.sh
```
Now you can compile the shaders with
```
./compile.sh
```

Finally, navigate back to ./3D-chess , and run the program with
```
./Chess
```
And a window like this should pop up:
![Program Running](https://github.com/valaisu/3D-chess/blob/main/pictures/ProgramRunning.png)

# Architecture

Here are some very general diagrams about how the program works. To see a bit more detailed explanations, see the starting comments in main.cpp
![General dieagrams](https://github.com/valaisu/3D-chess/blob/main/pictures/diagrams.jpg)

# Controls

Pieces are moved by clicking two squares back to back. 
The board can be rotated with arrow keys left and right.

# Video demo

[A short video](https://drive.google.com/drive/folders/1pR9qI2WiR7No_k3mUgup00z_79j6vXCs?usp=sharing)

# Features

- [x] Move camera around
- [x] Display board and pieces
- [x] Move pieces
- [ ] Rules
  - [x] Eat pieces
  - [ ] Turns
  - [ ] Piece specific movement
  - [ ] Movement restrictions (eg. pinnings)
  - [ ] Special moves
    - [ ] promotions
    - [ ] en passant
    - [ ] castlings

# TODO
- [ ] Dynamic piece container
  - This is required for promotions, and would be good practice
  - [ ] Add pieces
  - [ ] Remove pieces
- [ ] Add rule constraints to piece movement

# Advanced feature ideas
- [ ] Reset game
- [ ] Display legal moves once piece selected
- [ ] Move sheet recording
  - [ ] Go back and forth in moves
- [ ] AI
