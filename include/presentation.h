/*
 * presentation.h
 * Header file for the Presentation layer (GUI).
 */
#ifndef PRESENTATION_H
#define PRESENTATION_H

#include "logic.h"
#include <string>

// Enum to track what screen the user is on
enum AppScreen {
    SCREEN_MAIN_MENU,
    SCREEN_QUIZ,
    SCREEN_LEADERBOARD,
    SCREEN_SEARCH
};

// State structure passed to functions to avoid global variables
struct AppState {
    AppScreen currentScreen = SCREEN_MAIN_MENU;
    
    // Quiz State
    char playerName[128] = "Student";
    std::string selectedCategory = "";
    std::vector<Question> activeQuizQuestions;
    int currentQuestionIndex = 0;
    int currentScore = 0;
    bool quizFinished = false;

    // Search State
    char searchBuffer[256] = "";
    std::vector<Question> searchResults;
};

// Main render function to be called in the ImGui loop
void renderApplicationGUI(AppState& state);

#endif