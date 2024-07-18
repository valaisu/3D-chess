# 3D-chess
The aim is to create a playable 3d chess game with Vulkan

I have used code from [Vulkan tutorial](https://vulkan-tutorial.com/Introduction) as a template for this project, the initial commit files are 100% copied from there

# Running the code

Running code requires you to have the Vulkan SDK installed on your computer. 
The program also uses two libraries: stb_image and tiny_obj_loader. 

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
    - [ ] castings

# TODO
- [ ] Dynamic piece container
  - This is required for promotions, and would be good practice
  - [ ] Add pieces
  - [ ] Remove pieces
- [ ] Add rule constrants to piece movement

# Advanced feature ideas
- [ ] Reset game
- [ ] Display legal moves once piece selected
- [ ] Move sheet recording
  - [ ] Go back and forth in moves
- [ ] AI
