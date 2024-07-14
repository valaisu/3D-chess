#ifndef CHESS_H
#define CHESS_H

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/hash.hpp>

#include <iostream>
#include <vector>
#include <array>
#include <string>

// Describes a location on board defined by two coordinates
struct BoardLocation {
    int boardCoordNum;
    int boardCoordChar; // 1->a, 2->b, ...

    BoardLocation(int x, int y) : boardCoordNum(x), boardCoordChar(y) {}

    bool operator==(const BoardLocation& other) const {
        return (boardCoordNum == other.boardCoordNum && boardCoordChar == other.boardCoordChar);
    }

    // This is needed for map
    bool operator<(const BoardLocation& other) const {
        return (boardCoordNum * 8 + boardCoordChar < other.boardCoordNum * 8 + other.boardCoordChar);
    }
};

// Constants for model paths, names, and initial coordinates
const std::vector<std::string> MODEL_PATHS = {
    "models/rook.obj", "models/knight.obj", "models/bishop.obj", "models/queen.obj", "models/king.obj", "models/bishop.obj", "models/knight.obj", "models/rook.obj",
    "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", 
    "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", "models/pawn.obj", 
    "models/rook.obj", "models/knight.obj", "models/bishop.obj", "models/queen.obj", "models/king.obj", "models/bishop.obj", "models/knight.obj", "models/rook.obj",
    "models/chessBoard1.obj", "models/chessBoard2.obj"
};

const std::vector<std::string> MODEL_NAMES = {
    "Rook", "Knight", "Bishop", "Queen", "King", "Bishop", "Knight", "Rook",
    "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", 
    "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", "Pawn", 
    "Rook", "Knight", "Bishop", "Queen", "King", "Bishop", "Knight", "Rook",
    "Light squares", "Dark squares"
};

const std::vector<glm::vec3> MODEL_LOCATIONS = {
    glm::vec3(1.0f, 8.0f, 0.0f), glm::vec3(1.0f, 7.0f, 0.0f), glm::vec3(1.0f, 6.0f, 0.0f), glm::vec3(1.0f, 5.0f, 0.0f), glm::vec3(1.0f, 4.0f, 0.0f), glm::vec3(1.0f, 3.0f, 0.0f), glm::vec3(1.0f, 2.0f, 0.0f), glm::vec3(1.0f, 1.0f, 0.0f),
    glm::vec3(2.0f, 8.0f, 0.0f), glm::vec3(2.0f, 7.0f, 0.0f), glm::vec3(2.0f, 6.0f, 0.0f), glm::vec3(2.0f, 5.0f, 0.0f), glm::vec3(2.0f, 4.0f, 0.0f), glm::vec3(2.0f, 3.0f, 0.0f), glm::vec3(2.0f, 2.0f, 0.0f), glm::vec3(2.0f, 1.0f, 0.0f),
    glm::vec3(7.0f, 8.0f, 0.0f), glm::vec3(7.0f, 7.0f, 0.0f), glm::vec3(7.0f, 6.0f, 0.0f), glm::vec3(7.0f, 5.0f, 0.0f), glm::vec3(7.0f, 4.0f, 0.0f), glm::vec3(7.0f, 3.0f, 0.0f), glm::vec3(7.0f, 2.0f, 0.0f), glm::vec3(7.0f, 1.0f, 0.0f),
    glm::vec3(8.0f, 8.0f, 0.0f), glm::vec3(8.0f, 7.0f, 0.0f), glm::vec3(8.0f, 6.0f, 0.0f), glm::vec3(8.0f, 5.0f, 0.0f), glm::vec3(8.0f, 4.0f, 0.0f), glm::vec3(8.0f, 3.0f, 0.0f), glm::vec3(8.0f, 2.0f, 0.0f), glm::vec3(8.0f, 1.0f, 0.0f),
    glm::vec3(4.5f, 4.5f, 0.0f), glm::vec3(4.5f, 4.5f, 0.0f)
};

const std::vector<BoardLocation> INITIAL_COORDS = {
    BoardLocation(0, 0), BoardLocation(0, 1), BoardLocation(0, 2), BoardLocation(0, 3), BoardLocation(0, 4), BoardLocation(0, 5), BoardLocation(0, 6), BoardLocation(0, 7),
    BoardLocation(1, 0), BoardLocation(1, 1), BoardLocation(1, 2), BoardLocation(1, 3), BoardLocation(1, 4), BoardLocation(1, 5), BoardLocation(1, 6), BoardLocation(1, 7),
    BoardLocation(6, 0), BoardLocation(6, 1), BoardLocation(6, 2), BoardLocation(6, 3), BoardLocation(6, 4), BoardLocation(6, 5), BoardLocation(6, 6), BoardLocation(6, 7),
    BoardLocation(7, 0), BoardLocation(7, 1), BoardLocation(7, 2), BoardLocation(7, 3), BoardLocation(7, 4), BoardLocation(7, 5), BoardLocation(7, 6), BoardLocation(7, 7)
};

#endif // CHESS_H

